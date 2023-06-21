#include "module_a.h"
#include "module_b.h"

ModuleA::ModuleA(const std::string& name) : my_name(name) {
    my_module = new ModuleB();
    my_module->SetCallback(&MyCallback);
}
ModuleA::~ModuleA() {
    delete my_module;
}

void ModuleA::MyCallback(const std::string& name) {
    std::cout << "Hello " << name << std::endl;
}

void ModuleA::DoJob() {
    my_module->DoJob(my_name);
}