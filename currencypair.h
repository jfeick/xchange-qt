#ifndef CURRENCYPAIR_H
#define CURRENCYPAIR_H

#include "types.h"
#include "currencies.h"

class CurrencyPair
{
public:
    CurrencyPair(String baseCurrency);
    CurrencyPair(String baseCurrency, String counterCurrency);
    String toString() const;

public:
    String baseCurrency_;
    String counterCurrency_;

    bool operator==(CurrencyPair const& other) const;
    bool operator!=(CurrencyPair const& other) const { return !(*this == other); };

public:
    // Provide some standard major symbols
    static const CurrencyPair EUR_USD;
    static const CurrencyPair GBP_USD;
    static const CurrencyPair USD_JPY;
    static const CurrencyPair JPY_USD;
    static const CurrencyPair USD_CHF;
    static const CurrencyPair USD_AUD;
    static const CurrencyPair USD_CAD;
    static const CurrencyPair USD_RUR;
    static const CurrencyPair EUR_RUR;
    static const CurrencyPair USD_XRP;
    static const CurrencyPair EUR_XRP;
    static const CurrencyPair USD_XVN;
    static const CurrencyPair EUR_XVN;
    static const CurrencyPair KRW_XRP;

    // Provide some courtesy BTC major symbols
    static const CurrencyPair BTC_USD;
    static const CurrencyPair BTC_GBP;
    static const CurrencyPair BTC_EUR;
    static const CurrencyPair BTC_JPY;
    static const CurrencyPair BTC_CHF;
    static const CurrencyPair BTC_AUD;
    static const CurrencyPair BTC_CAD;
    static const CurrencyPair BTC_CNY;
    static const CurrencyPair BTC_DKK;
    static const CurrencyPair BTC_HKD;
    static const CurrencyPair BTC_NZD;
    static const CurrencyPair BTC_PLN;
    static const CurrencyPair BTC_RUB;
    static const CurrencyPair BTC_SEK;
    static const CurrencyPair BTC_SGD;
    static const CurrencyPair BTC_NOK;
    static const CurrencyPair BTC_THB;
    static const CurrencyPair BTC_RUR;
    static const CurrencyPair BTC_ZAR;
    static const CurrencyPair BTC_BRL;
    static const CurrencyPair BTC_CZK;
    static const CurrencyPair BTC_ILS;
    static const CurrencyPair BTC_KRW;
    static const CurrencyPair BTC_LTC;
    static const CurrencyPair BTC_XRP;
    static const CurrencyPair BTC_NMC;
    static const CurrencyPair BTC_XVN;

    static const CurrencyPair XDC_BTC;

    static const CurrencyPair LTC_USD;
    static const CurrencyPair LTC_KRW;
    static const CurrencyPair LTC_CNY;
    static const CurrencyPair LTC_RUR;
    static const CurrencyPair LTC_EUR;
    static const CurrencyPair LTC_BTC;
    static const CurrencyPair LTC_XRP;

    static const CurrencyPair NMC_USD;
    static const CurrencyPair NMC_CNY;
    static const CurrencyPair NMC_EUR;
    static const CurrencyPair NMC_KRW;
    static const CurrencyPair NMC_BTC;
    static const CurrencyPair NMC_LTC;
    static const CurrencyPair NMC_XRP;

    static const CurrencyPair NVC_USD;
    static const CurrencyPair NVC_BTC;

    static const CurrencyPair TRC_BTC;

    static const CurrencyPair PPC_USD;
    static const CurrencyPair PPC_BTC;
    static const CurrencyPair PPC_LTC;

    static const CurrencyPair FTC_USD;
    static const CurrencyPair FTC_CNY;
    static const CurrencyPair FTC_BTC;
    static const CurrencyPair FTC_LTC;

    static const CurrencyPair XPM_USD;
    static const CurrencyPair XPM_CNY;
    static const CurrencyPair XPM_BTC;
    static const CurrencyPair XPM_LTC;
    static const CurrencyPair XPM_PPC;

    static const CurrencyPair XVN_XRP;

    // not real currencies, but tradable commodities (GH/s)
    static const CurrencyPair GHs_BTC;
    static const CurrencyPair GHs_NMC;

    static const CurrencyPair CNC_BTC;

    static const CurrencyPair WDC_BTC;

    static const CurrencyPair DVC_BTC;

};



#endif // CURRENCYPAIR_H
