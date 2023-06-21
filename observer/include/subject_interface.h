#pragma once

#include "observer_interface.h"
#include <iterator>
#include <algorithm>

class ISubject {
public:
    ISubject() {};
    ~ISubject() {};

    virtual void Subscribe(int message, IObserver* observer) = 0;
    virtual void UnSubscribe(int message, IObserver* observer) = 0;
    virtual void Notify(int message) = 0;

protected:
    typedef std::vector<IObserver*> ObserverList;
    typedef std::map<int, ObserverList*> ObserverMap;
    ObserverMap mObservers;
};