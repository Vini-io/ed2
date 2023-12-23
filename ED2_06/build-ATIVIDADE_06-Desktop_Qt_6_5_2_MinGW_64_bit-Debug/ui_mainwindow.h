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
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QLineEdit *input_valor;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_3;
    QLineEdit *saida;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLineEdit *saida2;
    QPushButton *btn_buscar;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_7;
    QLineEdit *input_result;
    QLabel *label_5;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *input_entrada;
    QPushButton *btn_entrada;
    QLabel *label_8;
    QLineEdit *lineEdit;
    QLabel *label_9;
    QLabel *label_10;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_11;
    QLineEdit *input_result_2;
    QPushButton *btn_buscar_2;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_12;
    QLineEdit *input_valor_2;
    QPushButton *btn_buscar_3;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_13;
    QLineEdit *input_result_3;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_14;
    QLineEdit *input_valor_3;
    QLabel *label_15;
    QLineEdit *lineEdit_2;
    QLabel *label_16;
    QLineEdit *lineEdit_3;
    QLabel *label_17;
    QLineEdit *lineEdit_4;
    QLabel *label_18;
    QLabel *label_19;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(822, 695);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(150, 10, 481, 41));
        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(50, 450, 160, 51));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);

        input_valor = new QLineEdit(verticalLayoutWidget_3);
        input_valor->setObjectName("input_valor");

        verticalLayout_3->addWidget(input_valor);

        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(50, 160, 521, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName("label_3");

        verticalLayout->addWidget(label_3);

        saida = new QLineEdit(verticalLayoutWidget);
        saida->setObjectName("saida");

        verticalLayout->addWidget(saida);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(50, 250, 531, 78));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName("label_4");

        verticalLayout_2->addWidget(label_4);

        saida2 = new QLineEdit(verticalLayoutWidget_2);
        saida2->setObjectName("saida2");
        saida2->setReadOnly(true);

        verticalLayout_2->addWidget(saida2);

        btn_buscar = new QPushButton(centralwidget);
        btn_buscar->setObjectName("btn_buscar");
        btn_buscar->setGeometry(QRect(500, 470, 80, 24));
        verticalLayoutWidget_4 = new QWidget(centralwidget);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(240, 450, 251, 48));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_4);
        label_7->setObjectName("label_7");

        verticalLayout_4->addWidget(label_7);

        input_result = new QLineEdit(verticalLayoutWidget_4);
        input_result->setObjectName("input_result");
        input_result->setReadOnly(true);

        verticalLayout_4->addWidget(input_result);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 350, 521, 16));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(50, 80, 521, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        input_entrada = new QLineEdit(horizontalLayoutWidget);
        input_entrada->setObjectName("input_entrada");

        horizontalLayout->addWidget(input_entrada);

        btn_entrada = new QPushButton(horizontalLayoutWidget);
        btn_entrada->setObjectName("btn_entrada");

        horizontalLayout->addWidget(btn_entrada);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 620, 231, 21));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(590, 303, 131, 24));
        lineEdit->setReadOnly(true);
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(590, 285, 141, 20));
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(50, 430, 521, 16));
        verticalLayoutWidget_5 = new QWidget(centralwidget);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(240, 370, 251, 48));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(verticalLayoutWidget_5);
        label_11->setObjectName("label_11");

        verticalLayout_5->addWidget(label_11);

        input_result_2 = new QLineEdit(verticalLayoutWidget_5);
        input_result_2->setObjectName("input_result_2");
        input_result_2->setReadOnly(true);

        verticalLayout_5->addWidget(input_result_2);

        btn_buscar_2 = new QPushButton(centralwidget);
        btn_buscar_2->setObjectName("btn_buscar_2");
        btn_buscar_2->setGeometry(QRect(500, 390, 80, 24));
        verticalLayoutWidget_6 = new QWidget(centralwidget);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(50, 370, 160, 51));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_12 = new QLabel(verticalLayoutWidget_6);
        label_12->setObjectName("label_12");

        verticalLayout_6->addWidget(label_12);

        input_valor_2 = new QLineEdit(verticalLayoutWidget_6);
        input_valor_2->setObjectName("input_valor_2");

        verticalLayout_6->addWidget(input_valor_2);

        btn_buscar_3 = new QPushButton(centralwidget);
        btn_buscar_3->setObjectName("btn_buscar_3");
        btn_buscar_3->setGeometry(QRect(500, 560, 80, 24));
        verticalLayoutWidget_7 = new QWidget(centralwidget);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(240, 540, 251, 48));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(verticalLayoutWidget_7);
        label_13->setObjectName("label_13");

        verticalLayout_7->addWidget(label_13);

        input_result_3 = new QLineEdit(verticalLayoutWidget_7);
        input_result_3->setObjectName("input_result_3");
        input_result_3->setReadOnly(true);

        verticalLayout_7->addWidget(input_result_3);

        verticalLayoutWidget_8 = new QWidget(centralwidget);
        verticalLayoutWidget_8->setObjectName("verticalLayoutWidget_8");
        verticalLayoutWidget_8->setGeometry(QRect(50, 540, 160, 51));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_14 = new QLabel(verticalLayoutWidget_8);
        label_14->setObjectName("label_14");

        verticalLayout_8->addWidget(label_14);

        input_valor_3 = new QLineEdit(verticalLayoutWidget_8);
        input_valor_3->setObjectName("input_valor_3");

        verticalLayout_8->addWidget(input_valor_3);

        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(50, 520, 521, 16));
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(590, 389, 131, 24));
        lineEdit_2->setReadOnly(true);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(590, 371, 141, 20));
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(590, 470, 131, 24));
        lineEdit_3->setReadOnly(true);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(590, 451, 141, 20));
        lineEdit_4 = new QLineEdit(centralwidget);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(590, 559, 131, 24));
        lineEdit_4->setReadOnly(true);
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(590, 541, 141, 20));
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(580, 50, 221, 221));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../1.jpg")));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 822, 21));
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
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">ESTRUTURA DE DADOS II - ATIVIDADE 06</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">DADOS GERADOS ALEATORIAMENTE INCLUIDOS NO VETOR</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">DADOS DO VETOR ORDENADOS</span></p></body></html>", nullptr));
        btn_buscar->setText(QCoreApplication::translate("MainWindow", "BUSCAR", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">RESULTADO</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">BUSCA SEQUENCIAL EM UM VETOR GERADO ALEATORIMENTE</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">QUANTIDADE ELEMENTOS</span></p></body></html>", nullptr));
        btn_entrada->setText(QCoreApplication::translate("MainWindow", "GERAR", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">VINICIOS BARBOSA DE LIMA</span></p></body></html>", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">BUSCA SEQUENCIAL MELHORADA EM UM VETOR - ORDENADO</span></p></body></html>", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">RESULTADO</span></p></body></html>", nullptr));
        btn_buscar_2->setText(QCoreApplication::translate("MainWindow", "BUSCAR", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        btn_buscar_3->setText(QCoreApplication::translate("MainWindow", "BUSCAR", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">RESULTADO</span></p></body></html>", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">VALOR</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:700;\">BUSCA SEQUENCIAL EM UM VETOR GERADO ALEATORIMENTE</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">NUMERO DE EXECU\303\207\303\225ES</span></p></body></html>", nullptr));
        label_19->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
