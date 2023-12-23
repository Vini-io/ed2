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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *box_order;
    QLineEdit *input_valor;
    QComboBox *box_valor;
    QLabel *label;
    QTreeWidget *treeWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(60, 80, 681, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        box_order = new QComboBox(horizontalLayoutWidget_2);
        box_order->addItem(QString());
        box_order->addItem(QString());
        box_order->addItem(QString());
        box_order->addItem(QString());
        box_order->addItem(QString());
        box_order->addItem(QString());
        box_order->addItem(QString());
        box_order->setObjectName("box_order");

        horizontalLayout_2->addWidget(box_order);

        input_valor = new QLineEdit(centralwidget);
        input_valor->setObjectName("input_valor");
        input_valor->setGeometry(QRect(120, 20, 391, 24));
        box_valor = new QComboBox(centralwidget);
        box_valor->addItem(QString());
        box_valor->addItem(QString());
        box_valor->addItem(QString());
        box_valor->addItem(QString());
        box_valor->setObjectName("box_valor");
        box_valor->setGeometry(QRect(530, 20, 211, 24));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 20, 51, 21));
        treeWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setGeometry(QRect(130, 150, 561, 381));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">FORMAS DE ORDENA\303\207\303\203O</span></p></body></html>", nullptr));
        box_order->setItemText(0, QCoreApplication::translate("MainWindow", "MATRICULA", nullptr));
        box_order->setItemText(1, QCoreApplication::translate("MainWindow", "NOME", nullptr));
        box_order->setItemText(2, QCoreApplication::translate("MainWindow", "DEPARTAMENTO - NOME", nullptr));
        box_order->setItemText(3, QCoreApplication::translate("MainWindow", "TITULA\303\207\303\203O - NOME", nullptr));
        box_order->setItemText(4, QCoreApplication::translate("MainWindow", "TIPO DE CONTADO - NOME", nullptr));
        box_order->setItemText(5, QCoreApplication::translate("MainWindow", "DEPARTAMENTO - TITULA\303\207\303\203O - NOME", nullptr));
        box_order->setItemText(6, QCoreApplication::translate("MainWindow", "DEPARTAMENTO - TIPO DE CONTRADO - NOME", nullptr));

        box_valor->setItemText(0, QCoreApplication::translate("MainWindow", " Busca sequencial - Nome", nullptr));
        box_valor->setItemText(1, QCoreApplication::translate("MainWindow", " Busca sequencial - Matricula", nullptr));
        box_valor->setItemText(2, QCoreApplication::translate("MainWindow", " Busca Binario - Nome", nullptr));
        box_valor->setItemText(3, QCoreApplication::translate("MainWindow", " Busca Binario - Matricula", nullptr));

        label->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">DADO</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
