#include <iostream>
#include "thread_guard.h"

void f() {
    for(int i = 0; i < 50; i++) {
        std::cout << "f : " << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
        std::cout << std::this_thread::get_id() << std::endl;
    } 
}

int main() {
    std::cout << std::thread::hardware_concurrency() << std::endl;
    std::thread my_thread(f);
    my_thread.detach();
    // ThreadGuard thread_guard(my_thread);
    try {    
        for(int i = 0; i < 50; i++) {
            std::cout << "main_thread : " << std::endl;
            std::this_thread::sleep_for(std::chrono::milliseconds(100));
            if(i >= 10)
                throw std::runtime_error("Error");
        }
    } catch(std::runtime_error e) {
        // my_thread.join();
        std::cout << "HERE" << std::endl;
        std::cout << e.what() << std::endl;
    }
    return 0;
}