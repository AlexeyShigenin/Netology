#include "myMath.h"

// Функция сложения
int sum(int var1, int var2) {
    return var1 + var2;
}

// Функция вычитания
int diff(int var1, int var2) {
    return var1 - var2;
}

// Функция умножения
int mult(int var1, int var2) {
    return var1 * var2;
}

// Функция деления
double division(int var1, int var2)
{
    return static_cast<double> (var1) / var2;   // Чтобы деление было нецелочисленным - один из операндов д.б. дробным
}

// Функция возведения в степень (степень - целое, неотрицательное число)
int exponent(int var1, int var2) {
    int result{ 1 };
    for (int i = 0; i < var2; i++) {
        result *= var1;
    }
    return result;
}