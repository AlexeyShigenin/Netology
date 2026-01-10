// Класс RectangularTriangle (Прямоугольный треугольник) - наследник класса Triangle

#include "RectangularTriangle.h"
#include "FigureException.h"

// Конструктор класса RectangularTriangle
RectangularTriangle::RectangularTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    name = "Прямоугольный треугольник";
    
    // Проверка соответствия аргументов ограничениям
    if (C != 90) {
        throw FigureException("угол C не равен 90");
    }
    if (A + B != 90) {
        throw FigureException("сумма углов A и B не равна 90");
    }
}