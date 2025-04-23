TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Enemy.cpp \
        Hero.cpp \
        Opponent.cpp \
        main.cpp

HEADERS += \
    Enemy.h \
    Hero.h \
    Opponent.h
