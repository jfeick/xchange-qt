#ifndef ORDER_H
#define ORDER_H

#include "types.h"
#include "currencypair.h"

class Order
{
public:
    enum OrderType { BID, ASK };

    Order(OrderType type, BigDecimal tradableAmount, CurrencyPair currencyPair,
          String id, Date timestamp);

    OrderType getType() const;
    BigDecimal getTradableAmount() const;
    CurrencyPair getCurrencyPair() const;
    String getId() const;
    Date getTimestamp() const;

    String toString() const;

    bool operator==(Order const& other) const;
    bool operator!=(Order const& other) const { return !(*this == other); }

private:
    OrderType       type_;
    BigDecimal      tradableAmount_;
    CurrencyPair    currencyPair_;
    String          id_;
    Date            timestamp_;
};

#endif // ORDER_H
