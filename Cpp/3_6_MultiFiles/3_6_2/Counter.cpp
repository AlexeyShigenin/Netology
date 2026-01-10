#include "Counter.h"

// Конструктор c параметром и инициализация начальным значением счетчика
Counter::Counter(int value) : count{ value } {};

// Конструктор без параметров
Counter::Counter() {
	count = 1;				// Значение счетчика по-умолчанию = 1
};

// Метод увеличения счетчика
void Counter::count_up() {
	count++;
};

// Метод уменьшения счетчика
void Counter::count_down() {
	count--;
};

// Метод возващения текущего значения счетчика (геттер)
int Counter::getCount() const {
	return count;
};
