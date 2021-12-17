TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    human.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    human.h

