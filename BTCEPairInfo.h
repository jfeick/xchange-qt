#ifndef BTCEPAIRINFO_H
#define BTCEPAIRINFO_H

#include "types.h"
#include <QJsonValue>

class BTCEPairInfo
{
public:
    BTCEPairInfo(const QJsonValue &decimals, const QJsonValue &minPrice, const QJsonValue &maxPrice,
                 const QJsonValue &minAmount, const QJsonValue &hidden, const QJsonValue &fee);

    int getDecimals() const;
    BigDecimal getMinPrice() const;
    BigDecimal getMaxPrice() const;
    BigDecimal getMinAmount() const;
    int getHidden() const;
    BigDecimal getFee() const;
    String toString() const;

private:
    int decimals_;
    BigDecimal minPrice_;
    BigDecimal maxPrice_;
    BigDecimal minAmount_;
    int hidden_;
    BigDecimal fee_;
};

#endif // BTCEPAIRINFO_H
