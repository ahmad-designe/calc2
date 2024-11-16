#include "mainwindow.h"
#include "ui_mainwindow.h"

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

double firstnum,secondnum,result;

void MainWindow::on_add_clicked()
{
    firstnum = ui->firstnum->text().toDouble();
    secondnum = ui->secondnum->text().toDouble();
    result=firstnum+secondnum;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_sub_clicked()
{
    firstnum = ui->firstnum->text().toDouble();
    secondnum = ui->secondnum->text().toDouble();
    result=firstnum-secondnum;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_multiply_clicked()
{
    firstnum = ui->firstnum->text().toDouble();
    secondnum = ui->secondnum->text().toDouble();
    result=firstnum*secondnum;
    ui->result->setText(QString::number(result));
}


void MainWindow::on_devide_clicked()
{
    firstnum = ui->firstnum->text().toDouble();
    secondnum = ui->secondnum->text().toDouble();
    result=firstnum/secondnum;
    ui->result->setText(QString::number(result));
}

