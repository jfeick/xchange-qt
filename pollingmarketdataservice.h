#ifndef POLLINGMARKETDATASERVICE_H
#define POLLINGMARKETDATASERVICE_H

#include "types.h"
#include "ticker.h"
#include "orderbook.h"
#include "trades.h"
#include "exchangeinfo.h"

class PollingMarketDataService
{
public:
    PollingMarketDataService();
    virtual ~PollingMarketDataService();

    virtual Ticker getTicker(CurrencyPair currencyPair) const = 0;
    virtual OrderBook getOrderBook(CurrencyPair currencyPair) const = 0;
    virtual Trades getTrades(CurrencyPair currencyPair) const = 0;
    virtual ExchangeInfo getExchangeInfo() const = 0;
};

#endif // POLLINGMARKETDATASERVICE_H
