#ifndef ACCOUNTINFO_H
#define ACCOUNTINFO_H

#include "wallet.h"

typedef std::list<Wallet>   WalletList;

class AccountInfo
{


public:
    AccountInfo(String username, WalletList wallets);
    AccountInfo(String username, BigDecimal tradingFee, WalletList wallets);
    String getUsername() const;
    WalletList getWallets() const;
    BigDecimal getTradingFee() const;
    BigDecimal getBalance(String currency) const;
    String toString() const;

private:
    String      username_;
    BigDecimal  tradingFee_;
    WalletList  wallets_;
};

#endif // ACCOUNTINFO_H
