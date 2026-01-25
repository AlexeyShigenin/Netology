#ifndef TRIANGLE_H
#define TRIANGLE_H

// Класс Triangle (Треугольник) - базовый класс для всех фигур с тремя сторонами и тремя углами - наследник класса Figure

#include "Figure.h"

class Triangle : public Figure {
protected:
    // Защищенные поля для хранения трех сторон и трех углов
    int a, b, c, A, B, C;
public:
    // Конструктор класса Triangle  (с вызовом конструктора класса Figure и передачей ему параметра name)
    Triangle(int a, int b, int c, int A, int B, int C);
    // Геттеры для получения информации о сторонах и углах фигур с 3-мя сторонами и углами
    int get_a() const;
    int get_b() const;
    int get_c() const;
    int get_A() const;
    int get_B() const;
    int get_C() const;
};

#endif