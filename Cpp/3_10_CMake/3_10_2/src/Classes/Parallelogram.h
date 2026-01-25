#ifndef PARALLELOGRAM_H
#define PARALLELOGRAM_H

// Класс Parallelogram (Параллелограмм) - наследник класса Quadrangle

#include "Quadrangle.h"

class Parallelogram : public Quadrangle {
public:
    // Конструктор класса Parallelogram - принимается 4 параметра, в конструктор родительского класса передаются 8 параметров
    Parallelogram(int a, int b, int A, int B);
};

#endif