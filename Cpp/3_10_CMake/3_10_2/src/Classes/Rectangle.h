#ifndef RECTANGLE_H
#define RECTANGLE_H

// Класс Rectangl (Прямоугольник) - наследник класса Parallelogram

#include "Parallelogram.h"

class Rectangle : public Parallelogram {
public:
    // Конструктор класса Rectangl - принимается 2 параметра
    Rectangle(int a, int b);
};

#endif