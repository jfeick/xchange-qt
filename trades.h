#ifndef TRADES_H
#define TRADES_H

#include "types.h"
#include "trade.h"

typedef QList<Trade> TradeList;

class Trades
{
public:
    enum TradeSortType { SortByTimestamp, SortByID };

public:
    Trades(TradeList trades, TradeSortType tradeSortType);
    Trades(TradeList trades, long lastID, TradeSortType tradeSortType);

    TradeList getTrades() const;
    long getLastID() const;
    TradeSortType getTradeSortType() const;

    String toString() const;

private:
    TradeList       trades_;
    long            lastID_;
    TradeSortType   tradeSortType_;
};

class TradeTimestampComparator {
public:
    bool operator()(const Trade& lhs, const Trade& rhs ) const
    {
        return lhs.getTimestamp() < rhs.getTimestamp();
    }
};

class TradeIDComparator {
public:
    bool operator()(const Trade& lhs, const Trade& rhs ) const
    {
        return lhs.getId().compare(rhs.getId());
    }
};

#endif // TRADES_H
