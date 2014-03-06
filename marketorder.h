#ifndef MARKETORDER_H
#define MARKETORDER_H

#include "order.h"

class MarketOrder : public Order
{
public:
    MarketOrder(OrderType type, BigDecimal tradableAmount,
                CurrencyPair currencyPair, String id, Date timestamp);
    MarketOrder(OrderType type, BigDecimal tradableAmount,
                CurrencyPair currencyPair, Date timestamp);
    MarketOrder(OrderType type, BigDecimal tradableAmount,
                CurrencyPair currencyPair);

};

#endif // MARKETORDER_H
