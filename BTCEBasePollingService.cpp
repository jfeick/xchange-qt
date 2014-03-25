#include "BTCEBasePollingService.h"

#include "QDateTime"

BTCEBasePollingService::BTCEBasePollingService(const ExchangeSpecification &exchangeSpecification)
    : BTCEBaseService(exchangeSpecification)
{
    qint64 currentMS = QDateTime::currentMSecsSinceEpoch();
    QDateTime startDate(QDate(2013, 01, 01), QTime(0, 0, 0));
    qint64 startDateMS = startDate.toMSecsSinceEpoch();
    lastNonce_ = static_cast<int>((currentMS - startDateMS) / 250L);
}
