/*
Задача 2. Сортируем адреса
В этом задании вы будете читать из файла адреса и выводить их в другой файл в другом формате, отсортированными по названию города.
Вам дан файл in.txt, в котором находится N адресов. Число N идёт первым в файле.
После числа N располагаются N блоков по 4 строки в каждом.
Каждый блок состоит из следующих строк: название города, название улицы, номер дома, номер квартиры.

Задача программы заключается в том, чтобы считать адреса из файла in.txt,
отсортировать их по названию города и вывести отсортированный список адресов в файл out.txt в другом формате.
Не забудьте вывести количество адресов в начале.

Города должны быть отсортированы в алфавитном порядке.

Формат вывода адреса: <название города>, <название улицы>, <номер дома>, <номер квартиры>.

Пример работы программы

in.txt
5
Москва
Строителей
34
12
Новокузнецк
Науки
5
16
Омск
Пушкина
2
13
Москва
Арбат
4
1
Новосибирск
Мира
85
64

out.txt
5
Москва, Строителей, 34, 12
Москва, Арбат, 4, 1
Новокузнецк, Науки, 5, 16
Новосибирск, Мира, 85, 64
Омск, Пушкина, 2, 13
*/

#include <iostream>
#include <string>
#include <fstream>

class Address
{
private:											// Приватные поля
	std::string city;
	std::string street;
	int house;
	int flat;

public:
													// Конструктор класса с полями
	Address(std::string city, std::string street, int house, int flat) {
		this->city = city;
		this->street = street;
		this->house = house;
		this->flat = flat;
	}

	std::string getOutputAddress() {				// Метод объединения адреса в одну строку
		return city + ", " + street + ", " + std::to_string(house) + ", " + std::to_string(flat);
	}

	std::string getCity() {							// Метод получения названия города из приватного поля (геттер)
		return city;
	}
};

void sort(Address** address_arr, int size) {		// Функция сортировки пузырьком
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
													// Сравниваем города двух соседних адресов
			if ((*address_arr[j]).getCity() > (*address_arr[j + 1]).getCity()) {
													// Меняем указатели местами
				Address* temp = address_arr[j];
				address_arr[j] = address_arr[j + 1];
				address_arr[j + 1] = temp;
			}
		}
	}
}

int main(int argc, char** argv)
{
	int size{};										// Переменная для хранения размера массива
	std::string inputCity, inputStreet;				// Переменные для хранения данных, прочитанных из файла
	int inputHouse, inputFlat;						// Переменные для хранения данных, прочитанных из файла

	std::ifstream file_in("in.txt");				// Открываем для чтения файл in.txt
	if (!file_in.is_open()) {
		std::cerr << "Ошибка открытия файла in.txt!" << std::endl;
		return EXIT_FAILURE;
	}

	std::ofstream file_out("out.txt");				// Открываем для записи (создаем) файл out.txt
	if (!file_out.is_open()) {
		std::cerr << "Ошибка открытия (создания) файла out.txt!" << std::endl;
		return EXIT_FAILURE;
	}

	file_in >> size;								// Читаем первое слово из файла и записываем его в переменную size
	Address** address_arr = new Address* [size];	// Создаем динамический массив указателей на Address - Address** address_arr размером size

	for (int i = 0; i < size; i++) {				// Читаем по одному слову из файла и заносим данные в сответствующие переменные
		file_in >> inputCity;
		file_in >> inputStreet;
		file_in >> inputHouse;
		file_in >> inputFlat;
													// Создаем указатель address_arr[i] и заполняем поля с помощью конструктора класса
		address_arr[i] = new Address(inputCity, inputStreet, inputHouse, inputFlat);
	}
	file_in.close();								// Закрываем файл

	sort(address_arr, size);						// Сортируем адреса по названию города

	file_out << size << std::endl;					// Записываем в файл в первую строку - количество строк

	for (int i = 0; i < size; ++i) {				// Читаем массив
													// с помощью метода getOutputAddress (к разыменованному указателю) объединяем каждый адрес в одну строку
													// и записываем построчно в файл
	
		file_out << (*address_arr[i]).getOutputAddress() << std::endl;
	}

	file_out.close();

	for (int i = 0; i < size; ++i) {				// Освобождаем память
		delete address_arr[i];
	}
	delete[] address_arr;

	return EXIT_SUCCESS;
}