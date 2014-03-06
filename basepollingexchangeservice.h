#ifndef BASEPOLLINGEXCHANGESERVICE_H
#define BASEPOLLINGEXCHANGESERVICE_H

#include "baseexchangeservice.h"
#include "types.h"

class BasePollingExchangeService : public BaseExchangeService
{
protected:
    BasePollingExchangeService(ExchangeSpecification exchangeSpecification);
};

#endif // BASEPOLLINGEXCHANGESERVICE_H
