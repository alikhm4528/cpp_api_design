#include "singleton.h"

Singleton& Singleton::GetInstance() {
    static Singleton instance;
    return instance;
}

Singleton::Singleton() {

}

Singleton::~Singleton() {
    
}