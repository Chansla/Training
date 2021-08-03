#-------------------------------------------------
#
# Project created by QtCreator 2018-05-16T10:06:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testHot
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    MyGlobalShortCut/MyGlobalShortCut.cpp \
    MyGlobalShortCut/MyWinEventFilter.cpp \
    MyGlobalShortCut/MyGlobalShortCut.cpp \
    MyGlobalShortCut/MyWinEventFilter.cpp

HEADERS  += dialog.h \
    MyGlobalShortCut/MyGlobalShortCut.h \
    MyGlobalShortCut/MyWinEventFilter.h

FORMS    += dialog.ui
