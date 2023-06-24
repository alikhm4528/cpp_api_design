#pragma once

#include "subject_interface.h"

class Subject : public ISubject {
public:
    Subject();
    ~Subject();

    enum Messages {ADD, REMOVE};

    void Subscribe(int message, IObserver* observer) override;
    void UnSubscribe(int message, IObserver* observer) override;
    void Notify(int message) override;
};