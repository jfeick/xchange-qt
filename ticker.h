#ifndef TICKER_H
#define TICKER_H

#include "types.h"

#include "currencypair.h"

class Ticker
{
public:
    Ticker(CurrencyPair currencyPair, BigDecimal last, BigDecimal bid,
           BigDecimal ask, BigDecimal high, BigDecimal low,
           BigDecimal volume, Date timestamp);

    CurrencyPair getCurrencyPair() const;
    BigDecimal getLast() const;
    BigDecimal getBid() const;
    BigDecimal getAsk() const;
    BigDecimal getHigh() const;
    BigDecimal getLow() const;
    BigDecimal getVolume() const;
    Date       getTimestamp() const;
    String     toString() const;

private:
    CurrencyPair currencyPair_;
    BigDecimal last_;
    BigDecimal bid_;
    BigDecimal ask_;
    BigDecimal high_;
    BigDecimal low_;
    BigDecimal volume_;
    Date       timestamp_;
};

#endif // TICKER_H
