#ifndef BTCEEXCHANGEINFO_H
#define BTCEEXCHANGEINFO_H

#include "types.h"
#include <QMap>
#include "BTCEPairInfo.h"

typedef QMap<String, BTCEPairInfo> PairMap;

class BTCEExchangeInfo
{
public:
    // TODO: test this ctor!
    BTCEExchangeInfo(const QJsonValue &serverTime, const QJsonValue &pairs);

    long getServerTime() const;
    PairMap getPairs() const;
    String toString() const;

private:
    long serverTime_;
    PairMap pairs_;
};

#endif // BTCEEXCHANGEINFO_H
