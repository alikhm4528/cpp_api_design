#include "module_b.h"

void ModuleB::SetCallback(callback_type cb) {
    m_callback = cb;
}

void ModuleB::DoJob(const std::string& name) {
    (*m_callback)(name);
}