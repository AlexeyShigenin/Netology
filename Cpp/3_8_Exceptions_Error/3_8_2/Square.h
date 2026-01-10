#ifndef SQUARE_H
#define SQUARE_H

// Класс Square (Квадрат) - наследник класса Rectangl

#include "Rectangl.h"

class Square : public Rectangl {
public:
    // Конструктор класса Square
    Square(int a, int b, int c, int d, int A, int B, int C, int D);
};

#endif