#include <thread>

class ThreadGuard {
public:
    explicit ThreadGuard(std::thread& my_thread);
    ~ThreadGuard();
    ThreadGuard(const ThreadGuard&) = delete;
    const ThreadGuard& operator =(const ThreadGuard&) = delete;
private:
    std::thread& my_thread;
};