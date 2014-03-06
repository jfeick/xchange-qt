#ifndef LIMITORDER_H
#define LIMITORDER_H

#include "order.h"

class LimitOrder : public Order
{
public:
    LimitOrder(OrderType type, BigDecimal tradableAmount,
               CurrencyPair currencyPair, String id, Date timestamp,
               BigDecimal limitPrice);

    BigDecimal getLimitPrice() const;
    String     toString() const;

    bool operator==(LimitOrder const& other) const;
    bool operator!=(LimitOrder const& other) const { return !(*this == other); }
    bool operator<(LimitOrder const& other) const;

private:
    BigDecimal limitPrice_;
};

#endif // LIMITORDER_H
