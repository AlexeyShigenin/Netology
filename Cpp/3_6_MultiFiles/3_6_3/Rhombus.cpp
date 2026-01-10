// Класс Rhombus (Ромб) - наследник класса Parallelogram

#include "Rhombus.h"

// Конструктор класса Rhombus - принимается 3 параметр, в конструктор родительского класса передаются 4 параметра
Rhombus::Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B) {
    name = "Ромб";
}