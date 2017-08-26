// Hello World program for Windows.

#include "stdafx.h" // Comment out if not using Windows OS
#include <iostream>
#include <string>

void pause_function();

int main(int argc, char** argv) {

	std::string hw_ = "Hello Big Beautiful World~!";

	std::cout << hw_ << std::endl;

	pause_function();
	return 0;
}

void pause_function() {
	char q_in;
	std::cout << std::endl << "Press 'q' and then Enter to continue: ";
	std::cin >> q_in;
}
