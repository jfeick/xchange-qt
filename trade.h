#ifndef TRADE_H
#define TRADE_H

#include "types.h"
#include "order.h"
#include "currencypair.h"

class Trade
{
public:
    Trade(Order::OrderType type, BigDecimal tradableAmount, CurrencyPair currencyPair,
          BigDecimal price, Date timestamp, String id, String orderId);

    Order::OrderType getType() const;
    BigDecimal getTradableAmount() const;
    CurrencyPair getCurrencyPair() const;
    BigDecimal getPrice() const;
    Date getTimestamp() const;
    String getId() const;
    String getOrderId() const;

    String toString() const;

    bool operator==(const Trade& other) const;
    bool operator!=(const Trade& other) const { return !(*this == other); };

private:
    Order::OrderType type_;
    BigDecimal tradableAmount_;
    CurrencyPair currencyPair_;
    BigDecimal price_;
    Date timestamp_;
    String id_;
    String orderId_;
};

#endif // TRADE_H
