// Класс Parallelogram (Параллелограмм) - наследник класса Quadrangle

#include "Parallelogram.h"

// Конструктор класса Parallelogram - принимается 4 параметра, в конструктор родительского класса передаются 8 параметров
Parallelogram::Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) {
    name = "Параллелограмм";
}