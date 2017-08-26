// Hello World for Windows.

#include "stdafx.h" // comment out if not running on the Windows OS.
#include <iostream>
#include <string>

void pause_function();

int main(int argc, char** argv) {

	std::string hw_ = "Hello World~!";

	std::cout << hw_ << std::endl;

	pause_function();
	return 0;
}

void pause_function() {
	char q_in;
	std::cout << std::endl << "press 'q' and then Enter to continue: ";
	std::cin >> q_in;
}
