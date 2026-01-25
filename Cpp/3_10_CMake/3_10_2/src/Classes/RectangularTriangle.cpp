// Класс RectangularTriangle (Прямоугольный треугольник) - наследник класса Triangle

#include "RectangularTriangle.h"

// Конструктор класса RectangularTriangle - принимается 5 параметров (три стороны и два угла, т.к. угол С всегда = 90)
// в конструктор родительского класса передаются 6 параметров ((a, b, c, A, B, 90)
RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
    name = "Прямоугольный треугольник";
}