#include "BTCETradesWrapper.h"

BTCETradesWrapper::BTCETradesWrapper(const TradesMap &tradesMap)
    : tradesMap_(tradesMap)
{
}

TradesMap BTCETradesWrapper::getTradesMap() const
{
    return tradesMap_;
}

TradesContainer BTCETradesWrapper::getTrades(const String &pair) const
{
    TradesContainer result;
    if(tradesMap_.contains(pair)) {
        result = tradesMap_.value(pair);
    }
    return result;
}

String BTCETradesWrapper::toString() const
{
    String output = "BTCETradesV3 [map=";
    for(const auto &tradesContainer: tradesMap_) {
        output += "[";
        for(const auto &trade : tradesContainer) {
            output += "[";
            output += trade.toString();
            output += ", ";
        }
        output += "], ";
    }
    output += "]";
    return output;
}
