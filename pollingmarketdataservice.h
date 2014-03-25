#ifndef POLLINGMARKETDATASERVICE_H
#define POLLINGMARKETDATASERVICE_H

#include "types.h"
#include "ticker.h"
#include "orderbook.h"
#include "trades.h"
#include "exchangeinfo.h"
#include "currencypair.h"

#include <QTimer>
#include <QSet>
typedef QSet<CurrencyPair> CurrencyPairContainer;

class PollingMarketDataService
{
public:
    PollingMarketDataService();
    virtual ~PollingMarketDataService();

    //virtual Ticker getTicker(CurrencyPair currencyPair) const = 0;
    //virtual OrderBook getOrderBook(CurrencyPair currencyPair) const = 0;
    //virtual Trades getTrades(CurrencyPair currencyPair) const = 0;
    //virtual ExchangeInfo getExchangeInfo() const = 0;
    virtual void registerTickerCurrencyPair(const CurrencyPair &pair);
    virtual void unregisterTickerCurrencyPair(const CurrencyPair &pair);
    virtual void startTickerService();
    virtual void stopTickerService();
    virtual void setTickerUpdateInterval(int tickerUpdateInterval);
    virtual int getTickerUpdateInterval() const;

protected:
    CurrencyPairContainer   tickerPairs_;
    quint32                 tickerUpdateInterval_;
    QTimer                  tickerTimer_;
};

#endif // POLLINGMARKETDATASERVICE_H
