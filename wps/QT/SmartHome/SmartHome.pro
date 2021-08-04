QT       += core gui multimedia multimediawidgets network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    analysis.cpp \
    device.cpp \
    http.cpp \
    login.cpp \
    main.cpp \
    music.cpp \
    smarthome.cpp \
    video.cpp \
    weather.cpp\
    thread.cpp

HEADERS += \
    analysis.h \
    device.h \
    http.h \
    login.h \
    music.h \
    smarthome.h \
    video.h \
    weather.h\
    thread.h

FORMS += \
    device.ui \
    login.ui \
    music.ui \
    smarthome.ui \
    video.ui \
    weather.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
