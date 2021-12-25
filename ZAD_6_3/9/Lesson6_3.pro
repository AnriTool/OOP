TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    product.cpp

include(deployment.pri)
qtcAddDeployment()

HEADERS += \
    product.h

