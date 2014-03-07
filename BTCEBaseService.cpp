#include "BTCEBaseService.h"


// TODO: static initialization crashes!

const CurrencyPairContainer BTCEBaseService::currencyPairs_ = {
       CurrencyPair::BTC_USD }; /*
       CurrencyPair::BTC_RUR,
       CurrencyPair::BTC_EUR,
       CurrencyPair::LTC_BTC,
       CurrencyPair::LTC_USD,
       CurrencyPair::LTC_RUR,
       CurrencyPair::LTC_EUR,
       CurrencyPair::NMC_BTC,
       CurrencyPair::NMC_USD,
       CurrencyPair::USD_RUR,
       CurrencyPair::EUR_USD,
       CurrencyPair::EUR_RUR,
       CurrencyPair::NVC_BTC,
       CurrencyPair::NVC_USD,
       CurrencyPair::TRC_BTC,
       CurrencyPair::PPC_BTC,
       CurrencyPair::PPC_USD,
       CurrencyPair::FTC_BTC,
       CurrencyPair::XPM_BTC
   };
   */

BTCEBaseService::BTCEBaseService(const ExchangeSpecification &exchangeSpecification)
    : BTCEBaseService(exchangeSpecification)
{
}

CurrencyPairContainer BTCEBaseService::getExchangeSymbols() const
{
    return currencyPairs_;
}