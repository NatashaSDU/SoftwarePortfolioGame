TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        DataAccess.cpp \
        Enemy.cpp \
        Hero.cpp \
        Opponent.cpp \
        main.cpp

HEADERS += \
    DataAccess.h \
    Enemy.h \
    Hero.h \
    Opponent.h
