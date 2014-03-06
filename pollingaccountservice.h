#ifndef POLLINGACCOUNTSERVICE_H
#define POLLINGACCOUNTSERVICE_H

#include "types.h"

#include "accountinfo.h"

class PollingAccountService
{
public:
    PollingAccountService();
    virtual ~PollingAccountService();

    virtual AccountInfo getAccountInfo() const = 0;
    virtual String withdrawFunds(const String& currency, BigDecimal amount,
                                 const String& address) const = 0;
    virtual String requestDepositAddress(const String& currency) const = 0;
};

#endif // POLLINGACCOUNTSERVICE_H
