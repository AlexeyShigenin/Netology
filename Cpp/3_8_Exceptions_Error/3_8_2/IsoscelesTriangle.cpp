// Класс IsoscelesTriangle (Равнобедренный треугольник) - наследник класса Triangle

#include "IsoscelesTriangle.h"
#include "FigureException.h"

// Конструктор класса IsoscelesTriangle
IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C) {
    name = "Равнобедренный треугольник";

    // Проверка соответствия аргументов ограничениям
    if (a != c) {
        throw FigureException("стороны a и c не равны");
    }
    if (A != C) {
        throw FigureException("углы A и C не равны");
    }
}