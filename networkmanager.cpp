#include "networkmanager.h"

QNetworkAccessManager& NetworkManager::getInstance()
{
    static QNetworkAccessManager instance;
    return instance;
}
