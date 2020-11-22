QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    deliverybase.cpp \
    delivg.cpp \
    homedelivery.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    person.cpp \
    personcollection.cpp \
    registration.cpp \
    selfdelgui.cpp \
    selfdelivery.cpp \
    tohomedel.cpp

HEADERS += \
    deliverybase.h \
    delivg.h \
    homedelivery.h \
    mainwindow.h \
    menu.h \
    person.h \
    personcollection.h \
    registration.h \
    selfdelgui.h \
    selfdelivery.h \
    tohomedel.h

FORMS += \
    delivg.ui \
    mainwindow.ui \
    menu.ui \
    registration.ui \
    selfdelgui.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
