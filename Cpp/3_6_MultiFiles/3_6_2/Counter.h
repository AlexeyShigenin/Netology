#ifndef COUNTER_H
#define COUNTER_H
class Counter
{
private:
	int count;
public:
	// Конструктор c параметром
	Counter(int);
	// Конструктор без параметров
	Counter();
	void count_up();			// Метод увеличения счетчика
	void count_down();			// Метод уменьшения счетчика
	int getCount()	const;		// Метод возващения текущего значения счетчика (геттер)
};

#endif