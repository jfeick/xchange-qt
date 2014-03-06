#ifndef BTCERETURN_H
#define BTCERETURN_H

#include "types.h"
#include <QJsonValue>

template <typename V>
class BTCEReturn {
public:
    BTCEReturn(const QJsonValue &success, const V& returnValue, const QJsonValue& error);

    bool isSuccess() const;
    String getError() const;
    V getReturnValue() const;
    String toString() const;

private:
    bool success_;
    V returnValue_;
    String error_;
};

template <typename V>
BTCEReturn<V>::BTCEReturn(const QJsonValue &success, const V& returnValue,
                       const QJsonValue& error)
    : success_(success.toBool()), returnValue_(returnValue), error_(error.toString())
{}

template <typename V>
bool BTCEReturn<V>::isSuccess() const
{
    return success_;
}

template <typename V>
String BTCEReturn<V>::getError() const
{
    return error_;
}

template <typename V>
V BTCEReturn<V>::getReturnValue() const
{
    return returnValue_;
}

template <typename V>
String BTCEReturn<V>::toString() const
{
    if(success_) {
        return "BTCEReturn[OK: " + returnValue_.toString() + "]";
    }
    else {
        return "BTCEReturn[error: " + error_ + "]";
    }
}


#endif // BTCERETURN_H
