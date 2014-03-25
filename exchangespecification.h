#ifndef EXCHANGESPECIFICATION_H
#define EXCHANGESPECIFICATION_H

#include "types.h"

#include <QMap>
#include <QVariant>
#include <typeinfo>

class ExchangeSpecification
{
public:
    ExchangeSpecification(String exchangeClassName);
    /*template <typename T> ExchangeSpecification(const T& exchangeClass) {
        exchangeClassName_ = typeid(exchangeClass).name();
    }*/

    String getExchangeClassName() const;
    QVariant getParameter(String key) const;
    String getHost() const;
    void setHost(const String& host);
    String getApiKey() const;
    void setApiKey(const String& apiKey);
    unsigned short getPort() const;
    void setPort(unsigned short port);
    String getSecretKey() const;
    void setSecretKey(const String& secretKey);
    String getSslUri() const;
    void setSslUri(const String& uri);
    String getPlainTextUri() const;
    void setPlainTextUri(const String& uri);
    String getPlainTextUriStreaming() const;
    void setPlainTextUriStreaming(const String& uri);
    String getSslUriStreaming() const;
    void setSslUriStreaming(const String& uri);
    QMap<String, QVariant> getExchangeSpecificParameters() const;
    void setExchangeSpecificParameters(const QMap<String, QVariant>& exchangeSpecificParameters);
    String getPassword() const;
    void setPassword(const String& password);
    String getUserName() const;
    void setUserName(const String& username);
    String getExchangeName() const;
    void setExchangeName(const String& exchangeName);
    String getExchangeDescription() const;
    void setExchangeDescription(const String& exchangeDescription);

private:
    String exchangeName_;
    String exchangeDescription_;
    String username_;
    String password_;
    String secretKey_;
    String apiKey_;
    String sslUri_;
    String plainTextUri_;
    String sslUriStreaming_;
    String plainTextUriStreaming_;
    String host_;
    unsigned short port_;
    String exchangeClassName_;
    QMap<String, QVariant> exchangeSpecificParameters_;
};

#endif // EXCHANGESPECIFICATION_H
