#-------------------------------------------------
#
# Project created by QtCreator 2019-03-28T12:07:12
#
#-------------------------------------------------

QT       += core gui
QT       += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BankSimul
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        main.cpp \
        mainwindow.cpp \
        rfidthread.cpp \
    timerthread.cpp

HEADERS += \
        mainwindow.h \
        rfidthread.h \
    timerthread.h

FORMS += \
        mainwindow.ui \

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


#MySQL
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-BankSimul-Desktop_Qt_5_11_3_MinGW_32bit-Release/release/ -lDLLMySql
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-BankSimul-Desktop_Qt_5_11_3_MinGW_32bit-Release/debug/ -lDLLMySql

INCLUDEPATH += $$PWD/../build-BankSimul-Desktop_Qt_5_11_3_MinGW_32bit-Release/release
DEPENDPATH += $$PWD/../build-BankSimul-Desktop_Qt_5_11_3_MinGW_32bit-Release/release


#Pincode
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-BankSimul-Desktop_Qt_5_11_3_MinGW_32bit-Release/release/ -lDLLPinCode
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-BankSimul-Desktop_Qt_5_11_3_MinGW_32bit-Release/debug/ -lDLLPinCode

INCLUDEPATH += $$PWD/../build-BankSimul-Desktop_Qt_5_11_3_MinGW_32bit-Release/release
DEPENDPATH += $$PWD/../build-BankSimul-Desktop_Qt_5_11_3_MinGW_32bit-Release/release

#RFID
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../build-BankSimul-Desktop_Qt_5_11_3_MinGW_32bit-Release/release/ -lrfid_dll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../build-BankSimul-Desktop_Qt_5_11_3_MinGW_32bit-Release/debug/ -lrfid_dll

INCLUDEPATH += $$PWD/../build-BankSimul-Desktop_Qt_5_11_3_MinGW_32bit-Release/release
DEPENDPATH += $$PWD/../build-BankSimul-Desktop_Qt_5_11_3_MinGW_32bit-Release/release
