#pragma once

#include "observer_interface.h"
#include <iostream>

class Observer : public IObserver {
public:
    explicit Observer(const std::string &str) : mName(str) {}

    void Update(int message) override {
        std::cout << mName << " Received message ";
        std::cout << message << std::endl;
    }
private:
    std::string mName;
};