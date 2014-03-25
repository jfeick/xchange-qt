#ifndef BTCEEXCHANGE_H
#define BTCEEXCHANGE_H

#include "baseexchange.h"

class PollingMarketDataService;
class ExchangeSpecification;

class BTCEExchange : public BaseExchange
{
public:
    BTCEExchange();
    void applySpecification(const ExchangeSpecification *exchangeSpecification);
    ExchangeSpecification* getDefaultExchangeSpecification() const;

};

#endif // BTCEEXCHANGE_H
