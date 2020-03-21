#include "mydll.h"
#include <QMessageBox>
#include "string.h"

MyDLL::MyDLL()
{



}

void MyDLL::Test()
{
    qDebug() << "Hello";
    QMessageBox::about(nullptr, "Info", "DLL Loaded complete");
}

QString MyDLL::GiveAnswer(QString g_text)
{
    return g_text;
}

void MyDLL::GiveAbout()
{
    QMessageBox::about(nullptr, "Test", "Static Function works");
}

QString MyDLL::MakeTxt(QString g_text)
{
    return g_text;
}




