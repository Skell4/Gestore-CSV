#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QListWidget>
#include <QFileDialog>
#include <QDebug>
#include <QScrollBar>
#include <QMessageBox>
#include <QApplication>
#include <QStandardPaths>
#include <QDir>
#include <QFileInfo>
#include <QTextStream>
#include <QCoreApplication>

#include <sstream>

#include <string>
#include <fstream>

#define FILTRO1 "Codice Corso"
#define FILTRO2 "Corso"
#define FILTRO3 "Materia"
#define FILTRO4 "Codice Materia"
#define FILTRO5 "Matricola"
#define FILTRO6 "Cognome"
#define FILTRO7 "Nome"
#define TUTTI "Tutti"
#define FILE_PATH "path.txt"

std::string fileName;
bool duplicatiAttivati = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    this->setWindowIcon(QIcon(":/icone/img/icon.png"));
    this->setWindowTitle("Gestore CSV");

    ui->filtro->addItem(TUTTI);
    ui->filtro->addItem(FILTRO1);
    ui->filtro->addItem(FILTRO2);
    ui->filtro->addItem(FILTRO3);
    ui->filtro->addItem(FILTRO4);
    ui->filtro->addItem(FILTRO5);
    ui->filtro->addItem(FILTRO6);
    ui->filtro->addItem(FILTRO7);

    QList<QListWidgetItem*> items = ui->filtro->findItems(TUTTI, Qt::MatchExactly);
    if (!items.isEmpty()) {
        ui->filtro->setCurrentItem(items.first());
    }

    ui->duplicati_on->setHidden(true);

    ui->filtro->setHidden(true);

    ui->scodice_corso->setHidden(true);
    ui->snome_corso->setHidden(true);
    ui->scodice_materia->setHidden(true);
    ui->snome_materia->setHidden(true);
    ui->smatricola->setHidden(true);
    ui->scognome->setHidden(true);
    ui->snome->setHidden(true);

    hidden_add(true);

    QList<QListWidget*> lists = {
        ui->numero,
        ui->codice_corso,
        ui->nome_corso,
        ui->codice_materia,
        ui->nome_materia,
        ui->matricola,
        ui->cognome,
        ui->nome
    };

    for (QListWidget *listA : lists)
    {
        for (QListWidget *listB : lists) {
            if (listA != listB) {
                connect(listA->verticalScrollBar(), &QScrollBar::valueChanged,
                        listB->verticalScrollBar(), &QScrollBar::setValue);
            }
        }
        connect(listA, &QListWidget::currentRowChanged, this, [=](int row) {
            for (QListWidget *listB : lists) {
                if (listA != listB) {
                    listB->setCurrentRow(row);
                }
            }
        });
    }
    for (QListWidget *list : lists) {
        list->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        list->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    }
    ui->nome->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

    ui->filtro->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->filtro->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    std::fstream fin(FILE_PATH,std::ios::in);
    if(fin){
        std::string percorso;
        std::getline(fin,percorso);
        carica(percorso, false);
        fin.close();
    }
}


MainWindow::~MainWindow()
{
    salva();
    delete ui;
}

void MainWindow::numera()
{
    unsigned int n = ui->numero->count();
    ui->numero->clear();
    for(size_t i = 1; i <= n; i++)
    {
        ui->numero->addItem(QString::number(i));
    }
}

void MainWindow::on_carica_file_clicked(){
    QString s = QFileDialog::getOpenFileName(this, tr("Apri file CSV"),QStandardPaths::writableLocation(QStandardPaths::DesktopLocation),tr("File CSV (*.csv)"));
    if (s.isEmpty()) return;

    std::string filePathStd = s.toStdString();

    try{
        if(filePathStd.substr(filePathStd.size()-4,filePathStd.size()-1) != ".csv"){
            QMessageBox::warning(this, tr("Errore"), tr("Il file deve essere un file CSV."));
            return;
        }
    }
    catch(...)
    {
        QMessageBox::warning(this, tr("Errore"), tr("Impossibile aprire il file CSV."));
        return;
    }

    carica(filePathStd, true);
}

