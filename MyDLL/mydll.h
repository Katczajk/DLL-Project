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

#endif // MYDLL_H
