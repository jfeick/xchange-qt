 #ifndef BTCEACCOUNTINFO_H
#define BTCEACCOUNTINFO_H

#include "types.h"
#include <QJsonValue>
#include <QMap>

class Rights
{
public:
    Rights();
    Rights(const QJsonValue& info, const QJsonValue& trade, const QJsonValue& withdraw);

    bool isInfo() const;
    bool isTrade() const;
    bool isWithdraw() const;
    String toString() const;

private:
    bool info_;
    bool trade_;
    bool withdraw_;
};

class BTCEAccountInfo
{
public:
    BTCEAccountInfo(const QJsonValue& transactionCount, const QJsonValue& openOrders,
                    const QJsonValue& serverTime, const QJsonValue& rights,
                    const QJsonValue& funds);

    int getTransActionCount() const;
    int getOpenOrders() const;
    long getServerTime() const;
    Rights getRights() const;
    QMap<String, BigDecimal> getFunds() const;
    String toString() const;

private:
    int transactionCount_;
    int openOrders_;
    long serverTime_;
    Rights rights_;
    QMap<String, BigDecimal> funds_;
};

#endif // BTCEACCOUNTINFO_H
