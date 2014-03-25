#ifndef BASEEXCHANGE_H
#define BASEEXCHANGE_H

#include "exchange.h"
#include "exchangespecification.h"
#include "pollingmarketdataservice.h"
#include "pollingtradeservice.h"
#include "pollingaccountservice.h"

class BaseExchange : public Exchange
{
public:
    BaseExchange();
    virtual ~BaseExchange();

    virtual void applySpecification(const ExchangeSpecification *exchangeSpecification);
    virtual ExchangeSpecification* getExchangeSpecification() const;
    virtual PollingMarketDataService* getPollingMarketDataService() const;
    //virtual PollingTradeService* getPollingTradeService() const;
    //virtual PollingAccountService* getPollingAccountService() const;
    // //virtual StreamingExchangeService* getStreamingExchangeService() const;

protected:
    ExchangeSpecification* exchangeSpecification_;
    PollingMarketDataService* pollingMarketDataService_;
    PollingTradeService* pollingTradeService_;
    PollingAccountService* pollingAccountService_;
    //StreamingExchangeService streamingExchangeService;
};

#endif // BASEEXCHANGE_H
