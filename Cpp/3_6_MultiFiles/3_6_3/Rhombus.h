#ifndef RHOMBUS_H
#define RHOMBUS_H

// Класс Rhombus (Ромб) - наследник класса Parallelogram

#include "Parallelogram.h"

class Rhombus : public Parallelogram {
public:
    // Конструктор класса Rhombus - принимается 3 параметра
    Rhombus(int a, int A, int B);
};

#endif