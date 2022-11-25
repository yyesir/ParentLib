#-------------------------------------------------
#
# Project created by QtCreator 2022-11-24T14:36:38
#
#-------------------------------------------------

QT       += widgets core gui

TARGET = ExportWidget
TEMPLATE = lib

CONFIG += plugin c++11

DESTDIR = $$PWD/../Debug

DEFINES += EXPORTWIDGET_LIBRARY

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        exportwidget.cpp \
    form.cpp

HEADERS += \
        exportwidget.h \
    form.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    form.ui
