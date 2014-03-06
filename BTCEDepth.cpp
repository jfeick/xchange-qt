#include "BTCEDepth.h"

#include <QJsonObject>
#include <QJsonArray>

BTCEDepth::BTCEDepth(const QJsonValue &asks, const QJsonValue &bids)
{
    // parse asks
    QJsonObject asksObj = asks.toObject();
    QJsonArray asksArray = asksObj["asks"].toArray();
    for(auto it = asksArray.constBegin();
        it != asksArray.constEnd(); ++it) {
        QJsonArray singleAskArray = (*it).toArray();
        QVector<BigDecimal> ask;
        ask.push_back(singleAskArray[0].toDouble()); // single ask, price
        ask.push_back(singleAskArray[1].toDouble()); // single ask, amount
        asks_.push_back(ask);
    }

    // parse bids
    QJsonObject bidsObj = bids.toObject();
    QJsonArray bidsArray = bidsObj["bids"].toArray();
    for(auto it = bidsArray.constBegin();
        it != bidsArray.constEnd(); ++it) {
        QJsonArray singleBidArray = (*it).toArray();
        QVector<BigDecimal> bid;
        bid.push_back(singleBidArray[0].toDouble()); // single bid, price
        bid.push_back(singleBidArray[1].toDouble()); // single bid, amount
        bids_.push_back(bid);
    }
}

AskList BTCEDepth::getAsks() const
{
    return asks_;
}

BidList BTCEDepth::getBids() const
{
    return bids_;
}

String BTCEDepth::toString() const
{
    String output = "BTCEDepth [asks=";
    for(auto AskLine : asks_) {
        output += "[";
        output += QString::number(AskLine[0]);
        output += ",";
        output += QString::number(AskLine[1]);
        output += "],";
    }
    output += " bids=";
    for(auto BidLine : bids_) {
        output += "[";
        output += QString::number(BidLine[0]);
        output += ",";
        output += QString::number(BidLine[1]);
        output += "],";
    }
    output += "]";
    return output;
}
