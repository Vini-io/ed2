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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label_12;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_5;
    QLabel *label_13;
    QLabel *label_6;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *entrada_vertice;
    QLineEdit *entrada_ligacao;
    QLineEdit *entrada_peso;
    QPushButton *btn_ligacao;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_11;
    QLineEdit *vertice_remover;
    QPushButton *btn_remover;
    QLabel *label_7;
    QPushButton *pushButton;
    QLabel *label_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QLineEdit *entrada_quantidade;
    QPushButton *btn_entrada;
    QLabel *label_10;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeWidget *treeWidget;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_8;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *entrada_consulta;
    QPushButton *btn_consultar;
    QPushButton *btn_alterar;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *alterar_vertice;
    QLineEdit *alterar_ligacao;
    QLineEdit *alterar_novaligacao;
    QLineEdit *alterar_peso;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_18;
    QLineEdit *vertice_ligacao;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1340, 755);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(11, 672, 251, 31));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(741, 250, 361, 88));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_5 = new QLabel(horizontalLayoutWidget);
        label_5->setObjectName("label_5");

        verticalLayout_3->addWidget(label_5);

        label_13 = new QLabel(horizontalLayoutWidget);
        label_13->setObjectName("label_13");

        verticalLayout_3->addWidget(label_13);

        label_6 = new QLabel(horizontalLayoutWidget);
        label_6->setObjectName("label_6");

        verticalLayout_3->addWidget(label_6);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        entrada_vertice = new QLineEdit(horizontalLayoutWidget);
        entrada_vertice->setObjectName("entrada_vertice");

        verticalLayout_4->addWidget(entrada_vertice);

        entrada_ligacao = new QLineEdit(horizontalLayoutWidget);
        entrada_ligacao->setObjectName("entrada_ligacao");

        verticalLayout_4->addWidget(entrada_ligacao);

        entrada_peso = new QLineEdit(horizontalLayoutWidget);
        entrada_peso->setObjectName("entrada_peso");

        verticalLayout_4->addWidget(entrada_peso);


        horizontalLayout_3->addLayout(verticalLayout_4);

        btn_ligacao = new QPushButton(horizontalLayoutWidget);
        btn_ligacao->setObjectName("btn_ligacao");

        horizontalLayout_3->addWidget(btn_ligacao);

        horizontalLayoutWidget_5 = new QWidget(centralwidget);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(742, 583, 371, 41));
        horizontalLayout_6 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(horizontalLayoutWidget_5);
        label_11->setObjectName("label_11");

        horizontalLayout_6->addWidget(label_11);

        vertice_remover = new QLineEdit(horizontalLayoutWidget_5);
        vertice_remover->setObjectName("vertice_remover");

        horizontalLayout_6->addWidget(vertice_remover);

        btn_remover = new QPushButton(horizontalLayoutWidget_5);
        btn_remover->setObjectName("btn_remover");

        horizontalLayout_6->addWidget(btn_remover);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(740, 370, 131, 27));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(1140, 30, 171, 51));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(740, 220, 171, 27));
        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(741, 22, 361, 61));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName("label_2");

        verticalLayout_2->addWidget(label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        entrada_quantidade = new QLineEdit(verticalLayoutWidget_2);
        entrada_quantidade->setObjectName("entrada_quantidade");

        horizontalLayout->addWidget(entrada_quantidade);

        btn_entrada = new QPushButton(verticalLayoutWidget_2);
        btn_entrada->setObjectName("btn_entrada");

        horizontalLayout->addWidget(btn_entrada);


        verticalLayout_2->addLayout(horizontalLayout);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(740, 550, 131, 27));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(11, 22, 701, 631));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName("label");

        verticalLayout->addWidget(label);

        treeWidget = new QTreeWidget(horizontalLayoutWidget_2);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("Vertices"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");

        verticalLayout->addWidget(treeWidget);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayoutWidget_3 = new QWidget(centralwidget);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(740, 120, 361, 61));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName("label_8");

        verticalLayout_7->addWidget(label_8);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        entrada_consulta = new QLineEdit(verticalLayoutWidget_3);
        entrada_consulta->setObjectName("entrada_consulta");

        horizontalLayout_7->addWidget(entrada_consulta);

        btn_consultar = new QPushButton(verticalLayoutWidget_3);
        btn_consultar->setObjectName("btn_consultar");

        horizontalLayout_7->addWidget(btn_consultar);


        verticalLayout_7->addLayout(horizontalLayout_7);

        btn_alterar = new QPushButton(centralwidget);
        btn_alterar->setObjectName("btn_alterar");
        btn_alterar->setGeometry(QRect(1090, 450, 80, 24));
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(740, 410, 341, 118));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_14 = new QLabel(horizontalLayoutWidget_3);
        label_14->setObjectName("label_14");

        verticalLayout_5->addWidget(label_14);

        label_15 = new QLabel(horizontalLayoutWidget_3);
        label_15->setObjectName("label_15");

        verticalLayout_5->addWidget(label_15);

        label_16 = new QLabel(horizontalLayoutWidget_3);
        label_16->setObjectName("label_16");

        verticalLayout_5->addWidget(label_16);

        label_17 = new QLabel(horizontalLayoutWidget_3);
        label_17->setObjectName("label_17");

        verticalLayout_5->addWidget(label_17);


        horizontalLayout_4->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setObjectName("verticalLayout_6");
        alterar_vertice = new QLineEdit(horizontalLayoutWidget_3);
        alterar_vertice->setObjectName("alterar_vertice");

        verticalLayout_6->addWidget(alterar_vertice);

        alterar_ligacao = new QLineEdit(horizontalLayoutWidget_3);
        alterar_ligacao->setObjectName("alterar_ligacao");

        verticalLayout_6->addWidget(alterar_ligacao);

        alterar_novaligacao = new QLineEdit(horizontalLayoutWidget_3);
        alterar_novaligacao->setObjectName("alterar_novaligacao");

        verticalLayout_6->addWidget(alterar_novaligacao);

        alterar_peso = new QLineEdit(horizontalLayoutWidget_3);
        alterar_peso->setObjectName("alterar_peso");

        verticalLayout_6->addWidget(alterar_peso);


        horizontalLayout_4->addLayout(verticalLayout_6);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName("horizontalLayoutWidget_4");
        horizontalLayoutWidget_4->setGeometry(QRect(740, 620, 291, 41));
        horizontalLayout_5 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_18 = new QLabel(horizontalLayoutWidget_4);
        label_18->setObjectName("label_18");

        horizontalLayout_5->addWidget(label_18);

        vertice_ligacao = new QLineEdit(horizontalLayoutWidget_4);
        vertice_ligacao->setObjectName("vertice_ligacao");

        horizontalLayout_5->addWidget(vertice_ligacao);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1340, 21));
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
        label_12->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:14pt;\">VINICIOS BARBOSA DE LIMA</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Vertice</span></p></body></html>", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Liga\303\247\303\243o</span></p></body></html>", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Peso</span></p></body></html>", nullptr));
        btn_ligacao->setText(QCoreApplication::translate("MainWindow", "Ligac\303\243o", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Vertice</span></p></body></html>", nullptr));
        btn_remover->setText(QCoreApplication::translate("MainWindow", "Remover", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">Alterar liga\303\247\303\243o</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "Mostrar todos", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">Liga\303\247\303\243o entre vertice</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">Quantidade de Vertice</span></p></body></html>", nullptr));
        btn_entrada->setText(QCoreApplication::translate("MainWindow", "Entre", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">Remo\303\247\303\243o</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:700;\">ESTRUTURA DE DADOS - GRAFO</span></p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">Consultar</span></p></body></html>", nullptr));
        btn_consultar->setText(QCoreApplication::translate("MainWindow", "Entre", nullptr));
        btn_alterar->setText(QCoreApplication::translate("MainWindow", "Alterar", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Vertice</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Liga\303\247\303\243o</span></p></body></html>", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Nova liga\303\247\303\243o</span></p></body></html>", nullptr));
        label_17->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Peso</span></p></body></html>", nullptr));
        label_18->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt;\">Liga\303\247\303\243o</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
