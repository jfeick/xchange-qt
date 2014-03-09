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
};

#endif // BTCEBASESERVICE_H
