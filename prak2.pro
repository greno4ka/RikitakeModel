#-------------------------------------------------
#
# Project created by QtCreator 2014-04-09T17:09:08
#
#-------------------------------------------------

QT       += core gui opengl printsupport
LIBS += -lglut32 -lglu32
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = prak2
TEMPLATE = app


SOURCES += main.cpp\
    glwidget.cpp \
    rungekutta.cpp \
    form0.cpp \
    form1.cpp \
    help.cpp \
    glwidget2d.cpp \
    glwidget2d2.cpp \
    glwidget2d1.cpp \
    graphics.cpp \
    gl2ps.c

HEADERS  += \
    glwidget.h \
    display.h \
    rungekutta.h \
    form0.h \
    form1.h \
    help.h \
    mg.h \
    glwidget2d.h \
    recalc.h \
    glwidget2d2.h \
    glwidget2d1.h \
    graphics.h \
    gl2ps.h

FORMS    += Form0.ui \
    Form1.ui \
    help.ui \
    Graphics.ui

RESOURCES += \
    resources.qrc
