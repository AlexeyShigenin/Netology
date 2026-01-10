// Класс EquilateralTriangle (Равносторонний треугольник) - наследник класса Triangle

#include "EquilateralTriangle.h"

// Конструктор класса EquilateralTriangle - принимается 1 параметр, в конструктор родительского класса передаются 6 параметров
EquilateralTriangle::EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60) {
    name = "Равносторонний треугольник";
}