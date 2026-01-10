// Класс Parallelogram (Параллелограмм) - наследник класса Quadrangle

#include "Parallelogram.h"
#include "FigureException.h"

// Конструктор класса Parallelogram
Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D) {
    name = "Параллелограмм";

    // Проверка соответствия аргументов ограничениям
    if (a != c) {
        throw FigureException("стороны a и c не равны");
    }
    if (b != d) {
        throw FigureException("стороны b и d не равны");
    }
    if (A != C) {
        throw FigureException("углы A и C не равны");
    }
    if (B != D) {
        throw FigureException("углы B и D не равны");
    }
}