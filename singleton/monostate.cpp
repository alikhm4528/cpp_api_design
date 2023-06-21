#include "monostate.h"

static int value_ = 0;

int Monostate::GetValue() const {
    return value_;
}

void Monostate::SetValue(int value) {
    value_ = value;
}