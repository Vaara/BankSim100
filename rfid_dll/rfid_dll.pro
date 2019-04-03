#-------------------------------------------------
#
# Project created by QtCreator 2019-04-01T10:31:22
#
#-------------------------------------------------

QT       += core
QT       -= gui
QT       += serialport

TARGET = rfid_dll
TEMPLATE = lib

DEFINES += RFID_DLL_LIBRARY

DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        rfid_dll.cpp \
    serialport.cpp

HEADERS += \
        rfid_dll.h \
        rfid_dll_global.h \ 
    serialport.h

#DESTDIR = C:\temp10\dll\

unix {
    target.path = /usr/lib
    INSTALLS += target
}
