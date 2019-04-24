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
        timerthread.cpp \
        uibanksim.cpp \
    uibanksimeasymode.cpp

HEADERS += \
        mainwindow.h \
        rfidthread.h \
        timerthread.h \
        uibanksim.h \
    uibanksimeasymode.h

FORMS += \
        mainwindow.ui \
        uibanksim.ui \
    uibanksimeasymode.ui

#Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


#MySQL
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/./release/ -lDLLMySql
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/./debug/ -lDLLMySql

INCLUDEPATH += $$PWD/release
DEPENDPATH += $$PWD/release



#Pincode
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../Login_dll/DLLPinCode/release/release/ -lDLLPinCode
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../Login_dll/DLLPinCode/release/debug/ -lDLLPinCode

INCLUDEPATH += $$PWD/../Login_dll/DLLPinCode/release/release
DEPENDPATH += $$PWD/../Login_dll/DLLPinCode/release/release


#RFID
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../rfid_dll/release/ -lrfid_dll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../rfid_dll/debug/ -lrfid_dll

INCLUDEPATH += $$PWD/../rfid_dll/release
DEPENDPATH += $$PWD/../rfid_dll/release

#TEXTTOSPEECH
win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../TextToSpeechDLL/TextToSpeech/release/ -lTextToSpeech
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../TextToSpeechDLL/TextToSpeech/debug/ -lTextToSpeech

INCLUDEPATH += $$PWD/../TextToSpeechDLL/TextToSpeech/release
DEPENDPATH += $$PWD/../TextToSpeechDLL/TextToSpeech/release
