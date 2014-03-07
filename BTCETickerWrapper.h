#ifndef BTCETICKERWRAPPER_H
#define BTCETICKERWRAPPER_H

#include "types.h"
#include "BTCETicker.h"

#include <QMap>

typedef QMap<String, BTCETicker> TickerMap;

class BTCETickerWrapper
{
public:
    BTCETickerWrapper(const TickerMap &tickerMap);

    TickerMap getTickerMap() const;
    BTCETicker getTicker(const String &pair) const;
    String toString() const;

private:
    TickerMap tickerMap_;
};

#endif // BTCETICKERWRAPPER_H
