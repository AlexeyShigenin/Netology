// Класс Rectangl (Прямоугольник) - наследник класса Parallelogram

#include "Rectangl.h"
#include "FigureException.h"

// Конструктор класса Rectangl
Rectangl::Rectangl(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D) {
    name = "Прямоугольник";
    
    // Проверка соответствия аргументов ограничениям
    if (A != 90 || B != 90 || C != 90 || D != 90) {
        throw FigureException("не все углы равны 90");
    }
}