/*
Задача 2. Исключения в конструкторах
В этом задании вы запретите создавать экземпляры классов геометрических фигур с неправильными данными.
Создайте собственный класс исключения для ошибки создания геометрической фигуры.
Подумайте, от какого типа его унаследовать, и не забудьте поместить новый класс в отдельную пару файлов.
Возьмите иерархию классов из предыдущего задания. Теперь при создании экземпляров классов вам нужно проверять аргументы,
которые поступают на вход конструктору. Если аргументы не соответствуют ограничениям, объект не должен быть создан,
а на консоль должно быть выведено соответствующее сообщение.
Причина ошибки должна быть сформулирована на уровне конструктора и выведена на экран при обработке ошибок.

Ограничения:
треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180);
прямоугольный треугольник (угол C всегда равен 90);
равнобедренный треугольник (стороны a и c равны, углы A и C равны);
равносторонний треугольник (все стороны равны, все углы равны 60);
четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);
прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
квадрат (все стороны равны, все углы равны 90);
параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
ромб (все стороны равны, углы A,C и B,D попарно равны).

Для проверки попробуйте создать разные геометрические фигуры — правильные и неправильные.
В случае успешного создания выводите на экран сообщение об успешном создании и параметры фигуры.
В случае, если создание не удалось, выведите причину ошибки.

Пример работы программы
Консоль

Прямоугольный треугольник (стороны 3, 4, 5; углы 30, 60, 90) создан
Ошибка создания фигуры. Причина: сумма углов не равна 180
*/

#include <iostream>

// Классы
#include "Figure.h"
#include "Triangle.h"
#include "RectangularTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangl.h"
#include "Square.h"
#include "Rhombus.h"

#include "FigureException.h"

// Функция для вывода информации о фигуре c 3-мя сторонами и 3-мя углами
void print_info_3(Triangle* base) {
    std::cout   << base->get_name() << " (стороны " << base->get_a() << ", " << base->get_b() << ", " << base->get_c()
                << "; углы " << base->get_A() << ", " << base->get_B() << ", " << base->get_C() << ") создан" << std::endl;
}

// Функция для вывода информации о фигуре c 4-мя сторонами и 4-мя углами
void print_info_4(Quadrangle* base) {
    std::cout << base->get_name() << " (стороны " << base->get_a() << ", " << base->get_b() << ", " << base->get_c() << ", " << base->get_d()
        << "; углы " << base->get_A() << ", " << base->get_B() << ", " << base->get_C() << ", " << base->get_D() << ") создан" << std::endl;
}

int main() {

    setlocale(LC_ALL, "rus");

    // Создаем экземпляры фигур, инициализируем длины и углы с помощью конструкторов с параметрами
    // и выводим сообщение об успешности/неуспешности
    
    // Треугольник:
     try {
         // Правильный треугольник
         Triangle triangle(10, 20, 30, 50, 60, 70);
         print_info_3(&triangle);
         
         // Неправильный треугольник
         Triangle bad_triangle(10, 20, 30, 50, 60, 80);
         print_info_3(&bad_triangle);
     }
     catch (const FigureException& e) {
         std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl << std::endl;
     }

     // Прямоугольный треугольник:
     try {
         // Правильный прямоугольный треугольник
         RectangularTriangle rect_triangle(10, 20, 30, 50, 40, 90);
         print_info_3(&rect_triangle);
         
         // Неправильный прямоугольный треугольник
         RectangularTriangle bad_rect_triangle(10, 20, 30, 50, 50, 80);
         print_info_3(&bad_rect_triangle);
     }
     catch (const FigureException& e) {
         std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl << std::endl;
     }

     // Равнобедренный треугольник:
     try {
         // Правильный равнобедренный треугольник
         IsoscelesTriangle isos_triangle(10, 20, 10, 80, 20, 80);
         print_info_3(&isos_triangle);
         
         // Неправильный равнобедренный треугольник
         IsoscelesTriangle bad_isos_triangle(10, 20, 30, 50, 50, 80);
         print_info_3(&bad_isos_triangle);
     }
     catch (const FigureException& e) {
         std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl << std::endl;
     }

     // Равноcторонний треугольник:
     try {
         // Правильный равносторонний треугольник
         EquilateralTriangle equi_triangle(10, 10, 10, 60, 60, 60);
         print_info_3(&equi_triangle);
         
         // Неправильный равносторонний треугольник
         EquilateralTriangle bad_equi_triangle(10, 10, 10, 50, 50, 80);
         print_info_3(&bad_equi_triangle);
     }
     catch (const FigureException& e) {
         std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl << std::endl;
     }

     // Четырехугольник
     try {
         // Правильный четырехугольник
         Quadrangle quadrangle(10, 10, 10, 10, 80, 100, 80, 100);
         print_info_4(&quadrangle);
         
         // Неправильный четырехугольник
         Quadrangle bad_quadrangle(10, 10, 10, 10, 80, 60, 70, 60);
         print_info_4(&bad_quadrangle);
     }
     catch (const FigureException& e) {
         std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl << std::endl;
     }

     // Параллелограм
     try {
         // Правильный параллелограм
         Parallelogram parallelogram(10, 20, 10, 20, 80, 100, 80, 100);
         print_info_4(&parallelogram);
         
         // Неправильный параллелограм
         Parallelogram bad_parallelogram(10, 20, 10, 20, 80, 80, 100, 100);
         print_info_4(&bad_parallelogram);
     }
     catch (const FigureException& e) {
         std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl << std::endl;
     }

     // Прямоугольник
     try {
         // Правильный прямоугольник
         Rectangl rectangl(10, 20, 10, 20, 90, 90, 90, 90);
         print_info_4(&rectangl);
         
         // Неправильный прямоугольник
         Rectangl bad_rectangl(10, 20, 10, 20, 85, 95, 85, 95);     
         print_info_4(&bad_rectangl);
     }
     catch (const FigureException& e) {
         std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl << std::endl;
     }

     // Квадрат
     try {
         // Правильный квадрат
         Square square(10, 10, 10, 10, 90, 90, 90, 90);
         print_info_4(&square);
         
         // Неправильный квадрат
         Square bad_square(10, 20, 10, 20, 90, 90, 90, 90);
         print_info_4(&bad_square);
     }
     catch (const FigureException& e) {
         std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl << std::endl;
     }

     // Ромб
     try {
         // Правильный ромб
         Rhombus rhombus(10, 10, 10, 10, 95, 85, 95, 85);
         print_info_4(&rhombus);
         
         // Неправильный ромб
         Rhombus bad_rhombus(10, 10, 10, 10, 95, 95, 85, 85);
         print_info_4(&bad_rhombus);
     }
     catch (const FigureException& e) {
         std::cout << "Ошибка создания фигуры. Причина: " << e.what() << std::endl << std::endl;
     }

    return EXIT_SUCCESS;
}