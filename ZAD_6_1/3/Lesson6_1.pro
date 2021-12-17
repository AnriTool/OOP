TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    pet.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    pet.h

