// Класс IsoscelesTriangle (Равнобедренный треугольник) - наследник класса Triangle

#include "IsoscelesTriangle.h"

// Конструктор класса IsoscelesTriangle - принимается 4 параметра, в конструктор родительского класса передаются 6 параметров
IsoscelesTriangle::IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {
    name = "Равнобедренный треугольник";
}