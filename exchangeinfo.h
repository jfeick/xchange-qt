#ifndef EXCHANGEINFO_H
#define EXCHANGEINFO_H

#include "types.h"
#include "currencypair.h"

typedef std::list<CurrencyPair> CurrencyPairList;


class ExchangeInfo
{
public:
    ExchangeInfo(CurrencyPairList pairs);

    CurrencyPairList getPairs() const;
    String toString() const;

private:
    CurrencyPairList pairs_;
};

#endif // EXCHANGEINFO_H
