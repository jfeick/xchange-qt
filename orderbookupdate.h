#ifndef ORDERBOOKUPDATE_H
#define ORDERBOOKUPDATE_H

#include "types.h"

#include "limitorder.h"

class OrderBookUpdate
{
public:
    OrderBookUpdate(Order::OrderType type, BigDecimal volume, CurrencyPair currencyPair,
                    BigDecimal limitPrice, Date timestamp, BigDecimal totalVolume);

    LimitOrder getLimitOrder() const;
    BigDecimal getTotalVolume() const;
    String     toString() const;

private:
    LimitOrder  limitOrder_;
    BigDecimal  totalVolume_;
};

#endif // ORDERBOOKUPDATE_H
