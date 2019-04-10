#-------------------------------------------------
#
# Project created by QtCreator 2019-03-26T10:19:16
#
#-------------------------------------------------

QT       += core
QT       += sql

QT       -= gui

TARGET = DLLMySql
TEMPLATE = lib

DEFINES += DLLMYSQL_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
<<<<<<< HEAD
        dllmysql.cpp

HEADERS += \
        dllmysql.h \
        dllmysql_global.h 
=======
        mysql.cpp \
        databaseconnection.cpp

HEADERS += \
        mysql.h \
        dllmysql_global.h \
        databaseconnection.h \
<<<<<<< HEAD
    dllmysql.h
>>>>>>> master
=======
        dllmysql.h
>>>>>>> master

DESTDIR = C:\Users\samij\Desktop\BankSim\BankSim100\BankSimulator\dll\

unix {
    target.path = /usr/lib
    INSTALLS += target
}
