#include <QObject>
#include "BTCEMarketDataServiceRaw.h"

#include <QtCore>

#include <QLoggingCategory>

BTCEMarketDataServiceRaw::BTCEMarketDataServiceRaw(const ExchangeSpecification &exchangeSpecification)
    : BTCEBasePollingService(exchangeSpecification)
{
}

void BTCEMarketDataServiceRaw::startTickerService()
{
    tickerTimer_.setSingleShot(true);
    BTCE_.sendTickerRequest(tickerPairs_);
}

void BTCEMarketDataServiceRaw::sendTickerRequest()
{
    QLoggingCategory plutusMDSR("plutus.MDSR");
    qCDebug(plutusMDSR) << "called sendTickerRequest slot.";
    BTCE_.sendTickerRequest(tickerPairs_);
}
