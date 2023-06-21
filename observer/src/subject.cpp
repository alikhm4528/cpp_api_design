#include "subject.h"

Subject::Subject() {}

Subject::~Subject() {
    auto it = mObservers.begin();
    for(it; it != mObservers.end(); it++)
        delete (it->second);
}

void Subject::Subscribe(int message, IObserver* observer) {
    if(mObservers.find(message) == mObservers.end()) {
        mObservers[message] = new ObserverList();
    }
    mObservers[message]->push_back(observer);
}

void Subject::UnSubscribe(int message, IObserver* observer) {
    if(mObservers.find(message) != mObservers.end()) {
        auto it = mObservers[message]->begin();
        bool found = false;
        for(it; it != mObservers[message]->end(); it++) {
            if(*it == observer){
                found = true;
                break;
            }
        }
        if(found)
            mObservers[message]->erase(it);
    }
}

void Subject::Notify(int message) {
    auto it = mObservers[message]->begin();
    for(it; it != mObservers[message]->end(); it++) {
        (*it)->Update(message);
    }
}