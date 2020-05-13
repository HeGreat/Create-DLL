#include <iostream>
#include "read.h"
using namespace std;

extern "C" void __stdcall  read()
{
	std::cout << "hello world" << endl;
}
