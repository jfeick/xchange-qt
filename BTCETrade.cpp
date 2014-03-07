#include "BTCETrade.h"

BTCETrade::BTCETrade(const QJsonValue &amount, const QJsonValue &date,
                     const QJsonValue &price, const QJsonValue &tid,
                     const QJsonValue &tradeType)
    : amount_(amount.toDouble()), date_(date.toInt()), price_(price.toDouble()),
      tid_(tid.toInt()), tradeType_(tradeType.toString())
{}

BigDecimal BTCETrade::getAmount() const
{
    return amount_;
}

long BTCETrade::getDate() const
{
    return date_;
}

BigDecimal BTCETrade::getPrice() const
{
    return price_;
}

long BTCETrade::getTid() const
{
    return tid_;
}

String BTCETrade::getTradeType() const
{
    return tradeType_;
}

String BTCETrade::toString() const
{
    return "BTCETrade [amount=" + QString::number(amount_)
            + ", timestamp=" + QString::number(date_)
            + ", price=" + QString::number(price_)
            + ", tid=" + QString::number(tid_)
            + ", type=" + tradeType_
            + "]";
}
