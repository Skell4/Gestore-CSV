/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *numero;
    QListWidget *codice_corso;
    QListWidget *nome_corso;
    QListWidget *codice_materia;
    QListWidget *nome_materia;
    QListWidget *matricola;
    QListWidget *cognome;
    QListWidget *nome;
    QPushButton *carica_file;
    QLineEdit *cerca;
    QListWidget *filtro;
    QPushButton *aggiungi_in_coda;
    QLineEdit *add_codice_corso;
    QLineEdit *add_nome_corso;
    QLineEdit *add_codice_materia;
    QLineEdit *add_nome_materia;
    QLineEdit *add_matricola;
    QLineEdit *add_cognome;
    QLineEdit *add_nome;
    QPushButton *add_btn;
    QPushButton *rimuovi;
    QLabel *riga;
    QLabel *codice_corsob;
    QLabel *descrizione_corsob;
    QLabel *codice_materia_b;
    QLabel *descrizione_materiab;
    QLabel *matricola_studenteb;
    QLabel *cognomeb;
    QLabel *nomeb;
    QLabel *sfondo;
    QLabel *sfondo_2;
    QLabel *sfondo_cerca;
    QPushButton *salva;
    QLabel *conta;
    QLabel *snome_corso;
    QLabel *snome;
    QLabel *scodice_corso;
    QLabel *scodice_materia;
    QLabel *smatricola;
    QLabel *snome_materia;
    QLabel *scognome;
    QPushButton *settings_toggle;
    QLabel *contabg;
    QPushButton *duplicati;
    QPushButton *duplicati_on;
    QLabel *conta_materie;
    QLabel *contabg_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1150, 659);
        MainWindow->setMinimumSize(QSize(1150, 659));
        MainWindow->setMaximumSize(QSize(1150, 659));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        numero = new QListWidget(centralwidget);
        numero->setObjectName("numero");
        numero->setGeometry(QRect(0, 70, 71, 551));
        numero->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50); border-radius: 0px; color: white;"));
        codice_corso = new QListWidget(centralwidget);
        codice_corso->setObjectName("codice_corso");
        codice_corso->setGeometry(QRect(70, 70, 121, 551));
        codice_corso->setStyleSheet(QString::fromUtf8("background-color: rgb(60,60,60); border-radius: 0px; color: white;"));
        nome_corso = new QListWidget(centralwidget);
        nome_corso->setObjectName("nome_corso");
        nome_corso->setGeometry(QRect(190, 70, 201, 551));
        nome_corso->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50); border-radius: 0px; color: white;"));
        codice_materia = new QListWidget(centralwidget);
        codice_materia->setObjectName("codice_materia");
        codice_materia->setGeometry(QRect(390, 70, 121, 551));
        codice_materia->setStyleSheet(QString::fromUtf8("background-color: rgb(60,60,60); border-radius: 0px; color: white;"));
        nome_materia = new QListWidget(centralwidget);
        nome_materia->setObjectName("nome_materia");
        nome_materia->setGeometry(QRect(510, 70, 201, 551));
        nome_materia->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50); border-radius: 0px; color: white;"));
        matricola = new QListWidget(centralwidget);
        matricola->setObjectName("matricola");
        matricola->setGeometry(QRect(710, 70, 121, 551));
        matricola->setStyleSheet(QString::fromUtf8("background-color: rgb(60,60,60); border-radius: 0px; color: white;"));
        cognome = new QListWidget(centralwidget);
        cognome->setObjectName("cognome");
        cognome->setGeometry(QRect(830, 70, 161, 551));
        cognome->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50); border-radius: 0px; color: white;"));
        nome = new QListWidget(centralwidget);
        nome->setObjectName("nome");
        nome->setGeometry(QRect(990, 70, 161, 551));
        nome->setStyleSheet(QString::fromUtf8("background-color: rgb(60,60,60); border-radius: 0px; color: white;\n"
""));
        carica_file = new QPushButton(centralwidget);
        carica_file->setObjectName("carica_file");
        carica_file->setGeometry(QRect(790, 10, 81, 31));
        carica_file->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(55,55,55); border-radius: 5px; color: white;\n"
