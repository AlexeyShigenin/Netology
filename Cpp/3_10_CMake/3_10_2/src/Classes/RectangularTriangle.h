#ifndef RECTANGULARTRIANGLE_H
#define RECTANGULARTRIANGLE_H

// Класс RectangularTriangle (Прямоугольный треугольник) - наследник класса Triangle

#include "Triangle.h"

class RectangularTriangle : public Triangle {
public:
    // Конструктор класса RectangularTriangle - принимается 5 параметров (три стороны и два угла, т.к. угол С всегда = 90)
    RectangularTriangle(int a, int b, int c, int A, int B);
};

#endif