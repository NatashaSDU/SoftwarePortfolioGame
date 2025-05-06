TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        Cave.cpp \
        Cave.cpp \
        CaveFactory.cpp \
        DataAccess.cpp \
        Enemy.cpp \
        GameController.cpp \
        Hero.cpp \
        HeroProvider.cpp \
        Opponent.cpp \
        ProgramStatusManager.cpp \
        RequestInput.cpp \
        State.cpp \
        StateBossFight.cpp \
        StateFight.cpp \
        StateFightOptions.cpp \
        StateRetreatOffer.cpp \
        main.cpp

HEADERS += \
    Cave.h \
    CaveFactory.h \
    DataAccess.h \
    Enemy.h \
    GameController.h \
    Hero.h \
    HeroProvider.h \
    Opponent.h \
    ProgramStatus.h \
    ProgramStatusManager.h \
    RequestInput.h \
    State.h \
    StateBossFight.h \
    StateFight.h \
    StateFightOptions.h \
    StateRetreatOffer.h