"font-weight: bold; font-size: 11px;\n"
"}\n"
"QPushButton:hover {\n"
"    font-size: 12px;\n"
"	background-color: rgb(65,65,65);\n"
"}"));
        cerca = new QLineEdit(centralwidget);
        cerca->setObjectName("cerca");
        cerca->setGeometry(QRect(30, 10, 113, 28));
        cerca->setStyleSheet(QString::fromUtf8("background-color: rgba(1,1,1,0); border: 0px;\n"
"color: white;"));
        filtro = new QListWidget(centralwidget);
        filtro->setObjectName("filtro");
        filtro->setGeometry(QRect(140, 50, 131, 151));
        filtro->setStyleSheet(QString::fromUtf8("background-color: rgba(55,55,55,0.92);\n"
"border: 0px;\n"
"border-radius: 6px;\n"
"border-top-left-radius: 0;\n"
"border-top-right-radius: 0;\n"
"color: white;"));
        filtro->setAutoScroll(false);
        aggiungi_in_coda = new QPushButton(centralwidget);
        aggiungi_in_coda->setObjectName("aggiungi_in_coda");
        aggiungi_in_coda->setGeometry(QRect(970, 10, 81, 31));
        aggiungi_in_coda->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(55,55,55); border-radius: 5px; color: white;\n"
"font-weight: bold; font-size: 11px;\n"
"}\n"
"QPushButton:hover {\n"
"    font-size: 12px;\n"
"	background-color: rgb(65,65,65);\n"
"}"));
        add_codice_corso = new QLineEdit(centralwidget);
        add_codice_corso->setObjectName("add_codice_corso");
        add_codice_corso->setGeometry(QRect(70, 620, 121, 31));
        add_codice_corso->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(55,55,55); border-radius: 0px; color: white;\n"
" font-size: 13px;\n"
"border-right: 2px solid rgb(65,65,65);\n"
" border-bottom-left-radius: 7px;\n"
"}\n"
"QLineEdit:hover {\n"
"    font-size: 13px;\n"
"	background-color: rgb(60,60,60);\n"
"}"));
        add_nome_corso = new QLineEdit(centralwidget);
        add_nome_corso->setObjectName("add_nome_corso");
        add_nome_corso->setGeometry(QRect(190, 620, 201, 31));
        add_nome_corso->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(55,55,55); border-radius: 0px; color: white;\n"
" font-size: 13px;\n"
"border-right: 2px solid rgb(65,65,65);\n"
"}\n"
"QLineEdit:hover {\n"
"    font-size: 13px;\n"
"	background-color: rgb(60,60,60);\n"
"}"));
        add_codice_materia = new QLineEdit(centralwidget);
        add_codice_materia->setObjectName("add_codice_materia");
        add_codice_materia->setGeometry(QRect(390, 620, 121, 31));
        add_codice_materia->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(55,55,55); border-radius: 0px; color: white;\n"
" font-size: 13px;\n"
"border-right: 2px solid rgb(65,65,65);\n"
"}\n"
"QLineEdit:hover {\n"
"    font-size: 13px;\n"
"	background-color: rgb(60,60,60);\n"
"}"));
        add_nome_materia = new QLineEdit(centralwidget);
        add_nome_materia->setObjectName("add_nome_materia");
        add_nome_materia->setGeometry(QRect(510, 620, 201, 31));
        add_nome_materia->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(55,55,55); border-radius: 0px; color: white;\n"
" font-size: 13px;\n"
"border-right: 2px solid rgb(65,65,65);\n"
"}\n"
"QLineEdit:hover {\n"
"    font-size: 13px;\n"
"	background-color: rgb(60,60,60);\n"
"}"));
        add_matricola = new QLineEdit(centralwidget);
        add_matricola->setObjectName("add_matricola");
        add_matricola->setGeometry(QRect(710, 620, 121, 31));
        add_matricola->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(55,55,55); border-radius: 0px; color: white;\n"
" font-size: 13px;\n"
"border-right: 2px solid rgb(65,65,65);\n"
"}\n"
"QLineEdit:hover {\n"
"    font-size: 13px;\n"
"	background-color: rgb(60,60,60);\n"
"}"));
        add_cognome = new QLineEdit(centralwidget);
        add_cognome->setObjectName("add_cognome");
        add_cognome->setGeometry(QRect(830, 620, 161, 31));
        add_cognome->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(55,55,55); border-radius: 0px; color: white;\n"
