#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>



QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_carica_file_clicked();

    void on_cerca_textChanged(const QString &arg1);

    void on_filtro_itemSelectionChanged();

    void on_aggiungi_in_coda_clicked();

    void on_add_btn_clicked();

    void on_rimuovi_clicked();

    void on_salva_clicked();

    void salva();

    void numera();

    void on_settings_toggle_clicked();

    void on_duplicati_clicked();

    void on_duplicati_on_clicked();

    void visibili();

    void carica(std::string, bool);

    void hidden_add(bool);

    void deseleziona();

    void resetDuplicati();

    void aggiornaConteggi();

    void applicaFiltroDuplicati();

    void aggiornaConteggioMaterie();

private:
    Ui::MainWindow *ui;
};
#endif
