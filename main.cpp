﻿
#include <QApplication>
#include <QTextCodec>
#include <QDebug>

#include "maindialog.h"
#include "loginwindow.h"
#include "skin/deskicon.h"
#include "qproperty.h"
#include "panel.h"
#include "qaddapplication.h"
#include "qtips.h"

#include "sysMsg/qmessagewidgets.h"
#include "sysMsg/qsysmessagepanel.h"

#include "test/qtest.h"
#include "utils/defines.h"
#include "winFactory/qwinfactory.h"

#include "uiframe/qpurecolorbutton.h"
#include "todo/qtodomanager.h"
#include "todo/qtodocontent.h"
#include "data/qtododata.h"
#include <QDebug>

#include <Windows.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QCoreApplication::setOrganizationName("HF-Soft");
    QCoreApplication::setOrganizationDomain("hf.com");
    QCoreApplication::setApplicationName("desk");
    QTest test;
    test.run(new MainDialog());
//    QString str = QToDoData::ref().getData("127.0.0.1","fasp_yz","postgres","postgres");
//    qDebug()<<str;
    return a.exec();
}