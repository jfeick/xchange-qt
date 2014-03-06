#ifndef WALLET_H
#define WALLET_H

#include "types.h"

class Wallet
{
public:
    Wallet(String currency, BigDecimal balance);
    Wallet(String currency, BigDecimal balance, String description);

    String getCurrency() const;
    BigDecimal getBalance() const;
    String getDescription() const;
    String toString() const;

    bool operator==(Wallet const& other);
    bool operator!=(Wallet const& other) { return !(*this == other); }

private:
    String currency_;
    BigDecimal balance_;
    String description_;
};

#endif // WALLET_H
