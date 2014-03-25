#include "BTCEExchange.h"
#include "exchangespecification.h"
#include "BTCEMarketDataService.h"


BTCEExchange::BTCEExchange()
{
    applySpecification(getDefaultExchangeSpecification());
    //pollingMarketDataService_ = new BTCEMarketDataService(*exchangeSpecification_);
}

void BTCEExchange::applySpecification(const ExchangeSpecification *exchangeSpecification)
{
    BaseExchange::applySpecification(exchangeSpecification);
    pollingMarketDataService_ = new BTCEMarketDataService(*exchangeSpecification);
}

ExchangeSpecification *BTCEExchange::getDefaultExchangeSpecification() const
{
    ExchangeSpecification *exchangeSpecification = new ExchangeSpecification("BTCEExchange");
    exchangeSpecification->setSslUri("https://btc-e.com");
    exchangeSpecification->setHost("btc-e.com");
    exchangeSpecification->setPort(80);
    exchangeSpecification->setExchangeName("BTC-e");
    exchangeSpecification->setExchangeDescription("BTC-e is a Bitcoin exchange registered in Russia.");
    return exchangeSpecification;
}
