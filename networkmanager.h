#ifndef NETWORKMANAGER_H
#define NETWORKMANAGER_H

#include <QtNetwork/QNetworkAccessManager>

class NetworkManager
{
public:
    static QNetworkAccessManager& getInstance();
private:
    NetworkManager() = default;
    ~NetworkManager() = delete;
    NetworkManager(const NetworkManager& nm) = delete;
    const NetworkManager& operator=(const NetworkManager& nm) = delete;
};

#endif // NETWORKMANAGER_H
