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
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *num_exe_selectionSort;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLineEdit *time_insertionSort;
    QLabel *label;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *saida_selectionSort;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QLineEdit *saida_insertionSort;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *entrada_tam;
    QPushButton *btn_gerar;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *saida_vetor_random;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *time_selectinSort;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QLineEdit *num_exe_insertionSort;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_11;
    QLineEdit *time_bubbleSort;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_12;
    QLineEdit *num_exe_bubbleSort;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_13;
    QLineEdit *saida_bubbleSort;
    QLabel *label_14;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(973, 643);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(670, 266, 91, 81));
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

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 570, 161, 16));
        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(760, 361, 91, 80));
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

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(230, 60, 471, 31));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(150, 296, 521, 54));
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

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(150, 385, 521, 56));
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

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(150, 150, 701, 111));
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

        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(760, 267, 91, 80));
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

        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(670, 360, 91, 81));
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

        verticalLayoutWidget_8 = new QWidget(centralwidget);
        verticalLayoutWidget_8->setObjectName("verticalLayoutWidget_8");
        verticalLayoutWidget_8->setGeometry(QRect(760, 460, 91, 80));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(5, 0, 0, 0);
        label_11 = new QLabel(verticalLayoutWidget_8);
        label_11->setObjectName("label_11");

        verticalLayout_9->addWidget(label_11);

        time_bubbleSort = new QLineEdit(verticalLayoutWidget_8);
        time_bubbleSort->setObjectName("time_bubbleSort");
        time_bubbleSort->setReadOnly(true);

        verticalLayout_9->addWidget(time_bubbleSort);

        verticalLayoutWidget_9 = new QWidget(centralwidget);
        verticalLayoutWidget_9->setObjectName("verticalLayoutWidget_9");
        verticalLayoutWidget_9->setGeometry(QRect(670, 459, 91, 81));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(5, 0, 0, 0);
        label_12 = new QLabel(verticalLayoutWidget_9);
        label_12->setObjectName("label_12");

        verticalLayout_10->addWidget(label_12);

        num_exe_bubbleSort = new QLineEdit(verticalLayoutWidget_9);
        num_exe_bubbleSort->setObjectName("num_exe_bubbleSort");
        num_exe_bubbleSort->setReadOnly(true);

        verticalLayout_10->addWidget(num_exe_bubbleSort);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(150, 476, 521, 66));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName("verticalLayout_11");
        label_13 = new QLabel(horizontalLayoutWidget_4);
        label_13->setObjectName("label_13");

        verticalLayout_11->addWidget(label_13);

        saida_bubbleSort = new QLineEdit(horizontalLayoutWidget_4);
        saida_bubbleSort->setObjectName("saida_bubbleSort");
        saida_bubbleSort->setReadOnly(true);

        verticalLayout_11->addWidget(saida_bubbleSort);


        horizontalLayout_4->addLayout(verticalLayout_11);

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(710, 20, 131, 111));
        label_14->setPixmap(QPixmap(QString::fromUtf8("puc.jpg")));
        label_14->setScaledContents(true);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 973, 21));
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
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\"> EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "VINICIOS BARBOSA DE LIMA", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TEMPO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\">EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">ESTRUTURA DE DADOS II - ATIVIDADE 08</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">SELECTION SORT</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">INSERTION SORT</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">QUANTIDADE</span></p></body></html>", nullptr));
        btn_gerar->setText(QCoreApplication::translate("MainWindow", "Gerar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">DADOS GERADOS ALEATORIAMENTE INCLUIDOS NO VETOR</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TEMPO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\">EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\"> EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TEMPO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\">EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\"> EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">BUBBLE SORT</span></p></body></html>", nullptr));
        label_14->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
