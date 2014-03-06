#include "trade.h"

Trade::Trade(Order::OrderType type, BigDecimal tradableAmount, CurrencyPair currencyPair,
             BigDecimal price, Date timestamp, String id, String orderId)
    : type_(type), tradableAmount_(tradableAmount), currencyPair_(currencyPair),
      price_(price), timestamp_(timestamp), id_(id), orderId_(orderId)
{}

Order::OrderType Trade::getType() const
{
    return type_;
}

BigDecimal Trade::getTradableAmount() const
{
    return tradableAmount_;
}

CurrencyPair Trade::getCurrencyPair() const
{
    return currencyPair_;
}

BigDecimal Trade::getPrice() const
{
    return price_;
}

Date Trade::getTimestamp() const
{
    return timestamp_;
}

String Trade::getId() const
{
    return id_;
}

String Trade::getOrderId() const
{
    return orderId_;
}

String Trade::toString() const
{
    String typeStr = (type_ == Order::ASK) ? "ASK" : "BID";
    return "Trade [type="
            + typeStr
            + ", tradableAmount=" + QString::number(tradableAmount_)
            + ", currencyPair=" + currencyPair_.toString()
            + ", price=" + QString::number(price_)
            + ", timestamp=" + timestamp_.toString()
            + ", id=" + id_ + ", orderId=" + orderId_
            + "]";
}

bool Trade::operator==(const Trade &other) const
{
    return id_ == other.id_;
}

