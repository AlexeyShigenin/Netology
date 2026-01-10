/*
Задача 1. Простое исключение
В этом задании вы попробуете выбросить и обработать исключение.
Создайте функцию int function(std::string str, int forbidden_length).
Эта функция должна возвращать длину переданной строки, если эта длина не равна значению переданного параметра forbidden_length.
В противном случае она должна выбрасывать исключение bad_length.

Для проверки функции организуйте работу с пользователем. В начале задайте запретную длину,
а затем считывайте пользовательские строки и выводите их длину до тех пор, пока пользователь не введёт строку запретной длины.
После этого сообщите ему, что он ввёл строку запретной длины, и завершите программу.

Пример работы программы
Консоль
Введите запретную длину: 5
Введите слово: Привет
Длина слова "Привет" равна 6
Введите слово: мир
Длина слова "мир" равна 3
Введите слово: пирог
Вы ввели слово запретной длины! До свидания
*/

#include<iostream>
#include<Windows.h>

// Создаем класс исключения bad_length наследник от класса std::exception
class bad_length : public std::exception {
public:
	
	// переопределяем виртуальный метод char* what(), вызвав который, можно будет получить текстовое описание ошибки
	const char* what() const override {
		return "Вы ввели слово запретной длины! До свидания";
	}
};

int function(std::string str, int forbidden_length) {

	if (str.length() == forbidden_length) {
		// Если длина строки str равна forbidden_length - выбрасываем исключение
		throw bad_length();
	}
	// Если длина строки str НЕ равна forbidden_length - возвращаем длину строки
	return str.length();
}

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int inputForbiddenLength;
	std::string inputString;

	std::cout << "Введите запретную длину: ";
	std::cin >> inputForbiddenLength;

	// В бесконечном цикле получаем от пользователя слово, обрабатываем и возвращаем ответ
	while (true) {
		std::cout << "Введите слово: ";
		std::cin >> inputString;

		// В этом блоке кода ждем исключение
		try {
			int result = function(inputString, inputForbiddenLength);
			std::cout << "Длина слова \"" << inputString << "\" равна " << result << std::endl;
		}
		// В этом блоке кода обрабатывем исключения
		catch (const bad_length& except) {
			std::cout << except.what() << std::endl;
			return EXIT_SUCCESS;
		}
	}
	return EXIT_SUCCESS;
}