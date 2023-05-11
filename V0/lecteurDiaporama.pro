TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        image.cpp \
        lecteur.cpp \
        lecteurvue.cpp \
        main.cpp

HEADERS += \
    image.h \
    lecteur.h \
    lecteurvue.h

FORMS += \
    lecteurvue.ui
