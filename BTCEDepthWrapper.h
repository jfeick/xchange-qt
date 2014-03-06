#ifndef BTCEDEPTHWRAPPER_H
#define BTCEDEPTHWRAPPER_H

#include "types.h"

#include "BTCEDepth.h"
#include <QMap>

typedef QMap<String, BTCEDepth> DepthMap;

class BTCEDepthWrapper
{
public:
    BTCEDepthWrapper(const DepthMap& resultV3);
    DepthMap getDepthMap() const;
    BTCEDepth getDepth(const String& pair) const;

    String toString() const;

private:
    DepthMap depthMap_;
};

#endif // BTCEDEPTHWRAPPER_H
