#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

// Класс IsoscelesTriangle (Равнобедренный треугольник) - наследник класса Triangle

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    // Конструктор класса IsoscelesTriangle
    IsoscelesTriangle(int a, int b, int c, int A, int B, int C);
};

#endif