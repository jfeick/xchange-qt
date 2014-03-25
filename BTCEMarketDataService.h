#ifndef BTCEMARKETDATASERVICE_H
#define BTCEMARKETDATASERVICE_H

#include "BTCEMarketDataServiceRaw.h"
#include "pollingmarketdataservice.h"

class BTCEMarketDataService : public BTCEMarketDataServiceRaw
{
public:
    BTCEMarketDataService(const ExchangeSpecification &exchangeSpecification);

private:

};

#endif // BTCEMARKETDATASERVICE_H
