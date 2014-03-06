#include "order.h"

Order::Order(OrderType type, BigDecimal tradableAmount, CurrencyPair currencyPair, String id, Date timestamp)
    : type_(type), tradableAmount_(tradableAmount), currencyPair_(currencyPair), id_(id), timestamp_(timestamp)
{}

Order::OrderType
Order::getType() const
{
    return type_;
}

BigDecimal
Order::getTradableAmount() const
{
    return tradableAmount_;
}

CurrencyPair
Order::getCurrencyPair() const
{
    return currencyPair_;
}

String
Order::getId() const
{
    return id_;
}

Date
Order::getTimestamp() const
{
    return timestamp_;
}

String
Order::toString() const
{
    String typeStr = (type_ == ASK) ? "ASK" : "BID";
    return "Order [type=" + typeStr + ", tradableAmount=" + QString::number(tradableAmount_)
            + ", currencyPair=" + currencyPair_.toString() + ", id=" + id_
            + ", timestamp=" + timestamp_.toString() + "]";
}

bool
Order::operator==(Order const& other) const
{
    if(other.type_ != type_)
        return false;
    if(other.tradableAmount_ != tradableAmount_)
        return false;
    if(other.currencyPair_ != currencyPair_)
        return false;
    if(other.id_ != id_)
        return false;
    if(other.timestamp_ != timestamp_)
        return false;

    return true;
}
