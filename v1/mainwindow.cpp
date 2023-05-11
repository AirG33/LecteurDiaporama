#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QObject::connect(ui->suivant,SIGNAL(clicked()),this,SLOT(avancer()));

    QObject::connect(ui->precedent,SIGNAL(clicked()),this,SLOT(reculer()));


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::avancer()
{

}

void MainWindow::reculer()
{

}
