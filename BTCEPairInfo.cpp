#include "BTCEPairInfo.h"

BTCEPairInfo::BTCEPairInfo(const QJsonValue &decimals, const QJsonValue &minPrice,
                           const QJsonValue &maxPrice, const QJsonValue &minAmount,
                           const QJsonValue &hidden, const QJsonValue &fee)
    : decimals_(decimals.toInt()), minPrice_(minPrice.toDouble()), maxPrice_(maxPrice.toDouble()),
      minAmount_(minAmount.toDouble()), hidden_(hidden.toInt()), fee_(fee.toDouble())
{}

int BTCEPairInfo::getDecimals() const
{
    return decimals_;
}

BigDecimal BTCEPairInfo::getMinPrice() const
{
    return minPrice_;
}

BigDecimal BTCEPairInfo::getMaxPrice() const
{
    return maxPrice_;
}

BigDecimal BTCEPairInfo::getMinAmount() const
{
    return minAmount_;
}

int BTCEPairInfo::getHidden() const
{
    return hidden_;
}

BigDecimal BTCEPairInfo::getFee() const
{
    return fee_;
}

String BTCEPairInfo::toString() const
{
    return "BTCEPairInfo [decimals=" + QString::number(decimals_)
            + ", minPrice=" + QString::number(minPrice_)
            + ", maxPrice=" + QString::number(maxPrice_)
            + ", minAmount=" + QString::number(minAmount_)
            + ", hidden=" + QString::number(hidden_)
            + ", fee=" + QString::number(fee_)
            + "]";
}
