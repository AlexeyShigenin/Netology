#ifndef EQUILATERALTRIANGLE_H
#define EQUILATERALTRIANGLE_H

// Класс EquilateralTriangle (Равносторонний треугольник) - наследник класса Triangle

#include "Triangle.h"

class EquilateralTriangle : public Triangle {
public:
    // Конструктор класса EquilateralTriangle - принимается 1 параметр
    EquilateralTriangle(int a);
};

#endif