QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    curso.cpp \
    departamento.cpp \
    estudiante.cpp \
    form.cpp \
    main.cpp \
    mainwindow.cpp \
    nota.cpp \
    profesor.cpp \
    tree.cpp \
    universidad.cpp \
    usuario.cpp \
    widget.cpp

HEADERS += \
    curso.h \
    departamento.h \
    estudiante.h \
    form.h \
    mainwindow.h \
    nota.h \
    profesor.h \
    tree.h \
    universidad.h \
    usuario.h \
    widget.h

FORMS += \
    form.ui \
    mainwindow.ui \
    tree.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
