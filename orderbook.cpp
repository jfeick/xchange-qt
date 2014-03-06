#include "orderbook.h"


OrderBook::OrderBook(Date timeStamp, LimitOrderContainer asks,
                     LimitOrderContainer bids)
    : timeStamp_(timeStamp), asks_(asks), bids_(bids)
{}

Date OrderBook::getTimeStamp() const
{
    return timeStamp_;
}

LimitOrderContainer OrderBook::getAsks() const
{
    return asks_;
}

LimitOrderContainer OrderBook::getBids() const
{
    return bids_;
}

void OrderBook::update(const LimitOrder &limitOrder)
{
    if(limitOrder.getType() == Order::ASK) {
        QMutableListIterator<LimitOrder> it(asks_);
        while(it.hasNext()) {
            if(it.next().getLimitPrice() == limitOrder.getLimitPrice())  {
                 it.remove();
                 break;
            }
        }
        asks_.append(limitOrder);
        qSort(asks_);
    }
    else {
        QMutableListIterator<LimitOrder> it(bids_);
        while(it.hasNext()) {
            if(it.next().getLimitPrice() == limitOrder.getLimitPrice()) {
                it.remove();
                break;
            }
        }
        bids_.append(limitOrder);
        qSort(bids_);
    }
    updateDate(limitOrder.getTimestamp());
}

void OrderBook::update(OrderBookUpdate orderBookUpdate)
{
    QMutableListIterator<LimitOrder> it(asks_);
    if(orderBookUpdate.getLimitOrder().getType() == Order::ASK) {
        // it = QMutableListIterator<LimitOrder>(asks); // already initialized
    }
    else {
        it = QMutableListIterator<LimitOrder>(bids_);
    }
    while(it.hasNext()) {
        if(it.next().getLimitPrice() == orderBookUpdate.getLimitOrder().getLimitPrice()) {
            it.remove();
            break;
        }
    }

    if(orderBookUpdate.getTotalVolume() > 0.0) {
        if(orderBookUpdate.getLimitOrder().getType() == Order::ASK) {
            asks_.append(orderBookUpdate.getLimitOrder());
            qSort(asks_);
        }
        else {
            bids_.append(orderBookUpdate.getLimitOrder());
            qSort(bids_);
        }
    }
    updateDate(orderBookUpdate.getLimitOrder().getTimestamp());
}

void
OrderBook::updateDate(Date updateDate)
{
    if(updateDate > timeStamp_) { // if updateDate is after timeStamp
        timeStamp_ = updateDate;
    }
}

String
OrderBook::toString() const
{
    String asksStr;
    for(LimitOrderContainer::const_iterator it = asks_.begin();
        it != asks_.end(); ++it) {
        asksStr += it->toString();
        asksStr += " ";
    }
    String bidsStr;
    for(LimitOrderContainer::const_iterator it = bids_.begin();
        it != bids_.end(); ++it) {
        bidsStr += it->toString();
        bidsStr += " ";
    }\
    return "Depth [timestamp: " + timeStamp_.toString() + ", asks=" + asksStr + ", bids=" + bidsStr + "]";
}




