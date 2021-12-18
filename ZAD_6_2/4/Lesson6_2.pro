TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    clients.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    clients.h

