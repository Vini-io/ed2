#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <chrono>
#include <ctime>
#include <iomanip>
using namespace std::chrono;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_gerar_clicked()
{
    int value_tam = ui->entrada_tam->text().toInt();

    vetor = new VINI::vetor(value_tam);
    vetor->insertArray();

    QStringList DisplayGenRandom;
    for(int i = 0; i < value_tam ;i++){
        DisplayGenRandom.append(QString::number(vetor->getElementArray(i, 1)));
    }

    QString valueDisplayGenRandom = " { " + DisplayGenRandom.join(" }   { ");
    ui->saida_vetor_random->setText(valueDisplayGenRandom + " }");






    auto inicio = std::chrono::high_resolution_clock::now();

    vetor->selectionSort();

    auto fim = std::chrono::high_resolution_clock::now();
    auto ns = std::chrono::duration_cast<std::chrono::nanoseconds>(fim - inicio);
    auto mili = std::chrono::duration_cast<std::chrono::milliseconds>(fim - inicio);
    auto seg = std::chrono::duration_cast<std::chrono::seconds>(fim - inicio);

    QString tempo =   QString::number(seg.count()) + "."+ QString::number(mili.count()) +QString::number(ns.count());


    ui->time_selectinSort->setText(tempo);


    QStringList DisplaySelection;
    for(int i = 0; i < value_tam ;i++){
        DisplaySelection.append(QString::number(vetor->getElementArray(i, 2)));
    }

    QString valueSelection = " { " + DisplaySelection.join(" }   { ");
    ui->saida_selectionSort->setText(valueSelection + " }");
    ui->num_exe_selectionSort->setText(QString::number(vetor->excSelection));




    inicio = std::chrono::high_resolution_clock::now();

    vetor->insertionSort();

    fim = std::chrono::high_resolution_clock::now();
    ns = std::chrono::duration_cast<std::chrono::nanoseconds>(fim - inicio);
    mili = std::chrono::duration_cast<std::chrono::milliseconds>(fim - inicio);
    seg = std::chrono::duration_cast<std::chrono::seconds>(fim - inicio);

    tempo =   QString::number(seg.count()) + "."+ QString::number(mili.count()) +QString::number(ns.count());

    //auto segundos = duracao.count() / 1000.0; // Converter milissegundos para segundos
    ui->time_insertionSort->setText(tempo);

    QStringList DisplayInsertion;
    for(int i = 0; i < value_tam ;i++){
        DisplayInsertion.append(QString::number(vetor->getElementArray(i, 3)));
    }

    QString valueInsertion= " { " + DisplayInsertion.join(" }   { ");
    ui->saida_insertionSort->setText(valueInsertion + " }");
    ui->num_exe_insertionSort->setText(QString::number(vetor->excInsertion));



    inicio = std::chrono::high_resolution_clock::now();

    vetor->bubbleSort();


    fim = std::chrono::high_resolution_clock::now();
    ns = std::chrono::duration_cast<std::chrono::nanoseconds>(fim - inicio);
    mili = std::chrono::duration_cast<std::chrono::milliseconds>(fim - inicio);
    seg = std::chrono::duration_cast<std::chrono::seconds>(fim - inicio);

    tempo =   QString::number(seg.count()) + "."+ QString::number(mili.count()) +QString::number(ns.count());
    ui->time_bubbleSort->setText(tempo);

    QStringList DisplayBubble;
    for(int i = 0; i < value_tam ;i++){
        DisplayBubble.append(QString::number(vetor->getElementArray(i, 4)));
    }

    QString valueBubble= " { " + DisplayBubble.join(" }   { ");
    ui->saida_bubbleSort->setText(valueBubble + " }");
    ui->num_exe_bubbleSort->setText(QString::number(vetor->excBubble));






    inicio = std::chrono::high_resolution_clock::now();

    vetor->mergeSort(0, vetor->tam - 1);

    fim = std::chrono::high_resolution_clock::now();
    ns = std::chrono::duration_cast<std::chrono::nanoseconds>(fim - inicio);
    mili = std::chrono::duration_cast<std::chrono::milliseconds>(fim - inicio);
    seg = std::chrono::duration_cast<std::chrono::seconds>(fim - inicio);

    tempo =   QString::number(seg.count()) + "."+ QString::number(mili.count()) +QString::number(ns.count());
    ui->time_mergeSort->setText(tempo);

    QStringList DisplayMerge;
    for(int i = 0; i < value_tam ;i++){
        DisplayMerge.append(QString::number(vetor->getElementArray(i, 5)));
    }

    QString valueMerge= " { " + DisplayMerge.join(" }   { ");
    ui->saida_mergeSort->setText(valueMerge + " }");
    ui->num_exe_mergeSort->setText(QString::number(vetor->execMerge));


    inicio = std::chrono::high_resolution_clock::now();

    vetor->heapSort();

    fim = std::chrono::high_resolution_clock::now();
    ns = std::chrono::duration_cast<std::chrono::nanoseconds>(fim - inicio);
    mili = std::chrono::duration_cast<std::chrono::milliseconds>(fim - inicio);
    seg = std::chrono::duration_cast<std::chrono::seconds>(fim - inicio);

    tempo =   QString::number(seg.count()) + "."+ QString::number(mili.count()) +QString::number(ns.count());

    ui->time_heapSort->setText(tempo);

    QStringList DisplayHeapSort;
    for(int i = 0; i < value_tam ;i++){
        DisplayHeapSort.append(QString::number(vetor->getElementArray(i, 6)));
    }

    QString valueHeap= " { " + DisplayHeapSort.join(" }   { ");
    ui->saida_heapSort->setText(valueHeap + " }");
    ui->num_exe_heapSort->setText(QString::number(vetor->execHeap));



    inicio = std::chrono::high_resolution_clock::now();

    vetor->quickSort(0, vetor->tam);

    fim = std::chrono::high_resolution_clock::now();
    ns = std::chrono::duration_cast<std::chrono::nanoseconds>(fim - inicio);
    mili = std::chrono::duration_cast<std::chrono::milliseconds>(fim - inicio);
    seg = std::chrono::duration_cast<std::chrono::seconds>(fim - inicio);

    tempo =   QString::number(seg.count()) + "."+ QString::number(mili.count()) +QString::number(ns.count());

    ui->time_quickSort->setText(tempo);

    QStringList DisplayQuick;
    for(int i = 0; i < value_tam ;i++){
        DisplayQuick.append(QString::number(vetor->getElementArray(i, 7)));
    }

    QString valueQuick= " { " + DisplayQuick.join(" }   { ");
    ui->saida_quickSort->setText(valueQuick + " }");
    ui->num_exe_quickSort->setText(QString::number(vetor->execQuick));




}

