#include "baseexchangeservice.h"

#include <cassert>

BaseExchangeService::BaseExchangeService(ExchangeSpecification exchangeSpecification)
    : exchangeSpecification_(exchangeSpecification)
{}

void BaseExchangeService::verify(const CurrencyPair &currencyPair) const
{
    assert(getExchangeSymbols().contains(currencyPair));
    // TODO
    // implement this as runtime check? (exception?)
}
