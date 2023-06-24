#include <iostream>
#include <thread>

class Background {
public:
    void operator() () {
        DoSomething();
        DoSomethingElse();
    }
private:
    void DoSomething() {
        std::cout << "do something" << std::endl;
    }
    void DoSomethingElse() {
        std::cout << "do something else" << std::endl;
    }
};

int main() {
    Background task;
    std::thread my_thread(task);
    my_thread.detach();
    // my_thread.join();
    // my_thread.join();
    return 0;
}