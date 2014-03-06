#ifndef ORDERBOOK_H
#define ORDERBOOK_H

#include "types.h"

#include "limitorder.h"
#include "orderbookupdate.h"

typedef QList<LimitOrder> LimitOrderContainer;

class OrderBook
{
public:
    OrderBook(Date timeStamp, LimitOrderContainer asks,
              LimitOrderContainer bids);

    Date getTimeStamp() const;
    LimitOrderContainer getAsks() const;
    LimitOrderContainer getBids() const;
    void update(LimitOrder const& limitOrder);
    void update(OrderBookUpdate orderBookUpdate);
    void updateDate(Date updateDate);
    String toString() const;

private:
    Date            timeStamp_;
    LimitOrderContainer  asks_;
    LimitOrderContainer  bids_;
};

#endif // ORDERBOOK_H
