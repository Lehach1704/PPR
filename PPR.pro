QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

#INCLUDEPATH += C:\Users\Alex\Desktop\zlib-1.3.1\build\final\include
#INCLUDEPATH += C:\Users\Alex\Desktop\quazip-master\build\final\include\QuaZip-Qt6-1.5\quazip
INCLUDEPATH += D:\Qt\cpp\QtProjects\PPR\zlib-1.3.1\build\final\include
INCLUDEPATH += D:\Qt\cpp\QtProjects\PPR\quazip-master\build\final\include\QuaZip-Qt6-1.5\quazip

LIBS += -LD:\Qt\cpp\QtProjects\PPR\quazip-master\build\final\bin -llibquazip1-qt6

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    ppr.cpp

HEADERS += \
    ppr.h

FORMS += \
    ppr.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
