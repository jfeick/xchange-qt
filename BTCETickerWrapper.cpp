#include "BTCETickerWrapper.h"

BTCETickerWrapper::BTCETickerWrapper()
{

}

BTCETickerWrapper::BTCETickerWrapper(const TickerMap &tickerMap)
    : tickerMap_(tickerMap)
{
}

TickerMap BTCETickerWrapper::getTickerMap() const
{
    return tickerMap_;
}

BTCETicker BTCETickerWrapper::getTicker(const String &pair) const
{
    BTCETicker result;
    if(tickerMap_.contains(pair)) {
        result = tickerMap_.value(pair);
    }
    return result;
}

String BTCETickerWrapper::toString() const
{
    String output = "BTCETickerV3 [map=";
    for(const auto &ticker : tickerMap_) {
        output += ticker.toString();
    }
    output += "]";
    return output;
}
