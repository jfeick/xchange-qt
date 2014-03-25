#include "pollingmarketdataservice.h"

PollingMarketDataService::PollingMarketDataService()
{
}

PollingMarketDataService::~PollingMarketDataService()
{

}

void PollingMarketDataService::registerTickerCurrencyPair(const CurrencyPair &pair)
{
    tickerPairs_.insert(pair);
}

void PollingMarketDataService::unregisterTickerCurrencyPair(const CurrencyPair &pair)
{
    tickerPairs_.remove(pair);
}

void PollingMarketDataService::startTickerService()
{
}

void PollingMarketDataService::stopTickerService()
{

}

void PollingMarketDataService::setTickerUpdateInterval(int tickerUpdateInterval)
{
    tickerUpdateInterval_ = tickerUpdateInterval;
}

int PollingMarketDataService::getTickerUpdateInterval() const
{
    return tickerUpdateInterval_;
}
