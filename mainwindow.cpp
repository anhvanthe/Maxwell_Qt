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


void MainWindow::on_tabWidget_tabBarClicked(int index)
{
//    if(index==1)
//       {
//           Error("Empty, back to main");
//           QTimer::singleShot(100, [this](){ ui->tabWidget->setCurrentIndex(0); });
//       }
}

void MainWindow::on_plainTextEdit_textChanged()
{

}
