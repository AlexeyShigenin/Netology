// Класс Quadrangle (Четырехугольник) - базовый класс для фигур с четырьмя сторонами и четырьмя углами - наследник класса Figure

#include "Quadrangle.h"
#include "FigureException.h"

// Конструктор класса Quadrangle (с вызовом конструктора класса Figure и передачей ему параметра name)
Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Figure("Четырёхугольник") {
    this->a = a;
    this->b = b;
    this->c = c;
    this->d = d;
    this->A = A;
    this->B = B;
    this->C = C;
    this->D = D;

    // Проверка соответствия аргументов ограничениям
    if (A + B + C + D != 360) {
        throw FigureException("сумма углов не равна 360");
    }
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0) {
        throw FigureException("Должно быть четыре положительные стороны");
    }
}
// Геттеры для получения информации о сторонах и углах фигур с 4-мя сторонами и углами
int Quadrangle::get_a() const { return a; }
int Quadrangle::get_b() const { return b; }
int Quadrangle::get_c() const { return c; }
int Quadrangle::get_d() const { return d; }
int Quadrangle::get_A() const { return A; }
int Quadrangle::get_B() const { return B; }
int Quadrangle::get_C() const { return C; }
int Quadrangle::get_D() const { return D; }