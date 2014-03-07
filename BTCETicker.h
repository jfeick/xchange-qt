#ifndef BTCETICKER_H
#define BTCETICKER_H

#include "types.h"
#include <QJsonValue>

class BTCETicker
{
public:
    BTCETicker();
    BTCETicker(const QJsonValue &last, const QJsonValue &high, const QJsonValue &low,
               const QJsonValue &avg, const QJsonValue &buy, const QJsonValue &sell,
               const QJsonValue &vol, const QJsonValue &volCur, const QJsonValue &updated);

    BigDecimal getLast() const;
    BigDecimal getHigh() const;
    BigDecimal getLow() const;
    BigDecimal getAvg() const;
    BigDecimal getBuy() const;
    BigDecimal getSell() const;
    BigDecimal getVol() const;
    BigDecimal getVolCur() const;
    long getUpdated() const;

    String toString() const;

private:
    BigDecimal last_;
    BigDecimal high_;
    BigDecimal low_;
    BigDecimal avg_;
    BigDecimal buy_;
    BigDecimal sell_;
    BigDecimal vol_;
    BigDecimal volCur_;
    long updated_;
};

#endif // BTCETICKER_H
