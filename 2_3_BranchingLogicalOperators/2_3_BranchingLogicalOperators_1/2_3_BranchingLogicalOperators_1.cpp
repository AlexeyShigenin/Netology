/*
Напишите программу, которая выводит таблицу истинности для логических операторов ||, &&, с применением логических выражений.
*/

#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");										// Настройка локали для поддержка вывода кирилицы в консоль
	
	std::cout << std::boolalpha;									// Ключ вывода bool в виде true/false, а не 1/0
	
	std::cout << "Оператор: ||" << std::endl;
	bool a{}, b{};
	std::cout << a << '\t' << b << '\t' << (a || b) << std::endl;	// false || false
	b = true;
	std::cout << a << '\t' << b << '\t' << (a || b) << std::endl;	// false || true
	a = true;
	std::cout << a << '\t' << b << '\t' << (a || b) << std::endl;	// true || true
	b = false;
	std::cout << a << '\t' << b << '\t' << (a || b) << std::endl;	// true || false
		
	std::cout << "\nОператор: &&" << std::endl;
	a = false;
	std::cout << a << '\t' << b << '\t' << (a && b) << std::endl;	// false && false
	b = true;
	std::cout << a << '\t' << b << '\t' << (a && b) << std::endl;	// false && true
	a = true;
	std::cout << a << '\t' << b << '\t' << (a && b) << std::endl;	// true && true
	b = false;
	std::cout << a << '\t' << b << '\t' << (a && b) << std::endl;	// true && false
}
