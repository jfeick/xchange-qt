#include "limitorder.h"

LimitOrder::LimitOrder(OrderType type, BigDecimal tradableAmount,
                       CurrencyPair currencyPair, String id, Date timestamp,
                       BigDecimal limitPrice)
    : Order(type, tradableAmount, currencyPair, id, timestamp), limitPrice_(limitPrice)
{}

BigDecimal
LimitOrder::getLimitPrice() const
{
    return limitPrice_;
}

String
LimitOrder::toString() const
{
    return "LimitOrder [limitPrice=" + QString::number(limitPrice_) + ", " + Order::toString() + "]";
}

bool
LimitOrder::operator==(LimitOrder const& other) const
{
    if(other.limitPrice_ != limitPrice_) {
        return false;
    }
    return Order::operator==(other);
}

bool LimitOrder::operator<(const LimitOrder &other) const
{
    return limitPrice_ < other.limitPrice_;
}
