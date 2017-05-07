TEMPLATE     = vcapp
TARGET       = Calculatrice
CONFIG      += warn_on qt debug_and_release windows console
HEADERS     += include/MonInterface.h
SOURCES     += src/Calculatrice.cpp src/MonInterface.cpp

QT += widgets
