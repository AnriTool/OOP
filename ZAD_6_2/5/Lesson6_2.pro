TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    railcar.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    railcar.h

