#include <QtGui/QApplication>
#include "mainwindow.h"

#include "framework/logger.h"
#include "framework/consolewriter.h"
#include "framework/guiwriter.h"
#include "framework/filewriter.h"
#include "framework/tracer.h"

cLogger         g_obLogger;

int main(int argc, char *argv[])
{
    cFileWriter obFileWriter( cSeverity::DEBUG, "knowcheck.log" );
    g_obLogger.registerWriter( &obFileWriter );

    g_obLogger << cSeverity::INFO << "-----------------------------------------------" << cLogMessage::EOM;
    g_obLogger << cSeverity::INFO << "Start application." << cLogMessage::EOM;

    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
