#include "BTCETicker.h"

BTCETicker::BTCETicker()
{}

BTCETicker::BTCETicker(const QJsonValue &last, const QJsonValue &high, const QJsonValue &low,
                       const QJsonValue &avg, const QJsonValue &buy, const QJsonValue &sell,
                       const QJsonValue &vol, const QJsonValue &volCur, const QJsonValue &updated)
    : last_(last.toDouble()), high_(high.toDouble()), low_(low.toDouble()),
      avg_(avg.toDouble()), buy_(buy.toDouble()), sell_(sell.toDouble()),
      vol_(vol.toDouble()), volCur_(volCur.toDouble()), updated_(updated.toInt())
{}

BigDecimal BTCETicker::getLast() const
{
    return last_;
}

BigDecimal BTCETicker::getHigh() const
{
    return high_;
}

BigDecimal BTCETicker::getLow() const
{
    return low_;
}

BigDecimal BTCETicker::getAvg() const
{
    return avg_;
}

BigDecimal BTCETicker::getBuy() const
{
    return buy_;
}

BigDecimal BTCETicker::getSell() const
{
    return sell_;
}

BigDecimal BTCETicker::getVol() const
{
    return vol_;
}

BigDecimal BTCETicker::getVolCur() const
{
    return volCur_;
}

long BTCETicker::getUpdated() const
{
    return updated_;
}

String BTCETicker::toString() const
{
    return "BTCETickerObject [last=" + QString::number(last_)
            + ", high=" + QString::number(high_)
            + ", low=" + QString::number(low_)
            + ", avg=" + QString::number(avg_)
            + ", buy=" + QString::number(buy_)
            + ", sell=" + QString::number(sell_)
            + ", updated=" + QString::number(updated_)
            + ", vol=" + QString::number(vol_)
            + ", volCur=" + QString::number(volCur_)
            + "]";
}
