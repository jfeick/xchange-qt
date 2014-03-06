#include "ticker.h"


Ticker::Ticker(CurrencyPair currencyPair, BigDecimal last, BigDecimal bid,
               BigDecimal ask, BigDecimal high, BigDecimal low, BigDecimal volume,
               Date timestamp)
    : currencyPair_(currencyPair), last_(last), bid_(bid), ask_(ask), high_(high),
      low_(low), volume_(volume), timestamp_(timestamp)
{}

CurrencyPair Ticker::getCurrencyPair() const
{
    return currencyPair_;
}

BigDecimal Ticker::getLast() const
{
    return last_;
}

BigDecimal Ticker::getBid() const
{
    return bid_;
}

BigDecimal Ticker::getAsk() const
{
    return ask_;
}

BigDecimal Ticker::getHigh() const
{
    return high_;
}

BigDecimal Ticker::getLow() const
{
    return low_;
}

BigDecimal Ticker::getVolume() const
{
    return volume_;
}

Date Ticker::getTimestamp() const
{
    return timestamp_;
}

String Ticker::toString() const
{
    return "Ticker [currencyPair=" + currencyPair_.toString()
            + ", last=" + QString::number(last_)
            + ", bid=" + QString::number(bid_)
            + ", ask=" + QString::number(ask_)
            + ", high=" + QString::number(high_)
            + ", low=" + QString::number(low_)
            + ", volume=" + QString::number(volume_)
            + ", timestamp=" + timestamp_.toString() + "]";
}
