#ifndef BTCEMARKETDATASERVICERAW_H
#define BTCEMARKETDATASERVICERAW_H

#include <QObject>
#include "BTCEBasePollingService.h"
#include "BTCETickerWrapper.h"
#include "BTCE.h"
#include "pollingmarketdataservice.h"
#include <QTimer>

class BTCEMarketDataServiceRaw : public QObject, public BTCEBasePollingService, public PollingMarketDataService
{
    Q_OBJECT
public:
    BTCEMarketDataServiceRaw(const ExchangeSpecification &exchangeSpecification);

    virtual void startTickerService();
    //virtual void stopTickerService();

public slots:
    void sendTickerRequest();

private:
    BTCE                BTCE_; // network handling class
    BTCETickerWrapper   BTCETickerWrapper_;
};

#endif // BTCEMARKETDATASERVICERAW_H
