// CMakeProject1.cpp : Defines the entry point for the application.
//

#include <iostream>
#include "CMakeProject1.h"
#include "test.h"

using std::endl;

int main()
{
	Shit shit;
	std::cout << "Hello CMake, enter something to check if it's swag or not: ";
	std::cin >> shit.someText;
	std::cout << endl << endl;
	DoTest(shit);
	return 0;
}
