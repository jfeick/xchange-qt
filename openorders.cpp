#include "openorders.h"

OpenOrders::OpenOrders(LimitOrderList openOrders)
    : openOrders_(openOrders)
{}

LimitOrderList
OpenOrders::getOpenOrders() const
{
    return openOrders_;
}

String
OpenOrders::toString() const
{
    String output;
    if(openOrders_.empty()) {
        output = "No open orders!";
    }
    else {
        output = "Open orders: \n";
        for(LimitOrderList::const_iterator it = openOrders_.begin();
            it != openOrders_.end(); ++it) {
            output += "[order=";
            output += it->toString();
            output += "]\n";
        }
    }
    return output;
}
