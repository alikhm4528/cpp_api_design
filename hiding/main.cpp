#include <iostream>
#include <thread>

void func(int n) {
    while(n) {
        n--;
        std::cout << "Here " << n << std::endl;
    }
}

void launch_thread() {
    std::thread my_thread(func, 100000000);

    // std::this_thread::sleep_for(std::chrono::milliseconds(500));
    my_thread.detach();
}

int main() {
    launch_thread();

    std::cout << "Hello World" << std::endl;
    std::this_thread::sleep_for(std::chrono::seconds(10));
    return 0;
}