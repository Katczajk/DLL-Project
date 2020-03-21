#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QLineEdit>
#include "../MyDLL/mydll.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    MyDLL::Test();
    MyDLL::GiveAbout();
    ui->label->setText(MyDLL::MakeTxt("static QString return Text"));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    this->pushToLabel(this->GetLineTxt());
}

QString MainWindow::GetLineTxt()
{
    QString answer;

    answer = ui->lineEdit->text();
    return answer;
}

void MainWindow::pushToLabel(QString input)
{
    ui->label->setText(input);
}
