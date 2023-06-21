#include <iostream>

class ModuleB;

class ModuleA {
public:
    ModuleA(const std::string&);
    ~ModuleA();

    void DoJob();
private:
    static void MyCallback(const std::string&);
private:
    ModuleB* my_module;
    std::string my_name;
};