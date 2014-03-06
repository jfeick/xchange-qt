#include "trades.h"

Trades::Trades(TradeList trades, Trades::TradeSortType tradeSortType)
    : trades_(trades), lastID_(0L), tradeSortType_(tradeSortType)
{
    switch(tradeSortType) {
        case SortByTimestamp:
            qSort(trades_.begin(), trades_.end(), TradeTimestampComparator());
            break;
        case SortByID:
            qSort(trades_.begin(), trades_.end(), TradeIDComparator());
            break;
        default:
            break;
    }
}

Trades::Trades(TradeList trades, long lastID, Trades::TradeSortType tradeSortType)
    : trades_(trades), lastID_(lastID), tradeSortType_(tradeSortType)
{
    switch(tradeSortType) {
        case SortByTimestamp:
            qSort(trades_.begin(), trades_.end(), TradeTimestampComparator());
            break;
        case SortByID:
            qSort(trades_.begin(), trades_.end(), TradeIDComparator());
            break;
        default:
            break;
    }
}

TradeList Trades::getTrades() const
{
    return trades_;
}

long Trades::getLastID() const
{
    return lastID_;
}

Trades::TradeSortType Trades::getTradeSortType() const
{
    return tradeSortType_;
}

String Trades::toString() const
{
    String output = "Trades\n";

    for(TradeList::const_iterator it = trades_.begin();
        it != trades_.end(); ++it) {
        output.append("[trade");
        output.append(it->toString());
        output.append("]\n");
    }
    return output;
}


