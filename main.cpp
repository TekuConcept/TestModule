#include <iostream>
#include "TestSubmodule/Library.h"

int main() {
	int a = 2, b = 3;
	Library::sayHello();
	Library::doMath(a, b);
	Library::sayGoodbye();
	return 0;
}