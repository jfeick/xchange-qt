#ifndef BTCEDEPTH_H
#define BTCEDEPTH_H

#include "types.h"
#include <QVector>

typedef QVector<QVector<BigDecimal>> AskList;
typedef QVector<QVector<BigDecimal>> BidList;

class BTCEDepth
{
public:
    BTCEDepth();
    BTCEDepth(const QJsonValue& asks, const QJsonValue& bids);
    AskList getAsks() const;
    BidList getBids() const;

    String toString() const;

private:
    AskList     asks_;
    BidList     bids_;
};

#endif // BTCEDEPTH_H
