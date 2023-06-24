#include "observer.h"
#include "subject.h"
#include <iostream>

int main(int, char **)
{
    Observer observer1("observer1");
    Observer observer2("observer2");
    Observer observer3("observer3");
    Subject subject;
    subject.Subscribe(Subject::ADD, &observer1);
    subject.Subscribe(Subject::ADD, &observer2);
    subject.Subscribe(Subject::REMOVE, &observer2);
    subject.Subscribe(Subject::REMOVE, &observer3);
    subject.Notify(Subject::ADD);
    subject.Notify(Subject::REMOVE);
    return 0;
}