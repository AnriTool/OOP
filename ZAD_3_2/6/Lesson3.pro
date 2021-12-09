TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    broke.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    broke.h

