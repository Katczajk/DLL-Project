#ifndef MYDLL_H
#define MYDLL_H

#include "MyDLL_global.h"
#include <QDebug>
#include "string.h"

QString g_text = "Call comes here from DLL";


class MYDLL_EXPORT MyDLL
{
public:
    MyDLL();

    static void Test();
    QString GiveAnswer(QString g_text);
    static void GiveAbout();
    static QString MakeTxt(QString g_text);

};
// we define here class with parameter export
class MYDLL_EXPORT Info
{

public:
    // this is class himself
    Info();
    // a function without return value and parameters with public access
    static void show_message(QString g_msgtype, QString g_msgtxt);
};

#endif // MYDLL_H
