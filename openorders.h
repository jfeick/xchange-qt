#ifndef OPENORDERS_H
#define OPENORDERS_H

#include "types.h"

#include "limitorder.h"

typedef std::list<LimitOrder> LimitOrderList;

class OpenOrders
{
public:
    OpenOrders(LimitOrderList openOrders);

    LimitOrderList getOpenOrders() const;
    String toString() const;

private:
    LimitOrderList openOrders_;
};

#endif // OPENORDERS_H
