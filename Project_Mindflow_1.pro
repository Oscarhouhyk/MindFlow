QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    jizhang.cpp \
    main.cpp \
    queren.cpp \
    rilixianshi.cpp \
    shouru.cpp \
    suishouji_mw1.cpp \
    todolist.cpp \
    widget.cpp \
    xiangmu.cpp \
    yinji.cpp \
    zhichu.cpp

HEADERS += \
    jizhang.h \
    queren.h \
    rilixianshi.h \
    shouru.h \
    suishouji_mw1.h \
    sz.h \
    todolist.h \
    widget.h \
    xiangmu.h \
    yinji.h \
    zhichu.h

FORMS += \
    jizhang.ui \
    queren.ui \
    rilixianshi.ui \
    shouru.ui \
    suishouji_mw1.ui \
    widget.ui \
    xiangmu.ui \
    yinji.ui \
    zhichu.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    suishouji_images.qrc \
    todo_images.qrc