void MainWindow::carica(std::string pathStd, bool msg){
    std::fstream fin(pathStd,std::ios::in);
    if (!fin) {
        if(msg) QMessageBox::warning(this, tr("Errore"), tr("Impossibile aprire il file CSV."));
        return;
    }

    std::fstream fout(FILE_PATH,std::ios::out);
    fout<<pathStd;
    fout.close();
    fileName = pathStd;

    ui->numero->clear();
    ui->codice_corso->clear();
    ui->nome_corso->clear();
    ui->codice_materia->clear();
    ui->nome_materia->clear();
    ui->matricola->clear();
    ui->cognome->clear();
    ui->nome->clear();

    std::string header;
    std::getline(fin, header);
    const std::string defaultInizio =
        "codice_corso,descrizione_corso,codice_materia,descrizione_materia,matricola_studente,cognome_studente,nome_studente";
    if (header != defaultInizio) {
        QMessageBox::warning(this, tr("Errore"), tr("CSV non corrisponde al formato atteso."));
        fin.close();
        return;
    }

    std::string row;
    int rowIndex = 1;

    while (std::getline(fin, row)) {
        if (row.empty()) continue;

        ui->numero->addItem(QString::number(rowIndex));
        std::stringstream ss(row);
        std::string campo;

        std::getline(ss, campo, ',');
        ui->codice_corso->addItem(QString::fromStdString(campo));

        std::getline(ss, campo, ',');
        ui->nome_corso->addItem(QString::fromStdString(campo));

        std::getline(ss, campo, ',');
        ui->codice_materia->addItem(QString::fromStdString(campo));

        std::getline(ss, campo, ',');
        ui->nome_materia->addItem(QString::fromStdString(campo));

        std::getline(ss, campo, ',');
        ui->matricola->addItem(QString::fromStdString(campo));

        std::getline(ss, campo, ',');
        ui->cognome->addItem(QString::fromStdString(campo));

        std::getline(ss, campo);
        ui->nome->addItem(QString::fromStdString(campo));

        ++rowIndex;
    }

    fin.close();
    duplicatiAttivati = false;
    aggiornaConteggi();
}

void MainWindow::on_duplicati_clicked()
{
    if (ui->numero->count() <= 0) {
        QMessageBox::warning(this, tr("Errore"), tr("File .csv non trovato."));
        return;
    }

    applicaFiltroDuplicati();

    ui->duplicati_on->setHidden(false);
    ui->duplicati->setHidden(true);
    duplicatiAttivati = true;
    deseleziona();
    aggiornaConteggi();
}

void MainWindow::applicaFiltroDuplicati()
{
    QSet<QString> nomiCompostiVisti;
    int count = ui->nome->count();

    for (int i = 0; i < count; ++i) {
        if (ui->numero->item(i)->isHidden()) {
            continue;
        }

        QString nome    = ui->nome->item(i)->text().trimmed();
        QString cognome = ui->cognome->item(i)->text().trimmed();
        QString nomeComp = nome + " " + cognome;

        if (nomiCompostiVisti.contains(nomeComp)) {
            ui->numero->item(i)->setHidden(true);
            ui->codice_corso->item(i)->setHidden(true);
            ui->nome_corso->item(i)->setHidden(true);
            ui->codice_materia->item(i)->setHidden(true);
            ui->nome_materia->item(i)->setHidden(true);
            ui->matricola->item(i)->setHidden(true);
            ui->cognome->item(i)->setHidden(true);
            ui->nome->item(i)->setHidden(true);
        }
        else {
            nomiCompostiVisti.insert(nomeComp);
        }
    }
}

void MainWindow::on_duplicati_on_clicked()
{
    if (ui->numero->count() <= 0) {
        QMessageBox::warning(this, tr("Errore"), tr("File .csv non trovato."));
        return;
    }

    duplicatiAttivati = false;
    ui->duplicati_on->setHidden(true);
    ui->duplicati->setHidden(false);

    on_cerca_textChanged(ui->cerca->text());

    deseleziona();
    aggiornaConteggi();
}

void MainWindow::resetDuplicati(){
    ui->duplicati_on->setHidden(true);
    ui->duplicati->setHidden(false);
    duplicatiAttivati = false;
}

void MainWindow::visibili()
{
    for (int i = 0; i < ui->numero->count(); ++i) {
        ui->numero->item(i)->setHidden(false);
        ui->codice_corso->item(i)->setHidden(false);
        ui->nome_corso->item(i)->setHidden(false);
        ui->codice_materia->item(i)->setHidden(false);
        ui->nome_materia->item(i)->setHidden(false);
        ui->matricola->item(i)->setHidden(false);
        ui->cognome->item(i)->setHidden(false);
        ui->nome->item(i)->setHidden(false);
    }
    on_cerca_textChanged(ui->cerca->text());
}

