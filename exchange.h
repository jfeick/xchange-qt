#ifndef EXCHANGE_H
#define EXCHANGE_H

#include "types.h"
#include "exchangespecification.h"
#include "pollingmarketdataservice.h"
#include "pollingtradeservice.h"
#include "pollingaccountservice.h"

class Exchange
{
public:
    Exchange();

    virtual ExchangeSpecification* getExchangeSpecification() const = 0;
    virtual ExchangeSpecification* getDefaultExchangeSpecification() const = 0;
    virtual void applySpecification(ExchangeSpecification exchangeSpecification) = 0;
    virtual PollingMarketDataService* getPollingMarketDataService() const = 0;
    //virtual StreamingExchangeService getStreamingExchangeService(ExchangeStreamingConfiguration configuration);
    virtual PollingTradeService* getPollingTradeService() const = 0;
    virtual PollingAccountService* getPollingAccountService() const = 0;
};

#endif // EXCHANGE_H
