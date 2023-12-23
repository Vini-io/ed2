#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "busca.h"
#include "professor.h"
#include "vectorprofessor.h"

#include <QMainWindow>
#include <QTreeWidgetItem>
#include <fstream>
#include <sstream>

#include <QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE



class MainWindow : public QMainWindow{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_box_valor_activated(int index);
    void on_box_order_activated(int index);

private:
    Ui::MainWindow *ui;

    void displayTree();

    VINI::VectorProfessor profVector;
    VINI::busca search;
    VINI::professor *objProfessor;


};
#endif // MAINWINDOW_H