void MainWindow::on_cerca_textChanged(const QString &arg1)
{
    const int count = ui->cognome->count();
    QListWidgetItem *itemFiltro = ui->filtro->currentItem();
    if (!itemFiltro) return;

    QString filtro = itemFiltro->text();

    ui->scodice_corso->setHidden(true);
    ui->snome_corso->setHidden(true);
    ui->scodice_materia->setHidden(true);
    ui->snome_materia->setHidden(true);
    ui->smatricola->setHidden(true);
    ui->scognome->setHidden(true);
    ui->snome->setHidden(true);

    for (int i = 0; i < count; ++i) {
        QString campo;
        bool match = false;

        if (filtro == FILTRO1) {
            campo = ui->codice_corso->item(i)->text();
            ui->scodice_corso->setHidden(false);
        } else if (filtro == FILTRO2) {
            campo = ui->nome_corso->item(i)->text();
            ui->snome_corso->setHidden(false);
        } else if (filtro == FILTRO3) {
            campo = ui->codice_materia->item(i)->text();
            ui->scodice_materia->setHidden(false);
        } else if (filtro == FILTRO4) {
            campo = ui->nome_materia->item(i)->text();
            ui->snome_materia->setHidden(false);
        } else if (filtro == FILTRO5) {
            campo = ui->matricola->item(i)->text();
            ui->smatricola->setHidden(false);
        } else if (filtro == FILTRO6) {
            campo = ui->cognome->item(i)->text();
            ui->scognome->setHidden(false);
        } else if (filtro == FILTRO7) {
            campo = ui->nome->item(i)->text();
            ui->snome->setHidden(false);
        }

        if (filtro == TUTTI) {
            match =
                ui->codice_corso->item(i)->text().contains(arg1, Qt::CaseInsensitive) ||
                ui->nome_corso->item(i)->text().contains(arg1, Qt::CaseInsensitive) ||
                ui->codice_materia->item(i)->text().contains(arg1, Qt::CaseInsensitive) ||
                ui->nome_materia->item(i)->text().contains(arg1, Qt::CaseInsensitive) ||
                ui->matricola->item(i)->text().contains(arg1, Qt::CaseInsensitive) ||
                ui->cognome->item(i)->text().contains(arg1, Qt::CaseInsensitive) ||
                ui->nome->item(i)->text().contains(arg1, Qt::CaseInsensitive);
        } else {
            match = campo.contains(arg1, Qt::CaseInsensitive);
        }

        ui->numero->item(i)->setHidden(!match);
        ui->codice_corso->item(i)->setHidden(!match);
        ui->nome_corso->item(i)->setHidden(!match);
        ui->codice_materia->item(i)->setHidden(!match);
        ui->nome_materia->item(i)->setHidden(!match);
        ui->matricola->item(i)->setHidden(!match);
        ui->cognome->item(i)->setHidden(!match);
        ui->nome->item(i)->setHidden(!match);
    }

    if (duplicatiAttivati) {
        applicaFiltroDuplicati();
    }

    aggiornaConteggi();
}

void MainWindow::aggiornaConteggi()
{
    int visibili = 0;
    int nascosti = 0;

    for (int i = 0; i < ui->numero->count(); ++i) {
        if (!ui->numero->item(i)->isHidden()) {
            visibili++;
        } else {
            nascosti++;
        }
    }

    ui->conta->setText(QString::number(visibili));

    if(duplicatiAttivati) ui->conta->setText(QString("Studenti (non duplicati): %1").arg(visibili));
    else ui->conta->setText(QString("Studenti (duplicati): %1").arg(visibili));
    aggiornaConteggioMaterie();
}

void MainWindow::on_filtro_itemSelectionChanged()
{
    on_cerca_textChanged(ui->cerca->text());
    on_settings_toggle_clicked();
}

void MainWindow::aggiornaConteggioMaterie()
{
    QVector<QString> materieUniche;
    bool check = true;

    for (int i = 0; i < ui->nome_materia->count(); ++i) {
        check = true;
        if (!ui->nome_materia->item(i)->isHidden()) {
            QString materia = ui->nome_materia->item(i)->text().trimmed();
            if (!materia.isEmpty()) {
                for(int j = 0; j < materieUniche.size(); j++){
                    if(materieUniche.at(j) == materia)
                    {
                        check = false;
                        break;
                    }
                }
                if(check)
                    materieUniche.push_back(materia);
            }
        }
    }
    int x = materieUniche.size();

    ui->conta_materie->setText("Materie per corso: " + QString::number(x));
}

void MainWindow::on_aggiungi_in_coda_clicked()
{
    if(ui->codice_corso->count() <= 0){
        QMessageBox::warning(this, "Errore", "File .csv non trovato.");
        return;
    }

    if(ui->add_codice_corso->isHidden() == false){
        hidden_add(true);
    } else {
        hidden_add(false);
    }
}

