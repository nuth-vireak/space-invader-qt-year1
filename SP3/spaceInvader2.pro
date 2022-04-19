QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutus.cpp \
    beforegameplay.cpp \
    gameoption.cpp \
    gameover.cpp \
    leavegame.cpp \
    main.cpp \
    mainwindow.cpp \
    selectaircraft.cpp \
    wave1.cpp \
    wave2.cpp \
    wave3.cpp \
    wave4.cpp

HEADERS += \
    aboutus.h \
    beforegameplay.h \
    gameoption.h \
    gameover.h \
    leavegame.h \
    mainwindow.h \
    selectaircraft.h \
    wave1.h \
    wave2.h \
    wave3.h \
    wave4.h

FORMS += \
    aboutus.ui \
    beforegameplay.ui \
    gameoption.ui \
    gameover.ui \
    leavegame.ui \
    mainwindow.ui \
    selectaircraft.ui \
    wave1.ui \
    wave2.ui \
    wave3.ui \
    wave4.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    spaceInvader2.qrc
