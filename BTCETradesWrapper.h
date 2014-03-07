#ifndef BTCETRADESWRAPPER_H
#define BTCETRADESWRAPPER_H

#include "types.h"
#include "BTCETrade.h"

#include <QMap>
#include <QVector>

typedef QVector<BTCETrade> TradesContainer;
typedef QMap<String, TradesContainer> TradesMap;

class BTCETradesWrapper
{
public:
    BTCETradesWrapper(const TradesMap &tradesMap);

    TradesMap getTradesMap() const;
    TradesContainer getTrades(const String& pair) const;

    String toString() const;

private:
    TradesMap tradesMap_;
};

#endif // BTCETRADESWRAPPER_H
