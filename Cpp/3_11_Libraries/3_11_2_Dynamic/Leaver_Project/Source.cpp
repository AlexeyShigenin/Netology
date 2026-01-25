#include <iostream>
#include <Windows.h>
#include "Leaver_Dynamic.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	Leaver_Dynamic::Leaver user;
	user.leave(name);

	return EXIT_SUCCESS;
}