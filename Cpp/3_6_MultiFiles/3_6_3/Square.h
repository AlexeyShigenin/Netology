#ifndef SQUARE_H
#define SQUARE_H

// Класс Square (Квадрат) - наследник класса Rectangl

#include "Rectangle.h"

class Square : public Rectangle {
public:
    // Конструктор класса Square - принимается 1 параметр
    Square(int a);
};

#endif