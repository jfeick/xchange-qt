#include "wallet.h"

#include <sstream>

Wallet::Wallet(String currency, BigDecimal balance)
    : currency_(currency), balance_(balance), description_("")
{}

Wallet::Wallet(String currency, BigDecimal balance, String description)
    : currency_(currency), balance_(balance), description_(description)
{}

String
Wallet::getCurrency() const
{
    return currency_;
}

BigDecimal
Wallet::getBalance() const
{
    return balance_;
}

String
Wallet::getDescription() const
{
    return description_;
}

String
Wallet::toString() const
{
    return ("Wallet [currency=" + currency_ + ", balance=" + QString::number(balance_)
            + ", description=" + description_ + "]");
}

bool
Wallet::operator==(Wallet const& other)
{
    if (other.balance_ != balance_) {
        return false;
    }
    if (other.currency_ != currency_) {
        return false;
    }
    if (other.description_ != description_) {
        return false;
    }
    return true;
}
