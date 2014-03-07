#-------------------------------------------------
#
# Project created by QtCreator 2014-03-03T23:54:53
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = xchange
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++11

SOURCES += main.cpp \
    currencypair.cpp \
    currencies.cpp \
    wallet.cpp \
    accountinfo.cpp \
    order.cpp \
    exchangeinfo.cpp \
    limitorder.cpp \
    marketorder.cpp \
    openorders.cpp \
    orderbook.cpp \
    orderbookupdate.cpp \
    ticker.cpp \
    trade.cpp \
    trades.cpp \
    baseexchangeservice.cpp \
    exchangespecification.cpp \
    pollingaccountservice.cpp \
    pollingmarketdataservice.cpp \
    pollingtradeservice.cpp \
    basepollingexchangeservice.cpp \
    exchange.cpp \
    baseexchange.cpp \
    cacheddatasession.cpp \
    BTCEAccountInfo.cpp \
    BTCEDepth.cpp \
    BTCEDepthWrapper.cpp \
    BTCEExchangeInfo.cpp \
    BTCEPairInfo.cpp \
    BTCETicker.cpp \
    BTCETickerWrapper.cpp \
    BTCETrade.cpp \
    BTCETradesWrapper.cpp \
    BTCEBaseService.cpp

HEADERS += \
    currencies.h \
    types.h \
    currencypair.h \
    wallet.h \
    accountinfo.h \
    order.h \
    exchangeinfo.h \
    limitorder.h \
    marketorder.h \
    openorders.h \
    orderbook.h \
    orderbookupdate.h \
    ticker.h \
    trade.h \
    trades.h \
    baseexchangeservice.h \
    exchangespecification.h \
    pollingaccountservice.h \
    pollingmarketdataservice.h \
    pollingtradeservice.h \
    basepollingexchangeservice.h \
    exchange.h \
    baseexchange.h \
    cacheddatasession.h \
    BTCEReturn.h \
    BTCEAccountInfo.h \
    BTCEAccountInfoReturn.h \
    BTCEDepth.h \
    BTCEDepthWrapper.h \
    BTCEExchangeInfo.h \
    BTCEPairInfo.h \
    BTCETicker.h \
    BTCETickerWrapper.h \
    BTCETrade.h \
    BTCETradesWrapper.h \
    BTCEBaseService.h
