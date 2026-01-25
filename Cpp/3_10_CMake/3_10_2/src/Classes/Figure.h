#ifndef FIGURE_H
#define FIGURE_H

// Класс Figure - базовый класс для Треугольника и Четырехугольника - класс, который хранит только имя фигуры

#include<iostream>

class Figure {
protected:
    // Защищеное поле для хранения имени фигуры
    std::string name;

public:
    Figure(std::string name);   // Конструктор класса Figure
    
    std::string get_name();     // Метод получения имени фигуры
};

#endif

