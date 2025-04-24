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
        StateFight.cpp \
        StateFightOptions.cpp \
        StateRetreatOffer.cpp \
        main.cpp

HEADERS += \
    DataAccess.h \
    Enemy.h \
    GameController.h \
    Hero.h \
    Opponent.h \
    RequestInput.h \
    State.h \
    StateFight.h \
    StateFightOptions.h \
    StateRetreatOffer.h
