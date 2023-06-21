#include <iostream>
#include "module_a.h"

int main(int argc, char* argv[]) {
    if(argc < 2) {
        exit(-1);
    }
    ModuleA module(argv[1]);
    module.DoJob();
    return 0;
}