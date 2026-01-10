/*
Задача 3. Фигуры. Методы
В этом задании вы добавите в вашу иерархию классов больше функциональности.
Теперь ваши фигуры должны уметь немного больше:
выводить информацию о себе;
проверять правильность своих данных.

Ваши фигуры:
фигура (количество сторон равно 0);
треугольник (стороны и углы произвольные, количество сторон равно 3, сумма углов равна 180);
прямоугольный треугольник (угол C всегда равен 90);
равнобедренный треугольник (стороны a и c равны, углы A и C равны);
равносторонний треугольник (все стороны равны, все углы равны 60);
четырёхугольник (стороны и углы произвольные, количество сторон равно 4, сумма углов равна 360);
прямоугольник (стороны a,c и b,d попарно равны, все углы равны 90);
квадрат (все стороны равны, все углы равны 90);
параллелограмм (стороны a,c и b,d попарно равны, углы A,C и B,D попарно равны);
ромб (все стороны равны, углы A,C и B,D попарно равны).

Вы должны иметь возможность попросить фигуру вывести информацию о себе на консоль,
а также узнать, является ли фигура правильной, то есть выполняются ли условия, указанные в списке выше.

Информация о фигуре включает в себя:
название фигуры;
количество сторон;
длины её сторон, если есть;
величины её углов, если есть;
является ли фигура правильной.
Задача: спроектировать и реализовать классы, описывающие предметную область.
Продемонструйте их работу: создайте по одному экземпляру каждой фигуры и выведите на экран информацию о фигурах.

Реализуйте методы вывода на консоль и проверки правильности фигуры с помощью виртуальных функций и переопределений.
Используйте вызов базовой версии метода.

Ваша задача — работать с экземплярами дочерних классов полиморфно, то есть с помощью указателя на базовый класс.

Пример работы программы
Консоль
Фигура:
Правильная
Количество сторон: 0

Треугольник:
Правильная
Количество сторон: 3
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=70

Прямоугольный треугольник:
Неправильная
Количество сторон: 3
Стороны: a=10 b=20 c=30
Углы: A=50 B=60 C=90

Прямоугольный треугольник:
Правильная
Количество сторон: 3
Стороны: a=10 b=20 c=30
Углы: A=50 B=40 C=90

Равнобедренный треугольник:
Неправильная
Количество сторон: 3
Стороны: a=10 b=20 c=10
Углы: A=50 B=60 C=50

Равносторонний треугольник:
Правильная
Количество сторон: 3
Стороны: a=30 b=30 c=30
Углы: A=60 B=60 C=60

Четырёхугольник:
Неправильная
Количество сторон: 4
Стороны: a=10 b=20 c=30 d=40
Углы: A=50 B=60 C=70 D=80

Прямоугольник:
Правильная
Количество сторон: 4
Стороны: a=10 b=20 c=10 d=20
Углы: A=90 B=90 C=90 D=90

Квадрат:
Правильная
Количество сторон: 4
Стороны: a=20 b=20 c=20 d=20
Углы: A=90 B=90 C=90 D=90

Параллелограмм:
Неправильная
Количество сторон: 4
Стороны: a=20 b=30 c=20 d=30
Углы: A=30 B=40 C=30 D=40

Ромб:
Неправильная
Количество сторон: 4
Стороны: a=30 b=30 c=30 d=30
Углы: A=30 B=40 C=30 D=40
*/

#include <iostream>

// Класс Figure - базовый класс для всех фигур
class Figure {
protected:
    // Поле (защищенное) для хранения имени фигуры
    std::string name;
    int sides_count;

public:
    // Конструктор класса Figure
    Figure() {
        name = "Фигура";
        sides_count = 0;
    }
    
    // Виртуальная функция для проверки на правильность. Будет переопределяться в классах наследников
    virtual bool check() {
        if (sides_count != 0) {
            return false;
        }
        return true;
    }

    // Виртуальная функция для вывода информации о фигуре. Будет переопределяться в классах наследников
    virtual void print_info() {
        std::cout << name << ":" << std::endl;
        std::cout << (check() ? "Правильная" : "Неправильная") << std::endl;
        std::cout << "Количество сторон: " << sides_count << std::endl;
    };
};

