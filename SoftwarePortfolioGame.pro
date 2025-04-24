TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        DataAccess.cpp \
        Enemy.cpp \
        GameController.cpp \
        Hero.cpp \
        Opponent.cpp \
        RequestInput.cpp \
        main.cpp

HEADERS += \
    DataAccess.h \
    Enemy.h \
    GameController.h \
    Hero.h \
    Opponent.h \
    RequestInput.h \
    State.h \
    StateRetreatOffer.h
