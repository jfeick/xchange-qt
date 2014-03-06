#ifndef CACHEDDATASESSION_H
#define CACHEDDATASESSION_H

class CachedDataSession
{
public:
    CachedDataSession();

    virtual long getRefreshRate() const = 0;
};

#endif // CACHEDDATASESSION_H
