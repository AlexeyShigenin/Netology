// Класс Rectangl (Прямоугольник) - наследник класса Parallelogram

#include "Rectangle.h"

// Конструктор класса Rectangl - принимается 2 параметра, в конструктор родительского класса передаются 4 параметра
Rectangle::Rectangle(int a, int b) : Parallelogram(a, b, 90, 90) {
    name = "Прямоугольник";
}