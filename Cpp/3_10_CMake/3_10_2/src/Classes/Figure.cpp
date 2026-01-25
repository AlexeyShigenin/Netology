// Класс Figure - базовый класс для Треугольника и Четырехугольника - класс, который хранит только имя фигуры

#include "Figure.h"

// Конструктор класса Figure
Figure::Figure(std::string name) {
    this->name = name;
}
// Метод получения имени фигуры
std::string Figure::get_name() {
    return name;
}