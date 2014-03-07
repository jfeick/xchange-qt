#ifndef BTCETRADE_H
#define BTCETRADE_H

#include "types.h"
#include <QJsonValue>

class BTCETrade
{
public:
    BTCETrade(const QJsonValue &amount, const QJsonValue &date, const QJsonValue &price,
              const QJsonValue &tid, const QJsonValue &tradeType);

    BigDecimal getAmount() const;
    long getDate() const;
    BigDecimal getPrice() const;
    long getTid() const;
    String getTradeType() const;
    String toString() const;

private:
    BigDecimal amount_;
    long date_;
    BigDecimal price_;
    long tid_;
    String tradeType_;
};

#endif // BTCETRADE_H
