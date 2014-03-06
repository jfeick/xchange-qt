#ifndef POLLINGTRADESERVICE_H
#define POLLINGTRADESERVICE_H

#include "types.h"
#include "openorders.h"
#include "marketorder.h"
#include "limitorder.h"
#include "trades.h"

class PollingTradeService
{
public:
    PollingTradeService();
    virtual ~PollingTradeService();

    virtual OpenOrders getOpenOrders() const = 0;
    virtual String placeLimitOrder(LimitOrder limitOrder) const = 0;
    virtual bool cancelOrder(String orderId) const = 0;
    virtual Trades getTradeHistory() const = 0;
};

#endif // POLLINGTRADESERVICE_H
