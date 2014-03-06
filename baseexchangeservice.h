#ifndef BASEEXCHANGESERVICE_H
#define BASEEXCHANGESERVICE_H

#include "types.h"
#include "exchangespecification.h"
#include "currencypair.h"

typedef QList<CurrencyPair> CurrencyPairContainer;

class BaseExchangeService
{
protected:
    BaseExchangeService(ExchangeSpecification exchangeSpecification);

public:
    virtual CurrencyPairContainer getExchangeSymbols() const = 0;
    void verify(const CurrencyPair& currencyPair) const;

protected:
    ExchangeSpecification exchangeSpecification_;

};

#endif // BASEEXCHANGESERVICE_H
