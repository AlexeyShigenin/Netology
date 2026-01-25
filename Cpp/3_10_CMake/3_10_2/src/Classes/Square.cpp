// Класс Square (Квадрат) - наследник класса Rectangl

#include "Square.h"

// Конструктор класса Square - принимается 1 параметр, в конструктор родительского класса передаются 2 параметра
Square::Square(int a) : Rectangle(a, a) {
    name = "Квадрат";
}