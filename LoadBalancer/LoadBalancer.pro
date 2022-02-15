TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        loadbalancer.cpp \
        main.cpp \
        requisicao.cpp \
        servidor.cpp

HEADERS += \
    loadbalancer.h \
    requisicao.h \
    servidor.h

TARGET = test_boost_lib_in_QT

INCLUDEPATH += /usr/include/boost

LIBS += -L/usr/include/boost -lboost_system
LIBS += -L/usr/include/boost  -lboost_chrono
LIBS += -L/usr/include/boost  -lboost_thread
LIBS += -L/usr/include/boost  -lboost_timer
LIBS +=-lpthread
