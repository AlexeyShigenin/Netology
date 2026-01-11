/*
Задача 2. Остальные операции с дробями
В этом задании вы переопределите остальные операторы для класса дроби.
Необходимо переопределить операторы для класса Fraction из предыдущего задания:

сложение;
вычитание;
умножение;
деление;
унарный минус;
инкремент постфиксный и префиксный;
декремент постфиксный и префиксный.
Продемонстрируйте работу ваших операторов. Попросите пользователя ввести две дроби и покажите результат каждой операции.
Операции декремента и инкремента отнимают и прибавляют к дроби 1 соответственно.

Составьте выражения, содержащие постфиксный и префиксный инкремент и декремент, чтобы продемонстрировать разницу между постфиксной и префиксной версиями.

Пример работы программы

Консоль
Введите числитель дроби 1: 3
Введите знаменатель дроби 1: 4
Введите числитель дроби 2: 4
Введите знаменатель дроби 2: 5
3/4 + 4/5 = 31/20
3/4 - 4/5 = -1/20
3/4 * 4/5 = 3/5
3/4 / 4/5 = 15/16
++3/4 * 4/5 = 7/5
Значение дроби 1 = 7/4
7/4-- * 4/5 = 7/5
Значени дроби 1 = 3/4
*/

#include <iostream>
#include <numeric>

class Fraction
{
private:
	int numerator_;
	int denominator_;

public:
	Fraction(int numerator, int denominator)
	{
		int gcd = std::gcd(std::abs(numerator), std::abs(denominator));

		numerator_ = (numerator / gcd);
		denominator_ = (denominator / gcd);
	}

	// +
	Fraction operator + (Fraction other)
	{
		return Fraction(numerator_ * other.denominator_ + other.numerator_ * denominator_, denominator_ * other.denominator_);
	}
	// -
	Fraction operator - (Fraction other)
	{
		return Fraction(numerator_ * other.denominator_ - other.numerator_ * denominator_, denominator_ * other.denominator_);
	}
	// *
	Fraction operator * (Fraction other)
	{
		return Fraction(numerator_ * other.numerator_, denominator_ * other.denominator_);
	}
	// /
	Fraction operator / (Fraction other)
	{
		return Fraction(numerator_ * other.denominator_, denominator_ * other.numerator_);
	}
	// -()
	Fraction operator -()
	{
		return Fraction(numerator_ = -numerator_, denominator_);
	}
	// pre_inc
	Fraction operator++()
	{
		return Fraction(numerator_ += denominator_, denominator_);
	}
	// post_inc
	Fraction operator++(int)
	{
		Fraction tmpFraction = *this;
		++(*this);
		return tmpFraction;
	}
	// pre_dec
	Fraction operator--()
	{
		return Fraction(numerator_ -= denominator_, denominator_);
	}
	// post_dec
	Fraction operator--(int)
	{
		Fraction tmpFraction = *this;
		--(*this);
		return tmpFraction;
	}
	// <<
	friend std::ostream& operator<<(std::ostream& stream, const Fraction& other)
	{
		stream << other.numerator_ << '/' << other.denominator_;
		return stream;
	}
};

int main()
{
	setlocale(LC_ALL, "rus");

	int numerator1, denumerator1, numerator2, denumerator2;
	
	std::cout << "Введите числитель дроби 1: ";
	std::cin >> numerator1;

	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> denumerator1;

	std::cout << "Введите числитель дроби 2: ";
	std::cin >> numerator2;

	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> denumerator2;

	Fraction fraction1(numerator1, denumerator1);
	Fraction fraction2(numerator2, denumerator2);

	std::cout << fraction1 << " + " << fraction2 << " = " << (fraction1 + fraction2) << std::endl;
	std::cout << fraction1 << " - " << fraction2 << " = " << (fraction1 - fraction2) << std::endl;
	std::cout << fraction1 << " * " << fraction2 << " = " << (fraction1 * fraction2) << std::endl;
	std::cout << fraction1 << " / " << fraction2 << " = " << (fraction1 / fraction2) << std::endl;

	std::cout << "++" << fraction1 << " * " << fraction2 << " = " << (++fraction1 * fraction2) << std::endl;
	std::cout << "Значени дроби 1 = " << fraction1 << std::endl;

	std::cout << fraction1 << "--" << " * " << fraction2 << " = " << (fraction1-- * fraction2) << std::endl;
	std::cout << "Значени дроби 1 = " << fraction1 << std::endl;

	return EXIT_SUCCESS;
}