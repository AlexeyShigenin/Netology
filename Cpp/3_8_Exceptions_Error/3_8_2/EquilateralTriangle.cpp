// Класс EquilateralTriangle (Равносторонний треугольник) - наследник класса Triangle

#include "EquilateralTriangle.h"
#include "FigureException.h"

// Конструктор класса EquilateralTriangle
EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    name = "Равносторонний треугольник";

    // Проверка соответствия аргументов ограничениям
    if (a != b || a != c) {
        throw FigureException("не все стороны равны");
    }
    if (A != 60 || B != 60 || C != 60) {
        throw FigureException("не все углы равны 60");
    }
}