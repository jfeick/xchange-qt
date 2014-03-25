#include <QCoreApplication>

#include "BTCEExchange.h"
#include "pollingmarketdataservice.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Exchange* btce = new BTCEExchange;
    btce->applySpecification(btce->getDefaultExchangeSpecification());
    PollingMarketDataService* PMDS = btce->getPollingMarketDataService();
    PMDS->setTickerUpdateInterval(10000);
    PMDS->startTickerService();

    return a.exec();
}
