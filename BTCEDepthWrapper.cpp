#include "BTCEDepthWrapper.h"

#include <QJsonValue>

BTCEDepthWrapper::BTCEDepthWrapper(const DepthMap &resultV3)
    : depthMap_(resultV3)
{}

DepthMap BTCEDepthWrapper::getDepthMap() const
{
    return depthMap_;
}

BTCEDepth BTCEDepthWrapper::getDepth(const String &pair) const
{
    BTCEDepth result;
    if(depthMap_.contains(pair)) {
        result = depthMap_.value(pair);
    }
    return result;
}

String BTCEDepthWrapper::toString() const
{
    String output = "BTCEDepthV3 [map=";
    for(const auto &depth : depthMap_) {
        output += depth.toString();
        output += " ";
    }
    output += "]";
    return output;
}
