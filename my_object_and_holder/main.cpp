#include <iostream>
#include <memory>
#include "my_object_holder.h"
#include "my_object.h"

int main() {
    MyObject* object = new MyObject();
    MyObjectHolder holder(object);
    holder.DoJob();
    std::cout << object->GetM() << std::endl;
    return 0;
}