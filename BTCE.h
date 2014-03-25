#ifndef BTCE_H
#define BTCE_H

#include <BTCETickerWrapper.h>
#include <BTCEDepthWrapper.h>

#include <currencypair.h>

#include <QSet>
typedef QSet<CurrencyPair> CurrencyPairContainer;

class BTCE : public QObject
{
public:
    BTCE();

public slots:
    void sendTickerRequest(const CurrencyPairContainer &pairs,
                           int ignore_invalid = 1) const;

private:
    QString convertCurrencyPairs(const CurrencyPairContainer &pairs) const;

private:

};

#endif // BTCE_H
