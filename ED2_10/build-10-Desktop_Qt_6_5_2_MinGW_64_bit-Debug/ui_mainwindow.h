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
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_11;
    QLineEdit *time_bubbleSort;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_12;
    QLineEdit *num_exe_bubbleSort;
    QLabel *label;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QLineEdit *num_exe_selectionSort;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_9;
    QLineEdit *num_exe_insertionSort;
    QWidget *verticalLayoutWidget_11;
    QVBoxLayout *verticalLayout_14;
    QLabel *label_17;
    QLineEdit *time_mergeSort;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_4;
    QLineEdit *saida_selectionSort;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_7;
    QLineEdit *time_insertionSort;
    QLabel *label_14;
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
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_16;
    QLineEdit *saida_mergeSort;
    QWidget *verticalLayoutWidget_10;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_15;
    QLineEdit *num_exe_mergeSort;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_13;
    QLineEdit *saida_bubbleSort;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QLineEdit *time_selectinSort;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_6;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_18;
    QLineEdit *saida_heapSort;
    QWidget *verticalLayoutWidget_12;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_19;
    QLineEdit *num_exe_heapSort;
    QWidget *verticalLayoutWidget_13;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_20;
    QLineEdit *time_heapSort;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 807);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget_8 = new QWidget(centralwidget);
        verticalLayoutWidget_8->setObjectName("verticalLayoutWidget_8");
        verticalLayoutWidget_8->setGeometry(QRect(650, 444, 91, 80));
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

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(30, 730, 161, 16));
        verticalLayoutWidget_9 = new QWidget(centralwidget);
        verticalLayoutWidget_9->setObjectName("verticalLayoutWidget_9");
        verticalLayoutWidget_9->setGeometry(QRect(560, 443, 91, 81));
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

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(120, 44, 471, 31));
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(560, 250, 91, 81));
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

        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(560, 344, 91, 81));
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

        verticalLayoutWidget_11 = new QWidget(centralwidget);
        verticalLayoutWidget_11->setObjectName("verticalLayoutWidget_11");
        verticalLayoutWidget_11->setGeometry(QRect(650, 538, 91, 80));
        verticalLayout_14 = new QVBoxLayout(verticalLayoutWidget_11);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(5, 0, 0, 0);
        label_17 = new QLabel(verticalLayoutWidget_11);
        label_17->setObjectName("label_17");

        verticalLayout_14->addWidget(label_17);

        time_mergeSort = new QLineEdit(verticalLayoutWidget_11);
        time_mergeSort->setObjectName("time_mergeSort");
        time_mergeSort->setReadOnly(true);

        verticalLayout_14->addWidget(time_mergeSort);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(40, 280, 521, 54));
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

        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(650, 345, 91, 80));
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

        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(600, 4, 131, 111));
        label_14->setPixmap(QPixmap(QString::fromUtf8("../../ED2_08/ATIVIDADE_08/puc.jpg")));
        label_14->setScaledContents(true);
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(40, 369, 521, 56));
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
        verticalLayoutWidget_2->setGeometry(QRect(40, 134, 701, 111));
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

        horizontalLayoutWidget_5 = new QWidget(centralwidget);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(40, 554, 521, 66));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_13 = new QVBoxLayout();
        verticalLayout_13->setObjectName("verticalLayout_13");
        label_16 = new QLabel(horizontalLayoutWidget_5);
        label_16->setObjectName("label_16");

        verticalLayout_13->addWidget(label_16);

        saida_mergeSort = new QLineEdit(horizontalLayoutWidget_5);
        saida_mergeSort->setObjectName("saida_mergeSort");
        saida_mergeSort->setReadOnly(true);

        verticalLayout_13->addWidget(saida_mergeSort);


        horizontalLayout_5->addLayout(verticalLayout_13);

        verticalLayoutWidget_10 = new QWidget(centralwidget);
        verticalLayoutWidget_10->setObjectName("verticalLayoutWidget_10");
        verticalLayoutWidget_10->setGeometry(QRect(560, 537, 91, 81));
        verticalLayout_12 = new QVBoxLayout(verticalLayoutWidget_10);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(5, 0, 0, 0);
        label_15 = new QLabel(verticalLayoutWidget_10);
        label_15->setObjectName("label_15");

        verticalLayout_12->addWidget(label_15);

        num_exe_mergeSort = new QLineEdit(verticalLayoutWidget_10);
        num_exe_mergeSort->setObjectName("num_exe_mergeSort");
        num_exe_mergeSort->setReadOnly(true);

        verticalLayout_12->addWidget(num_exe_mergeSort);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(40, 460, 521, 66));
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

        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(650, 251, 91, 80));
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

        horizontalLayoutWidget_6 = new QWidget(centralwidget);
        horizontalLayoutWidget_6->setObjectName("horizontalLayoutWidget_6");
        horizontalLayoutWidget_6->setGeometry(QRect(40, 636, 521, 66));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setObjectName("verticalLayout_15");
        label_18 = new QLabel(horizontalLayoutWidget_6);
        label_18->setObjectName("label_18");

        verticalLayout_15->addWidget(label_18);

        saida_heapSort = new QLineEdit(horizontalLayoutWidget_6);
        saida_heapSort->setObjectName("saida_heapSort");
        saida_heapSort->setReadOnly(true);

        verticalLayout_15->addWidget(saida_heapSort);


        horizontalLayout_6->addLayout(verticalLayout_15);

        verticalLayoutWidget_12 = new QWidget(centralwidget);
        verticalLayoutWidget_12->setObjectName("verticalLayoutWidget_12");
        verticalLayoutWidget_12->setGeometry(QRect(560, 619, 91, 81));
        verticalLayout_16 = new QVBoxLayout(verticalLayoutWidget_12);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(5, 0, 0, 0);
        label_19 = new QLabel(verticalLayoutWidget_12);
        label_19->setObjectName("label_19");

        verticalLayout_16->addWidget(label_19);

        num_exe_heapSort = new QLineEdit(verticalLayoutWidget_12);
        num_exe_heapSort->setObjectName("num_exe_heapSort");
        num_exe_heapSort->setReadOnly(true);

        verticalLayout_16->addWidget(num_exe_heapSort);

        verticalLayoutWidget_13 = new QWidget(centralwidget);
        verticalLayoutWidget_13->setObjectName("verticalLayoutWidget_13");
        verticalLayoutWidget_13->setGeometry(QRect(650, 620, 91, 80));
        verticalLayout_17 = new QVBoxLayout(verticalLayoutWidget_13);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(5, 0, 0, 0);
        label_20 = new QLabel(verticalLayoutWidget_13);
        label_20->setObjectName("label_20");

        verticalLayout_17->addWidget(label_20);

        time_heapSort = new QLineEdit(verticalLayoutWidget_13);
        time_heapSort->setObjectName("time_heapSort");
        time_heapSort->setReadOnly(true);

        verticalLayout_17->addWidget(time_heapSort);

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
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TEMPO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\">EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "VINICIOS BARBOSA DE LIMA", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\"> EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">ESTRUTURA DE DADOS II - ATIVIDADE 08</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\"> EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\"> EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TEMPO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\">EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">SELECTION SORT</span></p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TEMPO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\">EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_14->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">INSERTION SORT</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">QUANTIDADE</span></p></body></html>", nullptr));
        btn_gerar->setText(QCoreApplication::translate("MainWindow", "Gerar", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">DADOS GERADOS ALEATORIAMENTE INCLUIDOS NO VETOR</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">MERGE SORT</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\"> EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">BUBBLE SORT</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TEMPO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\">EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">HEAP SORT</span></p></body></html>", nullptr));
        label_19->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\"> EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_20->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">TEMPO DE</span></p><p align=\"center\"><span style=\" font-weight:700;\">EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
