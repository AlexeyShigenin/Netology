// Класс Rhombus (Ромб) - наследник класса Parallelogram

#include "Rhombus.h"
#include "FigureException.h"

// Конструктор класса Rhombus
Rhombus::Rhombus(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D) {
    name = "Ромб";

    // Проверка соответствия аргументов ограничениям
    if (a != b || a != c || a != d) {
        throw FigureException("не все стороны равны");
    }
    if (A != C) {
        throw FigureException("углы A и C не равны");
    }
    if (B != D) {
        throw FigureException("углы B и D не равны");
    }
}