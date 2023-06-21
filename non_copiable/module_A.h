#include <iostream>

class ModuleA {
public:
    explicit ModuleA(const std::string&);
    ~ModuleA();

    void DoJob();
private:
    ModuleA(const ModuleA&);
    const ModuleA& operator =(const ModuleA&);

    void print_password();
    
    class Impl;
    Impl *mImpl;
};