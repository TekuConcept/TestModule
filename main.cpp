#include <iostream>
#include "TestSubmodule/Library.h"

int main() {
	Library::sayHello();
	Library::doMath();
	Library::sayGoodbye();
	return 0;
}