" font-size: 13px;\n"
"border-right: 2px solid rgb(65,65,65);\n"
"}\n"
"QLineEdit:hover {\n"
"    font-size: 13px;\n"
"	background-color: rgb(60,60,60);\n"
"}"));
        add_nome = new QLineEdit(centralwidget);
        add_nome->setObjectName("add_nome");
        add_nome->setGeometry(QRect(990, 620, 161, 31));
        add_nome->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"background-color: rgb(55,55,55); border-radius: 0px; color: white;\n"
" font-size: 13px;\n"
"}\n"
"QLineEdit:hover {\n"
"    font-size: 13px;\n"
"	background-color: rgb(60,60,60);\n"
"}"));
        add_btn = new QPushButton(centralwidget);
        add_btn->setObjectName("add_btn");
        add_btn->setGeometry(QRect(30, 626, 31, 21));
        add_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(55,55,55); border-radius: 5px; color: white;\n"
"font-weight: bold; font-size: 11px;\n"
"}\n"
"QPushButton:hover {\n"
"    font-size: 12px;\n"
"	background-color: rgb(65,65,65);\n"
"}"));
        rimuovi = new QPushButton(centralwidget);
        rimuovi->setObjectName("rimuovi");
        rimuovi->setGeometry(QRect(1060, 10, 81, 31));
        rimuovi->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(55,55,55); border-radius: 5px; color: white;\n"
