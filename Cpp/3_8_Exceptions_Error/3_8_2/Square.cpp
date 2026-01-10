// Класс Square (Квадрат) - наследник класса Rectangl

#include "Square.h"
#include "FigureException.h"

// Конструктор класса Square
Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Rectangl(a, b, c, d, A, B, C, D) {
    name = "Квадрат";

    // Проверка соответствия аргументов ограничениям
    if (a != b || a != c || a != d) {
        throw FigureException("не все стороны равны");
    }
}