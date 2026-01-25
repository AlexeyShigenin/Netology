#include <iostream>
#include <string>
#include <Windows.h>

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << "!" << std::endl;

	return EXIT_SUCCESS;
}