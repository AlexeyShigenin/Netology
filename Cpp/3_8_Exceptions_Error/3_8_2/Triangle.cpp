// Класс Triangle (Треугольник) - базовый класс для всех фигур с тремя сторонами и тремя углами - наследник класса Figure

#include "Triangle.h"
#include "FigureException.h"

// Конструктор класса Triangle  (с вызовом конструктора класса Figure и передачей ему параметра name)
Triangle::Triangle(int a, int b, int c, int A, int B, int C) : Figure("Треугольник") {
    this->a = a;
    this->b = b;
    this->c = c;
    this->A = A;
    this->B = B;
    this->C = C;

    // Проверка соответствия аргументов ограничениям
    if (A + B + C != 180) {
        throw FigureException("сумма углов не равна 180");
    }
    if (a <= 0 || b <= 0 || c <= 0) {
        throw FigureException("должно быть три положительные стороны");
    }
}
// Геттеры для получения информации о сторонах и углах фигур с 3-мя сторонами и углами
int Triangle::get_a() const {
    return a;
}
int Triangle::get_b() const {
    return b;
}
int Triangle::get_c() const {
    return c;
}
int Triangle::get_A() const {
    return A;
}
int Triangle::get_B() const {
    return B;
}
int Triangle::get_C() const {
    return C;
}