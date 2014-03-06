#include "BTCEAccountInfo.h"

#include <QJsonObject>
#include <QVariantMap>

Rights::Rights()
    : info_(false), trade_(false), withdraw_(false)
{}

Rights::Rights(const QJsonValue &info, const QJsonValue &trade, const QJsonValue &withdraw)
    : info_(info.toBool()), trade_(trade.toBool()), withdraw_(withdraw.toBool())
{}

bool Rights::isInfo() const
{
    return info_;
}

bool Rights::isTrade() const
{
    return trade_;
}

bool Rights::isWithdraw() const
{
    return withdraw_;
}

String Rights::toString() const
{
    return "Rights["
           "info={" + QString::number(info_) + "}, "
           "trade={" + QString::number(trade_) + "}, "
           "withdraw={" + QString::number(withdraw_) + "}]";
}



BTCEAccountInfo::BTCEAccountInfo(const QJsonValue &transactionCount, const QJsonValue &openOrders, const QJsonValue &serverTime, const QJsonValue &rights, const QJsonValue &funds)
    : transactionCount_(transactionCount.toInt()), openOrders_(openOrders.toInt()),
      serverTime_(serverTime.toInt()), rights_(), funds_()
{
    // Parse rights
    QJsonObject rightsObj = rights.toObject();
    rights_ = Rights(rightsObj["info"].toBool(), rightsObj["trade"].toBool(), rightsObj["withdraw"].toBool());
    // Parse funds
    QJsonObject fundsObj = funds.toObject();
    QVariantMap fundsMap = fundsObj.toVariantMap();
    for(QVariantMap::const_iterator it = fundsMap.begin();
        it != fundsMap.end(); ++it) {
        QVariant value = it.value();
        funds_.insert(it.key(), value.toDouble());
    }
}

int BTCEAccountInfo::getTransActionCount() const
{
    return transactionCount_;
}

int BTCEAccountInfo::getOpenOrders() const
{
    return openOrders_;
}

long BTCEAccountInfo::getServerTime() const
{
    return serverTime_;
}

Rights BTCEAccountInfo::getRights() const
{
    return rights_;
}

QMap<String, BigDecimal> BTCEAccountInfo::getFunds() const
{
    return funds_;
}

String BTCEAccountInfo::toString() const
{
    String fundsStr = "funds=[";
    for(auto it = funds_.begin(); it != funds_.end(); ++it) {
        fundsStr += it.key();
        fundsStr += ":";
        fundsStr += QString::number(it.value());
        fundsStr += " ";
    }
    fundsStr += "]";

    return "BTCEAccountInfo"
           "[transactionCount=" + QString::number(transactionCount_)
           + "openOrders=" + QString::number(openOrders_)
           + "serverTime=" + QString::number(serverTime_)
           + "rights=" + rights_.toString()
           + "funds=" + fundsStr;
}
