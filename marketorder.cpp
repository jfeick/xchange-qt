#include "marketorder.h"

MarketOrder::MarketOrder(OrderType type, BigDecimal tradableAmount,
                         CurrencyPair currencyPair, String id, Date timestamp)
    : Order(type, tradableAmount, currencyPair, id, timestamp)
{}

MarketOrder::MarketOrder(OrderType type, BigDecimal tradableAmount,
                         CurrencyPair currencyPair, Date timestamp)
    : Order(type, tradableAmount, currencyPair, "", timestamp)
{}

MarketOrder::MarketOrder(OrderType type, BigDecimal tradableAmount,
                         CurrencyPair currencyPair)
    : Order(type, tradableAmount, currencyPair, "", QDate())
{}
