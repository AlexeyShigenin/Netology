#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

// Класс EquilateralTriangle (Равносторонний треугольник) - наследник класса Triangle

#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    // Конструктор класса EquilateralTriangle
    EquilateralTriangle(int a, int b, int c, int A, int B, int C);
};

#endif