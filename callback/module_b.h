#include <iostream>

class ModuleB {
public:
    typedef void (*callback_type)(const std::string&);
    void SetCallback(callback_type);

    void DoJob(const std::string&);
private:
    callback_type m_callback;
};