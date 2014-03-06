#include "accountinfo.h"

#include "types.h"
#include <iterator>

AccountInfo::AccountInfo(String username, WalletList wallets)
    : username_(username), tradingFee_(0.0), wallets_(wallets)
{}

AccountInfo::AccountInfo(String username, BigDecimal tradingFee, WalletList wallets)
    : username_(username), tradingFee_(tradingFee), wallets_(wallets)
{}

String
AccountInfo::getUsername() const
{
    return username_;
}

WalletList
AccountInfo::getWallets() const
{
    return wallets_;
}

BigDecimal
AccountInfo::getTradingFee() const
{
    return tradingFee_;
}

BigDecimal
AccountInfo::getBalance(String currency) const
{
    for(WalletList::const_iterator it = wallets_.begin();
        it != wallets_.end(); ++it) {
        if(it->getCurrency() == currency) {
            return it->getBalance();
        }
    }
    // Not found so treat as zero
    return 0.0;
}

String
AccountInfo::toString() const
{
    String walletStr = "[";
    for(WalletList::const_iterator it = wallets_.begin();
        it != wallets_.end(); ++it) {
        walletStr += it->toString();
        walletStr += " ";
    }
    walletStr += "]";
    return "AccountInfo [username=" + username_ + ", wallets=" + walletStr + "]";
}
