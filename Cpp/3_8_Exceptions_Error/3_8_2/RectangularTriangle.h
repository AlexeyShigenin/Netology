#ifndef RECTANGULARTRIANGLE_H
#define RECTANGULARTRIANGLE_H

// Класс RectangularTriangle (Прямоугольный треугольник) - наследник класса Triangle

#include "Triangle.h"

class RectangularTriangle : public Triangle {
public:
    // Конструктор класса RectangularTriangle
    RectangularTriangle(int a, int b, int c, int A, int B, int C);
};

#endif