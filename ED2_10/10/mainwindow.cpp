#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <chrono>
#include <ctime>

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






    auto inicio_1 = std::chrono::high_resolution_clock::now();

    vetor->selectionSort();

    auto fim_1 = std::chrono::high_resolution_clock::now();
    auto duracao_1 = std::chrono::duration_cast<std::chrono::milliseconds>(fim_1 - inicio_1); // Calcula a duração em milissegundos e segundos
    auto segundos_1 = duracao_1.count() / 1000.0; // Converter milissegundos para segundos


    ui->time_selectinSort->setText(QString::number(segundos_1));





    QStringList DisplaySelection;
    for(int i = 0; i < value_tam ;i++){
        DisplaySelection.append(QString::number(vetor->getElementArray(i, 2)));
    }

    QString valueSelection = " { " + DisplaySelection.join(" }   { ");
    ui->saida_selectionSort->setText(valueSelection + " }");
    ui->num_exe_selectionSort->setText(QString::number(vetor->excSelection));




    auto inicio = std::chrono::high_resolution_clock::now();

    vetor->insertionSort();

    auto fim = std::chrono::high_resolution_clock::now();
    auto duracao = std::chrono::duration_cast<std::chrono::milliseconds>(fim - inicio); // Calcula a duração em milissegundos e segundos
    auto segundos = duracao.count() / 1000.0; // Converter milissegundos para segundos
    ui->time_insertionSort->setText(QString::number(segundos));

    QStringList DisplayInsertion;
    for(int i = 0; i < value_tam ;i++){
        DisplayInsertion.append(QString::number(vetor->getElementArray(i, 3)));
    }

    QString valueInsertion= " { " + DisplayInsertion.join(" }   { ");
    ui->saida_insertionSort->setText(valueInsertion + " }");
    ui->num_exe_insertionSort->setText(QString::number(vetor->excInsertion));



    auto inicio_2 = std::chrono::high_resolution_clock::now();

    vetor->bubbleSort();

    auto fim_2 = std::chrono::high_resolution_clock::now();
    auto duracao_2 = std::chrono::duration_cast<std::chrono::milliseconds>(fim_2 - inicio_2); // Calcula a duração em milissegundos e segundos
    auto segundos_2 = duracao_2.count() / 1000.0; // Converter milissegundos para segundos
    ui->time_bubbleSort->setText(QString::number(segundos_2));

    QStringList DisplayBubble;
    for(int i = 0; i < value_tam ;i++){
        DisplayBubble.append(QString::number(vetor->getElementArray(i, 4)));
    }

    QString valueBubble= " { " + DisplayBubble.join(" }   { ");
    ui->saida_bubbleSort->setText(valueBubble + " }");
    ui->num_exe_bubbleSort->setText(QString::number(vetor->excBubble));






    auto inicio_3 = std::chrono::high_resolution_clock::now();

    vetor->mergeSort(0, vetor->tam - 1);

    auto fim_3 = std::chrono::high_resolution_clock::now();
    auto duracao_3 = std::chrono::duration_cast<std::chrono::milliseconds>(fim_3 - inicio_3); // Calcula a duração em milissegundos e segundos
    auto segundos_3 = duracao_3.count() / 1000.0; // Converter milissegundos para segundos
    ui->time_mergeSort->setText(QString::number(segundos_3));

    QStringList DisplayMerge;
    for(int i = 0; i < value_tam ;i++){
        DisplayMerge.append(QString::number(vetor->getElementArray(i, 5)));
    }

    QString valueMerge= " { " + DisplayMerge.join(" }   { ");
    ui->saida_mergeSort->setText(valueMerge + " }");
    ui->num_exe_mergeSort->setText(QString::number(vetor->execMerge));


    auto inicio_4 = std::chrono::high_resolution_clock::now();

    vetor->heapSort();

    auto fim_4 = std::chrono::high_resolution_clock::now();
    auto duracao_4 = std::chrono::duration_cast<std::chrono::milliseconds>(fim_4 - inicio_4); // Calcula a duração em milissegundos e segundos
    auto segundos_4 = duracao_4.count() / 1000.0; // Converter milissegundos para segundos
    ui->time_heapSort->setText(QString::number(segundos_4));

    QStringList DisplayHeapSort;
    for(int i = 0; i < value_tam ;i++){
        DisplayHeapSort.append(QString::number(vetor->getElementArray(i, 6)));
    }

    QString valueHeap= " { " + DisplayHeapSort.join(" }   { ");
    ui->saida_heapSort->setText(valueHeap + " }");
    ui->num_exe_heapSort->setText(QString::number(vetor->execHeap));




}