// Класс Triangle (Треугольник) - базовый класс для всех фигур с тремя сторонами и тремя углами - наследник класса Figure
class Triangle : public Figure {
protected:
    // Защищенные поля для хранения трех сторон и трех углов
    int a, b, c, A, B, C;

public:
    // Конструктор класса Triangle
    Triangle(int a, int b, int c, int A, int B, int C) {
        sides_count = 3;
        name = "Треугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }

    // Переопределяем проверку для треугольника
    virtual bool check() override {
        // Проверяем количество сторон
        if (sides_count != 3) {
            return false;
        }
        // Проверяем сумму углов треугольника
        if ((A + B + C) != 180) {
            return false;
        }
        return true;
    }

    // Переопределяем вывод информации
    virtual void print_info() override {
        // Вызываем базовую версию для вывода общей информации
        std::cout << std::endl;
        Figure::print_info();

        // Дополняем информацией о сторонах и углах
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

// Класс RectangularTriangle (Прямоугольный треугольник) - наследник класса Triangle
class RectangularTriangle : public Triangle {
public:
    // Конструктор класса RectangularTriangle - принимается 5 параметров (три стороны и два угла, т.к. угол С всегда = 90)
    // в конструктор родительского класса передаются 6 параметров ((a, b, c, A, B, 90)
    RectangularTriangle(int a, int b, int c, int A, int B) : Triangle(a, b, c, A, B, 90) {
        name = "Прямоугольный треугольник";
    }

    // Переопределяем проверку: добавляем условие C = 90°
    virtual bool check() override {
        // Сначала проверяем базовые условия треугольника
        if (!Triangle::check()) {
            return false;
        }
        // Проверяем, что угол C действительно равен 90°
        if (C != 90) {
            return false;
        }
        return true;
    }
};

// Класс IsoscelesTriangle (Равнобедренный треугольник) - наследник класса Triangle
class IsoscelesTriangle : public Triangle {
public:
    // Конструктор класса IsoscelesTriangle - принимается 4 параметра, в конструктор родительского класса передаются 6 параметров
    IsoscelesTriangle(int a, int b, int A, int B) : Triangle(a, b, a, A, B, A) {
        name = "Равнобедренный треугольник";
    }

    // Переопределяем проверку: добавляем условия равнобедренности
    virtual bool check() override {
        // Проверяем базовые условия треугольника
        if (!Triangle::check()) {
            return false;
        }
         // Проверяем условия равнобедренности
        if ((a != c) or (A != C)) {
            return false;
        }
        return true;
    }
};

// Класс EquilateralTriangle (Равносторонний треугольник) - наследник класса Triangle
class EquilateralTriangle : public Triangle {
public:
    // Конструктор класса EquilateralTriangle - принимается 1 параметр, в конструктор родительского класса передаются 6 параметров
    EquilateralTriangle(int a) : Triangle(a, a, a, 60, 60, 60) {
        name = "Равносторонний треугольник";
    }

    // Переопределяем проверку: добавляем условия равносторонности
    virtual bool check() override {
        // Проверяем базовые условия треугольника
        if (!Triangle::check()) {
            return false;
        }
        // Проверяем условия равносторонности
        if ((a != b) or (b != c) or (a != c)) {
            return false;
        }
        if ((A != 60) or (B != 60.0) || (C != 60)) {
            return false;
        }
        return true;
    }
};

// Класс Quadrangle (Четырехугольник) - базовый класс для фигур с четырьмя сторонами и четырьмя углами - наследник класса Figure
class Quadrangle : public Figure {
protected:
    // Защищенные поля для хранения четырех сторон и четырех углов
    int a, b, c, d, A, B, C, D;

public:
    // Конструктор класса Quadrangle
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) {
        sides_count = 4;
        name = "Четырёхугольник";
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }

    // Переопределяем проверку для четырехугольника
    virtual bool check() override {
        // Проверяем количество сторон
        if (sides_count != 4) {
            return false;
        }
        // Проверяем сумму углов четырехугольника
        if ((A + B + C + D) != 360) {
            return false;
        }
        return true;
    }
    // Переопределяем вывод информации
    virtual void print_info() override {
        // Вызываем базовую версию
        std::cout << std::endl;
        Figure::print_info();

        // Дополняем информацией о сторонах и углах
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

// Класс Parallelogram (Параллелограмм) - наследник класса Quadrangle
class Parallelogram : public Quadrangle {
public:
    // Конструктор класса Parallelogram - принимается 4 параметра, в конструктор родительского класса передаются 8 параметров
    Parallelogram(int a, int b, int A, int B) : Quadrangle(a, b, a, b, A, B, A, B) {
        name = "Параллелограмм";
    }
    
    // Переопределяем проверку: добавляем условия параллелограмма
    virtual bool check() override {
        // Проверяем базовые условия четырехугольника
        if (!Quadrangle::check()) {
            return false;
        }

        // Проверяем условия параллелограмма
        if ((a != c) or (b != d)) {
            return false;
        }
        if ((A != C) or (B != D)) {
            return false;
        }
        return true;
    }
};

// Класс Rectangl (Прямоугольник) - наследник класса Parallelogram
class Rectangl : public Parallelogram {
public:
    // Конструктор класса Rectangl - принимается 2 параметра, в конструктор родительского класса передаются 4 параметра
    Rectangl(int a, int b) : Parallelogram(a, b, 90, 90) {
        name = "Прямоугольник";
    }
    // Переопределяем проверку: добавляем условия прямоугольника
    virtual bool check() override {
        // Проверяем базовые условия четырехугольника
        if (!Parallelogram::check()) {
            return false;
        }
        // Проверяем условия прямоугольника
        if ((a != c) or (b != d)) {
            return false;
        }
        if ((A != 90) or (B != 90) or (C != 90) or (D != 90)) {
            return false;
        }
        return true;
    }
};

// Класс Square (Квадрат) - наследник класса Rectangl
class Square : public Rectangl {
public:
    // Конструктор класса Square - принимается 1 параметр, в конструктор родительского класса передаются 2 параметра
    Square(int a) : Rectangl(a, a) {
        name = "Квадрат";
    }
    // Переопределяем проверку: добавляем условия квадрата
    virtual bool check() override {
        // Проверяем базовые условия прямоугольника
        if (!Rectangl::check()) {
            return false;
        }
        // Проверяем условия квадрата (все стороны равны)
        if (a != b) {
            return false;
        }
        return true;
    }
};

// Класс Rhombus (Ромб) - наследник класса Parallelogram
class Rhombus : public Parallelogram {
public:
    // Конструктор класса Rhombus - принимается 3 параметр, в конструктор родительского класса передаются 4 параметра
    Rhombus(int a, int A, int B) : Parallelogram(a, a, A, B) {
        name = "Ромб";
    }

    // Переопределяем проверку: добавляем условия ромба
    virtual bool check() override {
        // Проверяем базовые условия параллелограмма
        if (!Parallelogram::check()) {
            return false;
        }
        // Проверяем условия ромба (все стороны равны)
        if (a != b) {
            return false;
        }
        return true;
    }
};

// Функция для вывода информации о фигуре
void print_info(Figure* figure) {
    figure->print_info();
}

int main() {

    setlocale(LC_ALL, "rus");

    // Создаем экземпляры всех фигур, инициализируем длины и углы с помощью конструкторов с параметрами
    // и ыводим информацию о каждой фигуре
    
    Figure figure;
    print_info(&figure);

    Triangle triangle(10, 20, 30, 50, 60, 70);
    print_info(&triangle);

    RectangularTriangle rect_triangle1(10, 20, 30, 50, 60);
    print_info(&rect_triangle1);

    RectangularTriangle rect_triangle2(10, 20, 30, 50, 40);
    print_info(&rect_triangle2);

    IsoscelesTriangle isos_triangle(10, 20, 50, 60);
    print_info(&isos_triangle);

    EquilateralTriangle equi_triangle(30);
    print_info(&equi_triangle);

    Quadrangle quadrangle(10, 20, 30, 40, 50, 60, 70, 80);
    print_info(&quadrangle);

    Rectangl rectangl(10, 20);
    print_info(&rectangl);

    Square square(20);
    print_info(&square);

    Parallelogram parallelogram(20, 30, 30, 40);
    print_info(&parallelogram);

    Rhombus rhombus(30, 30, 40);
    print_info(&rhombus);

    return EXIT_SUCCESS;
}