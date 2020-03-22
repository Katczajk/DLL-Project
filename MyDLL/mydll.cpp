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

//class himself
Info::Info ()
{

}
// class with point to function show_message and some string parameters
void Info::show_message(QString g_msgtype, QString g_msgtxt)
{
    QMessageBox::about(nullptr, g_msgtype, g_msgtxt);
}


