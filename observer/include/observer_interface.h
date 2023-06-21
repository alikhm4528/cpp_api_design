#pragma once

#include <map>
#include <vector>

class IObserver {
public:
    virtual ~IObserver() {};
    virtual void Update(int message) = 0;
};