void MainWindow::on_add_btn_clicked()
{
    if (ui->add_codice_corso->text().isEmpty() ||
        ui->add_nome_corso->text().isEmpty() ||
        ui->add_codice_materia->text().isEmpty() ||
        ui->add_nome_materia->text().isEmpty() ||
        ui->add_matricola->text().isEmpty() ||
        ui->add_cognome->text().isEmpty() ||
        ui->add_nome->text().isEmpty()) {
        QMessageBox::warning(this, "Errore", "Tutti i campi devono essere riempiti.");
        return;
    }

    bool found = false;
    for (int i = 0; i < ui->codice_materia->count(); ++i) {
        if (ui->codice_materia->item(i)->text().trimmed().compare(ui->add_codice_materia->text().trimmed(), Qt::CaseInsensitive) == 0 &&
            ui->nome_materia->item(i)->text().trimmed().compare(ui->add_nome_materia->text().trimmed(), Qt::CaseInsensitive) == 0) {
            found = true;
            break;
        }
    }

    if (!found) {
        QMessageBox::warning(this, "Errore", "Questa materia o il codice materia non esistono.");
        return;
    }

    auto toTitleCaseInline = [](QString text) {
        text = text.toLower();
        QStringList words = text.split(' ', Qt::SkipEmptyParts);
        for (QString &word : words)
            if (!word.isEmpty()) word[0] = word[0].toUpper();
        return words.join(' ');
    };

    ui->numero->addItem(QString::number(ui->numero->count() + 1));
    ui->codice_corso->addItem(toTitleCaseInline(ui->add_codice_corso->text()));
    ui->nome_corso->addItem(toTitleCaseInline(ui->add_nome_corso->text()));
    ui->codice_materia->addItem(toTitleCaseInline(ui->add_codice_materia->text()));
    ui->nome_materia->addItem(toTitleCaseInline(ui->add_nome_materia->text()));
    ui->matricola->addItem(toTitleCaseInline(ui->add_matricola->text()));
    ui->cognome->addItem(toTitleCaseInline(ui->add_cognome->text()));
    ui->nome->addItem(toTitleCaseInline(ui->add_nome->text()));

    hidden_add(true);
    aggiornaConteggi();
}

void MainWindow::on_rimuovi_clicked()
{
    int row = ui->numero->currentRow();
    if (row < 0){
        QMessageBox::warning(this, "Errore", "Elemento non trovato");
        return;
    }

    ui->numero->takeItem(row);
    ui->codice_corso->takeItem(row);
    ui->nome_corso->takeItem(row);
    ui->codice_materia->takeItem(row);
    ui->nome_materia->takeItem(row);
    ui->matricola->takeItem(row);
    ui->cognome->takeItem(row);
    ui->nome->takeItem(row);

    numera();
    aggiornaConteggi();
}


void MainWindow::on_salva_clicked()
{
    salva();
    QApplication::beep();
}

void MainWindow::salva()
{
    std::fstream fout(fileName, std::ios::out);
    fout << "codice_corso,descrizione_corso,codice_materia,descrizione_materia,matricola_studente,cognome_studente,nome_studente"<<std::endl;
    int n = ui->numero->count();
    for (int i = 0; i < n; ++i) {
        fout << ui->codice_corso->item(i)->text().toStdString() << ",";
        fout << ui->nome_corso->item(i)->text().toStdString() << ",";
        fout << ui->codice_materia->item(i)->text().toStdString() << ",";
        fout << ui->nome_materia->item(i)->text().toStdString() << ",";
        fout << ui->matricola->item(i)->text().toStdString() << ",";
        fout << ui->cognome->item(i)->text().toStdString() << ",";
        fout << ui->nome->item(i)->text().toStdString() << std::endl;
    }
}

void MainWindow::on_settings_toggle_clicked()
{
    if(ui->filtro->isHidden() == false){
        ui->filtro->setHidden(true);
    } else {
        ui->filtro->setHidden(false);
    }
}

void MainWindow::deseleziona(){
    ui->numero->clearSelection();
    ui->codice_corso->clearSelection();
    ui->nome_corso->clearSelection();
    ui->codice_materia->clearSelection();
    ui->nome_materia->clearSelection();
    ui->matricola->clearSelection();
    ui->cognome->clearSelection();
    ui->nome->clearSelection();
}

void MainWindow::hidden_add(bool b){
    ui->add_codice_corso->setHidden(b);
    ui->add_nome_corso->setHidden(b);
    ui->add_codice_materia->setHidden(b);
    ui->add_nome_materia->setHidden(b);
    ui->add_matricola->setHidden(b);
    ui->add_cognome->setHidden(b);
    ui->add_nome->setHidden(b);
    ui->add_btn->setHidden(b);
}
