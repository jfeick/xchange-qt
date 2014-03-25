#include "BTCE.h"

#include <iterator>
#include "networkmanager.h"

BTCE::BTCE()
{
}

QString BTCE::convertCurrencyPairs(const CurrencyPairContainer &pairs) const
{
    QString pairsStr = "";
    for(auto it = pairs.cbegin(); it != pairs.cend(); ++it) {
        pairsStr += it->getBaseCurrency();
        pairsStr += "_";
        pairsStr += it->getCounterCurrency();

        // to add another currency to the list (add delimiter character '-')
        if(std::next(it) != pairs.cend()) {
            pairsStr += "-";
        }
    }
    return pairsStr;
}

void BTCE::sendTickerRequest(const CurrencyPairContainer &pairs, int ignore_invalid) const
{

}
