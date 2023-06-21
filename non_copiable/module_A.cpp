#include "module_A.h"

class ModuleA::Impl {
public:
    Impl(const std::string& name) {
        mName = name;
    }
    
    void print() {
        std::cout << "Hello " << mName << std::endl;
    }

    std::string mName;
};

ModuleA::ModuleA(const std::string& name) {
    mImpl = new Impl(name);
}

ModuleA::~ModuleA() {
    delete mImpl;
}

void ModuleA::print_password() {
    std::cout << "ali123" << std::endl;
}

void ModuleA::DoJob() {
    mImpl->print();
}