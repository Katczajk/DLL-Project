#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QLineEdit>
// header declaired for DLL to access class & functions
#include "../MyDLL/mydll.h"
#include <QDnsLookup>
#include <QHostAddress>
#include <QtGlobal>
#include "inttypes.h"
#include "string.h"
#include <QList>

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
    // access class from dll and submit some parameters that req.
    // submit strings are declared in header file mainwindow.h
    Info::show_message(l_msgtype,l_msgtxt);
    // we have declared in header file const, works also without
    // in every part of program u can now use to submit user
    // some msgbox with text
    // define all in dll file with

    // QDnsLookup::QDnsLookup(QDnsLookup::A,"google.de", Q_NULLPTR);
    // needs to have an object about QDnsLookup
    QString nsanswer;
    QString ipaddr = "194.25.2.129";

    // quint32 int_host = QHostAddress::toIPv4Address('192.168.1.1') const;
    quint32 fullip = ipaddr.toUInt();
    QDnsLookup dnslookup;

    QHostAddress l_hostadd;
    l_hostadd.setAddress(fullip);

    dnslookup.setType(QDnsLookup::A);
    dnslookup.setName("google.de");
    dnslookup.setNameserver(l_hostadd.AnyIPv4);

    // dnslookup.setNameserver("");

}

















