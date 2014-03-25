#ifndef BTCEBASEPOLLINGSERVICE_H
#define BTCEBASEPOLLINGSERVICE_H

#include <atomic>
#include "exchangespecification.h"
#include "BTCEBaseService.h"

class BTCEBasePollingService : public BTCEBaseService
{
public:
    BTCEBasePollingService(const ExchangeSpecification &exchangeSpecification);

private:
    std::atomic<int>    lastNonce_;
    String              apiKey_;

};

#endif // BTCEBASEPOLLINGSERVICE_H
