#ifndef BTCEACCOUNTINFORETURN_H
#define BTCEACCOUNTINFORETURN_H

#include "BTCEAccountInfo.h"
#include "BTCEReturn.h"

class BTCEAccountInfoReturn : public BTCEReturn<BTCEAccountInfo>
{
public:
    BTCEAccountInfoReturn(const QJsonValue& success, const BTCEAccountInfo& value,
                          const QJsonValue& error)
        : BTCEReturn<BTCEAccountInfo>(success, value, error)
    {}
};

#endif // BTCEACCOUNTINFORETURN_H
