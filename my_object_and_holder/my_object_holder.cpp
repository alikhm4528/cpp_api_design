#include "my_object_holder.h"
#include "my_object.h"

MyObjectHolder::MyObjectHolder(MyObject* my_object)
    :my_object_(my_object) {}

MyObject* MyObjectHolder::GetMyObject() {
    return my_object_;
}

void MyObjectHolder::DoJob() {
    my_object_->SetM(10);
}