#ifndef QUADRANGLE_H
#define QUADRANGLE_H

// Класс Quadrangle (Четырехугольник) - базовый класс для фигур с четырьмя сторонами и четырьмя углами - наследник класса Figure

#include "Figure.h"

class Quadrangle : public Figure {
protected:
    // Защищенные поля для хранения четырех сторон и четырех углов
    int a, b, c, d, A, B, C, D;

public:
    // Конструктор класса Quadrangle
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);
    // Геттеры для получения информации о сторонах и углах фигур с 4-мя сторонами и углами
    int get_a() const;
    int get_b() const;
    int get_c() const;
    int get_d() const;
    int get_A() const;
    int get_B() const;
    int get_C() const;
    int get_D() const;
};

#endif