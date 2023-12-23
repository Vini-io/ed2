/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *entrada_tam;
    QPushButton *btn_gerar;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *saida_vetor_random;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *saida_selectionSort;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *num_exe_selectionSort;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *time_selectinSort;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLineEdit *time_insertionSort;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QLineEdit *saida_insertionSort;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QLineEdit *num_exe_insertionSort;
    QLabel *label_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(160, 10, 471, 31));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(40, 50, 701, 111));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        entrada_tam = new QLineEdit(verticalLayoutWidget_2);
        entrada_tam->setObjectName("entrada_tam");

        horizontalLayout->addWidget(entrada_tam);

        btn_gerar = new QPushButton(verticalLayoutWidget_2);
        btn_gerar->setObjectName("btn_gerar");

        horizontalLayout->addWidget(btn_gerar);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        saida_vetor_random = new QLineEdit(verticalLayoutWidget_2);
        saida_vetor_random->setObjectName("saida_vetor_random");
        saida_vetor_random->setReadOnly(true);

        verticalLayout->addWidget(saida_vetor_random);


        verticalLayout_2->addLayout(verticalLayout);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(40, 210, 521, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_4 = new QLabel(horizontalLayoutWidget_2);
        label_4->setObjectName("label_4");

        verticalLayout_3->addWidget(label_4);

        saida_selectionSort = new QLineEdit(horizontalLayoutWidget_2);
        saida_selectionSort->setObjectName("saida_selectionSort");
        saida_selectionSort->setReadOnly(true);

        verticalLayout_3->addWidget(saida_selectionSort);


        horizontalLayout_2->addLayout(verticalLayout_3);

        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(560, 180, 91, 81));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(5, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_4);
        label_5->setObjectName("label_5");

        verticalLayout_4->addWidget(label_5);

        num_exe_selectionSort = new QLineEdit(verticalLayoutWidget_4);
        num_exe_selectionSort->setObjectName("num_exe_selectionSort");
        num_exe_selectionSort->setReadOnly(true);

        verticalLayout_4->addWidget(num_exe_selectionSort);

        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(650, 181, 91, 80));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(5, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_5);
        label_6->setObjectName("label_6");

        verticalLayout_5->addWidget(label_6);

        time_selectinSort = new QLineEdit(verticalLayoutWidget_5);
        time_selectinSort->setObjectName("time_selectinSort");
        time_selectinSort->setReadOnly(true);

        verticalLayout_5->addWidget(time_selectinSort);

        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(650, 275, 91, 80));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(5, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_6);
        label_7->setObjectName("label_7");

        verticalLayout_6->addWidget(label_7);

        time_insertionSort = new QLineEdit(verticalLayoutWidget_6);
        time_insertionSort->setObjectName("time_insertionSort");
        time_insertionSort->setReadOnly(true);

        verticalLayout_6->addWidget(time_insertionSort);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(40, 299, 521, 56));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        label_8 = new QLabel(horizontalLayoutWidget_3);
        label_8->setObjectName("label_8");

        verticalLayout_7->addWidget(label_8);

        saida_insertionSort = new QLineEdit(horizontalLayoutWidget_3);
        saida_insertionSort->setObjectName("saida_insertionSort");
        saida_insertionSort->setReadOnly(true);

        verticalLayout_7->addWidget(saida_insertionSort);


        horizontalLayout_3->addLayout(verticalLayout_7);

        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(560, 274, 91, 81));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(5, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget_7);
        label_9->setObjectName("label_9");

        verticalLayout_8->addWidget(label_9);

        num_exe_insertionSort = new QLineEdit(verticalLayoutWidget_7);
        num_exe_insertionSort->setObjectName("num_exe_insertionSort");
        num_exe_insertionSort->setReadOnly(true);

        verticalLayout_8->addWidget(num_exe_insertionSort);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(20, 410, 161, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">ESTRUTURA DE DADOS II - ATIVIDADE 07</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">QUANTIDADE</span></p></body></html>", nullptr));
        btn_gerar->setText(QCoreApplication::translate("MainWindow", "Gerar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">DADOS GERADOS ALEATORIAMENTE INCLUIDOS NO VETOR</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">SELECTION SORT</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\"> EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TEMPO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\">EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TEMPO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\">EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">INSERTION SORT</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\"> EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "VINICIOS BARBOSA DE LIMA", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
