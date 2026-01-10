#ifndef RHOMBUS_H
#define RHOMBUS_H

// Класс Rhombus (Ромб) - наследник класса Parallelogram

#include "Parallelogram.h"

class Rhombus : public Parallelogram {
public:
    // Конструктор класса Rhombus
    Rhombus(int a, int b, int c, int d, int A, int B, int C, int D);
};

#endif