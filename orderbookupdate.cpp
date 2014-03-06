#include "orderbookupdate.h"

OrderBookUpdate::OrderBookUpdate(Order::OrderType type, BigDecimal volume,
                                 CurrencyPair currencyPair, BigDecimal limitPrice,
                                 Date timestamp, BigDecimal totalVolume)
    : limitOrder_(type, volume, currencyPair, "", timestamp, limitPrice),
      totalVolume_(totalVolume)
{
}

LimitOrder OrderBookUpdate::getLimitOrder() const
{
    return limitOrder_;
}

BigDecimal OrderBookUpdate::getTotalVolume() const
{
    return totalVolume_;
}

String OrderBookUpdate::toString() const
{
    return "OrderBookUpdate [limitOrder=" + limitOrder_.toString()
            + ", totalVolume=" + totalVolume_ + "]";
}
