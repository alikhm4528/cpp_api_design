#include <iostream>

void redundant(int a) {

}

#define private public
#include "main.h"
#undef private

int main() {
	Foo foo(11);
	foo.a = 10;
    return 0;
}
