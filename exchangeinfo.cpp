#include "exchangeinfo.h"

ExchangeInfo::ExchangeInfo(CurrencyPairList pairs)
    : pairs_(pairs)
{}

CurrencyPairList
ExchangeInfo::getPairs() const
{
    return pairs_;
}

String
ExchangeInfo::toString() const
{
    String pairsStr;
    for(CurrencyPairList::const_iterator it = pairs_.begin();
        it != pairs_.end(); ++it) {
        pairsStr += it->toString();
        pairsStr += " ";
    }
    return "ExchangeInfo [pairs=" + pairsStr + "]";
}
