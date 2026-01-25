#ifndef ISOSCELESTRIANGLE_H
#define ISOSCELESTRIANGLE_H

// Класс IsoscelesTriangle (Равнобедренный треугольник) - наследник класса Triangle

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {
public:
    // Конструктор класса IsoscelesTriangle - принимается 4 параметра
    IsoscelesTriangle(int a, int b, int A, int B);
};

#endif