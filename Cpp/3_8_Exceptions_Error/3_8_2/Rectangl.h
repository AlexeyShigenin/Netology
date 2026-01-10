#ifndef RECTANGL_H
#define RECTANGL_H

// Класс Rectangl (Прямоугольник) - наследник класса Parallelogram

#include "Parallelogram.h"

class Rectangl : public Parallelogram {
public:
    // Конструктор класса Rectangl
    Rectangl(int a, int b, int c, int d, int A, int B, int C, int D);
};

#endif