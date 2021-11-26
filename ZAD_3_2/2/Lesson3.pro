TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    comp.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    comp.h

