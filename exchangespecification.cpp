#include "exchangespecification.h"

ExchangeSpecification::ExchangeSpecification(String exchangeClassName)
    : exchangeClassName_(exchangeClassName)
{
}

String
ExchangeSpecification::getExchangeClassName() const
{
    return exchangeClassName_;
}

QVariant ExchangeSpecification::getParameter(String key) const
{
    return exchangeSpecificParameters_.value(key);
}

String ExchangeSpecification::getHost() const
{
    return host_;
}

void ExchangeSpecification::setHost(const String& host)
{
    host_ = host;
}

String ExchangeSpecification::getApiKey() const
{
    return apiKey_;
}

void ExchangeSpecification::setApiKey(const String &apiKey)
{
    apiKey_ = apiKey;
}

unsigned short ExchangeSpecification::getPort() const
{
    return port_;
}

void ExchangeSpecification::setPort(unsigned short port)
{
    port_ = port;
}

String ExchangeSpecification::getSecretKey() const
{
    return secretKey_;
}

void ExchangeSpecification::setSecretKey(const String &secretKey)
{
    secretKey_ = secretKey;
}

String ExchangeSpecification::getSslUri() const
{
    return sslUri_;
}

void ExchangeSpecification::setSslUri(const String &uri)
{
    sslUri_ = uri;
}

String ExchangeSpecification::getPlainTextUri() const
{
    return plainTextUri_;
}

void ExchangeSpecification::setPlainTextUri(const String &uri)
{
    plainTextUri_ = uri;
}

String ExchangeSpecification::getPlainTextUriStreaming() const
{
    return plainTextUriStreaming_;
}

void ExchangeSpecification::setPlainTextUriStreaming(const String &uri)
{
    plainTextUriStreaming_ = uri;
}

String ExchangeSpecification::getSslUriStreaming() const
{
    return sslUriStreaming_;
}

void ExchangeSpecification::setSslUriStreaming(const String &uri)
{
    sslUriStreaming_ = uri;
}

QMap<String, QVariant> ExchangeSpecification::getExchangeSpecificParameters() const
{
    return exchangeSpecificParameters_;
}

void ExchangeSpecification::setExchangeSpecificParameters(const QMap<String, QVariant> &exchangeSpecificParameters)
{
    exchangeSpecificParameters_ = exchangeSpecificParameters;
}

String ExchangeSpecification::getPassword() const
{
    return password_;
}

void ExchangeSpecification::setPassword(const String &password)
{
    password_ = password;
}

String ExchangeSpecification::getUserName() const
{
    return username_;
}

void ExchangeSpecification::setUserName(const String &username)
{
    username_ = username;
}

String ExchangeSpecification::getExchangeName() const
{
    return exchangeName_;
}

void ExchangeSpecification::setExchangeName(const String &exchangeName)
{
    exchangeName_ = exchangeName;
}

String ExchangeSpecification::getExchangeDescription() const
{
    return exchangeDescription_;
}

void ExchangeSpecification::setExchangeDescription(const String &exchangeDescription)
{
    exchangeDescription_ = exchangeDescription;
}
