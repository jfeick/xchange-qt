#include "baseexchange.h"

BaseExchange::BaseExchange()
    : exchangeSpecification_(nullptr), pollingMarketDataService_(nullptr),
      pollingTradeService_(nullptr), pollingAccountService_(nullptr)
{
}

BaseExchange::~BaseExchange()
{
    delete exchangeSpecification_;
    delete pollingMarketDataService_;
    delete pollingTradeService_;
    delete pollingAccountService_;
}

void BaseExchange::applySpecification(ExchangeSpecification *exchangeSpecification)
{
    if(exchangeSpecification == nullptr) {
        exchangeSpecification_ = new ExchangeSpecification(getDefaultExchangeSpecification());
    }
    else {
        exchangeSpecification_ = new ExchangeSpecification(exchangeSpecification);
    }

}

ExchangeSpecification* BaseExchange::getExchangeSpecification() const
{
    return exchangeSpecification_;
}

PollingMarketDataService *BaseExchange::getPollingMarketDataService() const
{
    return pollingMarketDataService_;
}

PollingTradeService *BaseExchange::getPollingTradeService() const
{
    return pollingTradeService_;
}

PollingAccountService *BaseExchange::getPollingAccountService() const
{
    return pollingAccountService_;
}

