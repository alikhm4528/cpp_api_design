#include <iostream>
#define private public
#include "module_A.h"
#undef private

int main() {
    ModuleA A("ALI");

    A.DoJob();

    ModuleA B("Erfan");
    
    B.print_password();

    return 0;
}