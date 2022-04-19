QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    aboutus.cpp \
    beforegameplay.cpp \
    bullet.cpp \
    enemy.cpp \
    game.cpp \
    gameoption.cpp \
    health.cpp \
    level.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    score.cpp \
    selectaircraft.cpp

HEADERS += \
    aboutus.h \
    beforegameplay.h \
    bullet.h \
    enemy.h \
    game.h \
    gameoption.h \
    health.h \
    level.h \
    mainwindow.h \
    player.h \
    score.h \
    selectaircraft.h

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    SP3.qrc \
    SP3.qrc

FORMS += \
    aboutus.ui \
    beforegameplay.ui \
    gameoption.ui \
    mainwindow.ui \
    selectaircraft.ui

SUBDIRS += \
    spaceInvader2.pro

DISTFILES += \
    font/000webfont Regular.ttf \
    image/Group 6.png \
    image/RUPP_logo 1.png \
    image/Rectangle 141.png \
    image/background.png \
    image/blur.png \
    image/enemy.png \
    image/enemy1.png \
    image/enemy2.png \
    image/enemy3.png \
    image/enemy4.png \
    image/fee logo.png \
    image/flaming_meteor.png \
    image/health.png \
    image/instruction.png \
    image/left.png \
    image/logo.png \
    image/plane1.png \
    image/plane2.png \
    image/plane3.png \
    image/plane4.png \
    image/pointButton.png \
    image/resume.png \
    image/title.png \
    image/wave1.png \
    image/wave2.png \
    image/wave3.png \
    image/wave4.png
