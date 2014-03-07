#include "BTCEExchangeInfo.h"

BTCEExchangeInfo::BTCEExchangeInfo(const QJsonValue &serverTime, const QJsonValue &pairs)
{
    // TODO
}

long BTCEExchangeInfo::getServerTime() const
{
    return serverTime_;
}

PairMap BTCEExchangeInfo::getPairs() const
{
    return pairs_;
}

String BTCEExchangeInfo::toString() const
{
    // TODO
    return "";
}
