#include <iostream>
#include <Windows.h>
#include "Greeter_Static.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	Greeter_Static::Greeter user;
	user.greet(name);

	return EXIT_SUCCESS;
}