#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

// Класс Parallelogram (Параллелограмм) - наследник класса Quadrangle

#include "Quadrangle.h"

class Parallelogram : public Quadrangle {
public:
    // Конструктор класса Parallelogram
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);
};

#endif