"font-weight: bold; font-size: 11px;\n"
"}\n"
"QPushButton:hover {\n"
"    font-size: 12px;\n"
"	background-color: rgb(65,65,65);\n"
"}"));
        riga = new QLabel(centralwidget);
        riga->setObjectName("riga");
        riga->setGeometry(QRect(0, 50, 71, 20));
        riga->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        riga->setStyleSheet(QString::fromUtf8("background-color: rgb(40,40,40); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        riga->setTextFormat(Qt::TextFormat::AutoText);
        riga->setAlignment(Qt::AlignmentFlag::AlignCenter);
        codice_corsob = new QLabel(centralwidget);
        codice_corsob->setObjectName("codice_corsob");
        codice_corsob->setGeometry(QRect(70, 50, 121, 20));
        codice_corsob->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        codice_corsob->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        codice_corsob->setTextFormat(Qt::TextFormat::AutoText);
        codice_corsob->setAlignment(Qt::AlignmentFlag::AlignCenter);
        descrizione_corsob = new QLabel(centralwidget);
        descrizione_corsob->setObjectName("descrizione_corsob");
        descrizione_corsob->setGeometry(QRect(190, 50, 201, 20));
        descrizione_corsob->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        descrizione_corsob->setStyleSheet(QString::fromUtf8("background-color: rgb(40,40,40); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        descrizione_corsob->setTextFormat(Qt::TextFormat::AutoText);
        descrizione_corsob->setAlignment(Qt::AlignmentFlag::AlignCenter);
        codice_materia_b = new QLabel(centralwidget);
        codice_materia_b->setObjectName("codice_materia_b");
        codice_materia_b->setGeometry(QRect(390, 50, 121, 20));
        codice_materia_b->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        codice_materia_b->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        codice_materia_b->setTextFormat(Qt::TextFormat::AutoText);
        codice_materia_b->setAlignment(Qt::AlignmentFlag::AlignCenter);
        descrizione_materiab = new QLabel(centralwidget);
        descrizione_materiab->setObjectName("descrizione_materiab");
        descrizione_materiab->setGeometry(QRect(510, 50, 201, 20));
        descrizione_materiab->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        descrizione_materiab->setStyleSheet(QString::fromUtf8("background-color: rgb(40,40,40); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        descrizione_materiab->setTextFormat(Qt::TextFormat::AutoText);
        descrizione_materiab->setAlignment(Qt::AlignmentFlag::AlignCenter);
        matricola_studenteb = new QLabel(centralwidget);
        matricola_studenteb->setObjectName("matricola_studenteb");
        matricola_studenteb->setGeometry(QRect(710, 50, 121, 20));
        matricola_studenteb->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        matricola_studenteb->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        matricola_studenteb->setTextFormat(Qt::TextFormat::AutoText);
        matricola_studenteb->setAlignment(Qt::AlignmentFlag::AlignCenter);
        cognomeb = new QLabel(centralwidget);
        cognomeb->setObjectName("cognomeb");
        cognomeb->setGeometry(QRect(830, 50, 161, 20));
        cognomeb->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        cognomeb->setStyleSheet(QString::fromUtf8("background-color: rgb(40,40,40); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        cognomeb->setTextFormat(Qt::TextFormat::AutoText);
        cognomeb->setAlignment(Qt::AlignmentFlag::AlignCenter);
        nomeb = new QLabel(centralwidget);
        nomeb->setObjectName("nomeb");
        nomeb->setGeometry(QRect(990, 50, 161, 20));
        nomeb->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        nomeb->setStyleSheet(QString::fromUtf8("background-color: rgb(50,50,50); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        nomeb->setTextFormat(Qt::TextFormat::AutoText);
        nomeb->setAlignment(Qt::AlignmentFlag::AlignCenter);
        sfondo = new QLabel(centralwidget);
        sfondo->setObjectName("sfondo");
        sfondo->setGeometry(QRect(0, 620, 1151, 41));
        sfondo->setStyleSheet(QString::fromUtf8("background-color: rgb(45,45,45); border-radius: 0px;\n"
"border-top: 2px solid rgb(65,65,65);"));
        sfondo_2 = new QLabel(centralwidget);
        sfondo_2->setObjectName("sfondo_2");
        sfondo_2->setGeometry(QRect(0, 0, 1151, 51));
        sfondo_2->setStyleSheet(QString::fromUtf8("background-color: rgb(45,45,45); border-radius: 0px;\n"
"border-bottom: 2px solid rgb(65,65,65);"));
        sfondo_cerca = new QLabel(centralwidget);
        sfondo_cerca->setObjectName("sfondo_cerca");
        sfondo_cerca->setGeometry(QRect(10, 10, 121, 31));
        sfondo_cerca->setStyleSheet(QString::fromUtf8("background-color: rgb(55,55,55); border-radius: 5px;"));
        salva = new QPushButton(centralwidget);
        salva->setObjectName("salva");
        salva->setGeometry(QRect(880, 10, 81, 31));
        salva->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(55,55,55); border-radius: 5px; color: white;\n"
"font-weight: bold; font-size: 11px;\n"
"}\n"
"QPushButton:hover {\n"
"    font-size: 12px;\n"
"	background-color: rgb(65,65,65);\n"
"}"));
        conta = new QLabel(centralwidget);
        conta->setObjectName("conta");
        conta->setGeometry(QRect(190, 10, 321, 28));
        conta->setStyleSheet(QString::fromUtf8("color: white;font-weight: bold;font-size: 13px;"));
        snome_corso = new QLabel(centralwidget);
        snome_corso->setObjectName("snome_corso");
        snome_corso->setGeometry(QRect(190, 50, 201, 20));
        snome_corso->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        snome_corso->setStyleSheet(QString::fromUtf8("background-color: rgb(90,90,90);border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        snome_corso->setTextFormat(Qt::TextFormat::AutoText);
        snome_corso->setAlignment(Qt::AlignmentFlag::AlignCenter);
        snome = new QLabel(centralwidget);
        snome->setObjectName("snome");
        snome->setGeometry(QRect(990, 50, 161, 20));
        snome->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        snome->setStyleSheet(QString::fromUtf8("background-color: rgb(90,90,90); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        snome->setTextFormat(Qt::TextFormat::AutoText);
        snome->setAlignment(Qt::AlignmentFlag::AlignCenter);
        scodice_corso = new QLabel(centralwidget);
        scodice_corso->setObjectName("scodice_corso");
        scodice_corso->setGeometry(QRect(70, 50, 121, 20));
        scodice_corso->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        scodice_corso->setStyleSheet(QString::fromUtf8("background-color: rgb(90,90,90); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        scodice_corso->setTextFormat(Qt::TextFormat::AutoText);
        scodice_corso->setAlignment(Qt::AlignmentFlag::AlignCenter);
        scodice_materia = new QLabel(centralwidget);
        scodice_materia->setObjectName("scodice_materia");
        scodice_materia->setGeometry(QRect(390, 50, 121, 20));
        scodice_materia->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        scodice_materia->setStyleSheet(QString::fromUtf8("background-color: rgb(90,90,90); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        scodice_materia->setTextFormat(Qt::TextFormat::AutoText);
        scodice_materia->setAlignment(Qt::AlignmentFlag::AlignCenter);
        smatricola = new QLabel(centralwidget);
        smatricola->setObjectName("smatricola");
        smatricola->setGeometry(QRect(710, 50, 121, 20));
        smatricola->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        smatricola->setStyleSheet(QString::fromUtf8("background-color: rgb(90,90,90); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        smatricola->setTextFormat(Qt::TextFormat::AutoText);
        smatricola->setAlignment(Qt::AlignmentFlag::AlignCenter);
        snome_materia = new QLabel(centralwidget);
        snome_materia->setObjectName("snome_materia");
        snome_materia->setGeometry(QRect(510, 50, 201, 20));
        snome_materia->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        snome_materia->setStyleSheet(QString::fromUtf8("background-color: rgb(90,90,90); border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        snome_materia->setTextFormat(Qt::TextFormat::AutoText);
        snome_materia->setAlignment(Qt::AlignmentFlag::AlignCenter);
        scognome = new QLabel(centralwidget);
        scognome->setObjectName("scognome");
        scognome->setGeometry(QRect(830, 50, 161, 20));
        scognome->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        scognome->setStyleSheet(QString::fromUtf8("background-color: rgb(90,90,90);border-radius: 0px; color: white;\n"
"font-weight: bold; font-size: 11px;"));
        scognome->setTextFormat(Qt::TextFormat::AutoText);
        scognome->setAlignment(Qt::AlignmentFlag::AlignCenter);
        settings_toggle = new QPushButton(centralwidget);
        settings_toggle->setObjectName("settings_toggle");
        settings_toggle->setGeometry(QRect(140, 10, 31, 31));
        settings_toggle->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(55,55,55); border-radius: 5px; color: white;\n"
"font-weight: bold; font-size: 11px;\n"
"}\n"
"QPushButton:hover {\n"
"    font-size: 12px;\n"
"	background-color: rgb(65,65,65);\n"
"}"));
        contabg = new QLabel(centralwidget);
        contabg->setObjectName("contabg");
        contabg->setGeometry(QRect(180, 10, 341, 31));
        contabg->setStyleSheet(QString::fromUtf8("background-color: rgb(55,55,55); border-radius: 5px;"));
        duplicati = new QPushButton(centralwidget);
        duplicati->setObjectName("duplicati");
        duplicati->setGeometry(QRect(700, 10, 81, 31));
        duplicati->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(55,55,55); border-radius: 5px; color: white;\n"
"font-weight: bold; font-size: 11px;\n"
"}\n"
"QPushButton:hover {\n"
"    font-size: 12px;\n"
"	background-color: rgb(65,65,65);\n"
"}"));
        duplicati_on = new QPushButton(centralwidget);
        duplicati_on->setObjectName("duplicati_on");
        duplicati_on->setGeometry(QRect(700, 10, 81, 31));
        duplicati_on->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"background-color: rgb(55,55,55); border-radius: 5px; color: white;\n"
"font-weight: bold; font-size: 11px;\n"
"}\n"
"QPushButton:hover {\n"
"    font-size: 12px;\n"
"	background-color: rgb(65,65,65);\n"
"}"));
        conta_materie = new QLabel(centralwidget);
        conta_materie->setObjectName("conta_materie");
        conta_materie->setGeometry(QRect(540, 10, 141, 28));
        conta_materie->setStyleSheet(QString::fromUtf8("color: white;font-weight: bold;font-size: 13px;"));
        contabg_2 = new QLabel(centralwidget);
        contabg_2->setObjectName("contabg_2");
        contabg_2->setGeometry(QRect(530, 10, 161, 31));
        contabg_2->setStyleSheet(QString::fromUtf8("background-color: rgb(55,55,55); border-radius: 5px;"));
        MainWindow->setCentralWidget(centralwidget);
        sfondo_2->raise();
        contabg_2->raise();
        sfondo->raise();
        numero->raise();
        codice_corso->raise();
        nome_corso->raise();
        codice_materia->raise();
        nome_materia->raise();
        matricola->raise();
        cognome->raise();
        nome->raise();
        carica_file->raise();
        aggiungi_in_coda->raise();
        add_codice_corso->raise();
        add_nome_corso->raise();
        add_codice_materia->raise();
        add_nome_materia->raise();
        add_matricola->raise();
        add_cognome->raise();
        add_nome->raise();
        add_btn->raise();
        rimuovi->raise();
        riga->raise();
        codice_corsob->raise();
        descrizione_corsob->raise();
        codice_materia_b->raise();
        descrizione_materiab->raise();
        matricola_studenteb->raise();
        cognomeb->raise();
        nomeb->raise();
        sfondo_cerca->raise();
        cerca->raise();
        salva->raise();
        snome_corso->raise();
        snome->raise();
        scodice_corso->raise();
        scodice_materia->raise();
        smatricola->raise();
        snome_materia->raise();
        scognome->raise();
        filtro->raise();
        settings_toggle->raise();
        contabg->raise();
        duplicati->raise();
        duplicati_on->raise();
        conta->raise();
        conta_materie->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        carica_file->setText(QCoreApplication::translate("MainWindow", "\360\237\223\202 Carica", nullptr));
        aggiungi_in_coda->setText(QCoreApplication::translate("MainWindow", "\360\237\223\244 Aggiungi", nullptr));
        add_btn->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        rimuovi->setText(QCoreApplication::translate("MainWindow", "\360\237\227\221\357\270\217 Rimuovi", nullptr));
        riga->setText(QCoreApplication::translate("MainWindow", "Riga", nullptr));
        codice_corsob->setText(QCoreApplication::translate("MainWindow", "Codice corso", nullptr));
        descrizione_corsob->setText(QCoreApplication::translate("MainWindow", "Descrizione corso", nullptr));
        codice_materia_b->setText(QCoreApplication::translate("MainWindow", "Codice materia", nullptr));
        descrizione_materiab->setText(QCoreApplication::translate("MainWindow", "Descrizione materia", nullptr));
        matricola_studenteb->setText(QCoreApplication::translate("MainWindow", "Matricola studente", nullptr));
        cognomeb->setText(QCoreApplication::translate("MainWindow", "Cognome", nullptr));
        nomeb->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        sfondo->setText(QString());
        sfondo_2->setText(QString());
        sfondo_cerca->setText(QCoreApplication::translate("MainWindow", "  \360\237\224\216", nullptr));
        salva->setText(QCoreApplication::translate("MainWindow", "\360\237\222\276 Salva", nullptr));
        conta->setText(QCoreApplication::translate("MainWindow", "conta", nullptr));
        snome_corso->setText(QCoreApplication::translate("MainWindow", "Descrizione corso", nullptr));
        snome->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        scodice_corso->setText(QCoreApplication::translate("MainWindow", "Codice corso", nullptr));
        scodice_materia->setText(QCoreApplication::translate("MainWindow", "Codice materia", nullptr));
        smatricola->setText(QCoreApplication::translate("MainWindow", "Matricola studente", nullptr));
        snome_materia->setText(QCoreApplication::translate("MainWindow", "Descrizione materia", nullptr));
        scognome->setText(QCoreApplication::translate("MainWindow", "Cognome", nullptr));
        settings_toggle->setText(QCoreApplication::translate("MainWindow", "\342\232\231\357\270\217", nullptr));
        contabg->setText(QString());
        duplicati->setText(QCoreApplication::translate("MainWindow", " \342\235\214 Duplicati", nullptr));
        duplicati_on->setText(QCoreApplication::translate("MainWindow", "\342\234\205 Duplicati", nullptr));
        conta_materie->setText(QCoreApplication::translate("MainWindow", "conta materie", nullptr));
        contabg_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
