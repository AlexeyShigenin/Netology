/*
Задача 3. Иерархия классов
В этом задании вы вынесете иерархию классов в отдельные файлы.
Возьмите иерархию классов геометрических фигур из предыдущего домашнего задания.
Разнесите иерархию классов по отдельным файлам, продемонстрируйте работу программы таким же образом, как в предыдущем домашнем задании.
Обратите внимание на то, что для каждого класса должна быть создана своя пара — заголовочный файл + файл исходного кода.

Пример работы программы
Консоль
Треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

Прямоугольный треугольник:
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=90

Равнобедренный треугольник:
Стороны: a=10 b=20 c=10
Углы: A=50 B=60 C=50

Равносторонний треугольник:
Стороны: a=30 b=30 c=30
Углы: A=60 B=60 C=60

Четырёхугольник:
Стороны: a=10 b=20 c=30 d=40
Углы: A=50 B=60 C=70 D=80

Прямоугольник:
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

Квадрат:
Стороны: a=20 b=20 c=20 d=20
Углы: A=90 B=90 C=90 D=90

Параллелограмм:
Стороны: a=20 b=30 c=20 d=30
Углы: A=30 B=40 C=30 D=40

Ромб:
Стороны: a=30 b=30 c=30 d=30
Углы: A=30 B=40 C=30 D=40
*/

#include <iostream>

// Классы
#include "Classes/Figure.h"
#include "Classes/Triangle.h"
#include "Classes/RectangularTriangle.h"
#include "Classes/IsoscelesTriangle.h"
#include "Classes/EquilateralTriangle.h"
#include "Classes/Quadrangle.h"
#include "Classes/Parallelogram.h"
#include "Classes/Rectangle.h"
#include "Classes/Square.h"
#include "Classes/Rhombus.h"

// Функция для вывода информации о фигуре c 3-мя сторонами и 3-мя углами
void print_info_3(Triangle* base) {
    std::cout << base->get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << base->get_a() << " b=" << base->get_b() << " c=" << base->get_c() << std::endl;
    std::cout << "Углы: A=" << base->get_A() << " B=" << base->get_B() << " C=" << base->get_C() << std::endl;
    std::cout << std::endl;
}

// Функция для вывода информации о фигуре c 4-мя сторонами и 4-мя углами
void print_info_4(Quadrangle* base) {
    std::cout << base->get_name() << ":" << std::endl;
    std::cout << "Стороны: a=" << base->get_a() << " b=" << base->get_b() << " c=" << base->get_c() << " d=" << base->get_d() << std::endl;
    std::cout << "Углы: A=" << base->get_A() << " B=" << base->get_B() << " C=" << base->get_C() << " D=" << base->get_D() << std::endl;
    std::cout << std::endl;
}

int main() {

    setlocale(LC_ALL, "rus");

    // Создаем экземпляры всех фигур, инициализируем длины и углы с помощью конструкторов с параметрами
    Triangle triangle(10, 20, 30, 50, 60, 70);
    RectangularTriangle rect_triangle(10, 20, 30, 50, 60);
    IsoscelesTriangle isos_triangle(10, 20, 50, 60);
    EquilateralTriangle equi_triangle(30);

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    Rectangle rectangle(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    // Выводим информацию о каждой фигуре
    print_info_3(&triangle);
    print_info_3(&rect_triangle);
    print_info_3(&isos_triangle);
    print_info_3(&equi_triangle);

    print_info_4(&quadrangle);
    print_info_4(&rectangle);
    print_info_4(&square);
    print_info_4(&parallelogram);
    print_info_4(&rhombus);

    return EXIT_SUCCESS;
}