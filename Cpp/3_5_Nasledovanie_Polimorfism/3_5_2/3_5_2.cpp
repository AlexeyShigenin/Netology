/*
Задача 2. Фигуры. Стороны и углы
В этом задании вы усложните иерархию классов для усложнённой предметной области.
У вас появляется информация о длине сторон и углах ваших фигур, а также несколько более конкретных фигур.
Теперь в треугольнике вы должны хранить информацию о длине всех его трёх сторон (a, b, c) и значениях его трёх углов (A, B, C).
В четырёхугольнике вы храните информацию о длине его четырёх сторон (a, b, c, d) и значениях его четырёх углов (A, B, C, D).

Также у вас появляются более конкретные фигуры:
прямоугольный треугольник (угол C всегда равен 90);
равнобедренный треугольник (стороны a и c равны, углы A и C равны);
равносторонний треугольник (все стороны равны, все углы равны 60);
прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
квадрат (все стороны равны, все углы равны 90);
параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
ромб (все стороны равны, углы A,C и B,D попарно равны).

Вы должны иметь возможность узнать у каждой фигуры длины её сторон и значения её углов,
но извне вы не должны быть способны изменить длины сторон и углы.
Не должно быть возможности создать фигуры, не удовлетворяющие перечисленным условиям. Например, нельзя создать квадрат с разными углами.
Геометрические соотношения проверять не нужно. Например, сумма углов в треугольнике может быть не равна 180.

Задача: спроектировать и реализовать классы, описывающие предметную область. Продемонстрируйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о длинах её сторон и величине её углов. Значения используйте произвольные.
Инициализацию длин сторон и величин углов нужно выполнить с помощью вызова базовых конструкторов.

Для вывода информации о фигуре создайте функцию print_info, которая будет принимать в качестве аргумента указатель на базовый класс фигуры.

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

// Класс Figure - базовый класс для Треугольника и Четырехугольника - класс, который хранит только имя фигуры
class Figure {
protected:
    // Защищеное поле для хранения имени фигуры
    std::string name;

public:
    // Конструктор класса Figure
    Figure(std::string name) {
        this->name = name;
    }

    std::string get_name() { return name; }
};

// Класс Triangle (Треугольник) - базовый класс для всех фигур с тремя сторонами и тремя углами - наследник класса Figure
class Triangle : public Figure {
protected:
    // Защищенные поля для хранения трех сторон и трех углов
    int a, b, c, A, B, C;

public:
    // Конструктор класса Triangle  (с вызовом конструктора класса Figure и передачей ему параметра name)
    Triangle(int a, int b, int c, int A, int B, int C) : Figure("Треугольник") {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    // Геттеры для получения информации о сторонах и углах фигур с 3-мя сторонами и углами
    int get_a() const { return a; }
    int get_b() const { return b; }
    int get_c() const { return c; }
    int get_A() const { return A; }
    int get_B() const { return B; }
    int get_C() const { return C; }

};

// Класс RectangularTriangle (Прямоугольный треугольник) - наследник класса Triangle
class RectangularTriangle : public Triangle {
public:
    // Конструктор класса RectangularTriangle - принимается 5 параметров (три стороны и два угла, т.к. угол С всегда = 90)
    // в конструктор родительского класса передаются 6 параметров ((a, b, c, A, B, 90)
    RectangularTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
        name = "Прямоугольный треугольник";
    }
};

// Класс IsoscelesTriangle (Равнобедренный треугольник) - наследник класса Triangle
class IsoscelesTriangle : public Triangle {
public:
    // Конструктор класса IsoscelesTriangle - принимается 4 параметра, в конструктор родительского класса передаются 6 параметров
    IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {
        name = "Равнобедренный треугольник";
    }
};

// Класс EquilateralTriangle (Равносторонний треугольник) - наследник класса Triangle
class EquilateralTriangle : public Triangle {
public:
    // Конструктор класса EquilateralTriangle - принимается 1 параметр, в конструктор родительского класса передаются 6 параметров
    EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60) {
        name = "Равносторонний треугольник";
    }
};

// Класс Quadrangle (Четырехугольник) - базовый класс для фигур с четырьмя сторонами и четырьмя углами - наследник класса Figure
class Quadrangle : public Figure {
protected:
    // Защищенные поля для хранения четырех сторон и четырех углов
    int a, b, c, d, A, B, C, D;

public:
    // Конструктор класса Quadrangle (с вызовом конструктора класса Figure и передачей ему параметра name)
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Figure("Четырёхугольник") {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    // Геттеры для получения информации о сторонах и углах фигур с 4-мя сторонами и углами
    int get_a() const { return a; }
    int get_b() const { return b; }
    int get_c() const { return c; }
    int get_d() const { return d; }
    int get_A() const { return A; }
    int get_B() const { return B; }
    int get_C() const { return C; }
    int get_D() const { return D; }
};

// Класс Parallelogram (Параллелограмм) - наследник класса Quadrangle
class Parallelogram : public Quadrangle {
public:
    // Конструктор класса Parallelogram - принимается 4 параметра, в конструктор родительского класса передаются 8 параметров
    Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) {
        name = "Параллелограмм";
    }
};

// Класс Rectangl (Прямоугольник) - наследник класса Parallelogram
class Rectangl : public Parallelogram {
public:
    // Конструктор класса Rectangl - принимается 2 параметра, в конструктор родительского класса передаются 4 параметра
    Rectangl(int a, int b) : Parallelogram(a, b, 90, 90) {
        name = "Прямоугольник";
    }
};

// Класс Square (Квадрат) - наследник класса Rectangl
class Square : public Rectangl {
public:
    // Конструктор класса Square - принимается 1 параметр, в конструктор родительского класса передаются 2 параметра
    Square(int a) : Rectangl(a, a) {
        name = "Квадрат";
    }
};

// Класс Rhombus (Ромб) - наследник класса Parallelogram
class Rhombus : public Parallelogram {
public:
    // Конструктор класса Rhombus - принимается 3 параметр, в конструктор родительского класса передаются 4 параметра
    Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B) {
        name = "Ромб";
    }
};

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
    Rectangl rectangl(10, 20);
    Square square(20);
    Parallelogram parallelogram(20, 30, 30, 40);
    Rhombus rhombus(30, 30, 40);

    // Выводим информацию о каждой фигуре
    print_info_3(&triangle);
    print_info_3(&rect_triangle);
    print_info_3(&isos_triangle);
    print_info_3(&equi_triangle);
    
    print_info_4(&quadrangle);
    print_info_4(&rectangl);
    print_info_4(&square);
    print_info_4(&parallelogram);
    print_info_4(&rhombus);

    return EXIT_SUCCESS;
}