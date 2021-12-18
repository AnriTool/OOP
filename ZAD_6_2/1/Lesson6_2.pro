TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    patient.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    patient.h

