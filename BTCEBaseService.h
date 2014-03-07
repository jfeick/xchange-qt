#ifndef BTCEBASESERVICE_H
#define BTCEBASESERVICE_H

#include "types.h"
#include "currencypair.h"
#include "baseexchangeservice.h"

class BTCEBaseService : public BaseExchangeService
{
public:
    BTCEBaseService(const ExchangeSpecification &exchangeSpecification);

    CurrencyPairContainer getExchangeSymbols() const;

public:
    static const CurrencyPairContainer currencyPairs_;
};

#endif // BTCEBASESERVICE_H
