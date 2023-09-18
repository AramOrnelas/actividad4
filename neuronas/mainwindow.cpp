#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "neurona.h"
#include <QMessageBox>

AdministradorNeuronas lista;

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


void MainWindow::on_Ainicio_clicked()
{
    Neurona neurona(ui->id->value(), ui->voltaje->value(),ui->posX->value(),ui->posY->value(),ui->red->value(),ui->green->value(),ui->blue->value());
    lista.agregar_inicio(neurona);
    lista.mostrar();

}


void MainWindow::on_Afinal_clicked()
{
    Neurona neurona(ui->id->value(), ui->voltaje->value(),ui->posX->value(),ui->posY->value(),ui->red->value(),ui->green->value(),ui->blue->value());
    lista.agregar_final(neurona);
    ui->label_8->setText("hola");
    lista.mostrar();

}


void MainWindow::on_mostrar_clicked()
{

}



