#include "thread_guard.h"

ThreadGuard::ThreadGuard(std::thread& my_thread) : my_thread(my_thread) {}

ThreadGuard::~ThreadGuard() {
    if(my_thread.joinable()) {
        my_thread.join();
    }
}