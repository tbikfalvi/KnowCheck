#-------------------------------------------------
#
# Project created by QtCreator 2012-01-08T15:33:21
#
#-------------------------------------------------

QT       += core gui

TARGET = KnowCheck
TEMPLATE = app
INCLUDEPATH += ./framework

SOURCES += \
    main.cpp\
    mainwindow.cpp \
    ./framework/logger.cpp \
    ./framework/guiwriter.cpp \
    ./framework/filewriter.cpp \
    ./framework/logmessage.cpp \
    ./framework/tracer.cpp

HEADERS += \
    mainwindow.h \
    ./framework/severity.h \
    ./framework/sevexception.h \
    ./framework/logger.h \
    ./framework/logwriter.h \
    ./framework/guiwriter.h \
    ./framework/filewriter.h \
    ./framework/logmessage.h \
    ./framework/tracer.h \
    knowcheck.h

FORMS += \
    mainwindow.ui

RC_FILE = knowcheck.rc

RESOURCES += \
    knowcheck.qrc
