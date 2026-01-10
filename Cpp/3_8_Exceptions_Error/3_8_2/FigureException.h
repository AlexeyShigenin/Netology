#ifndef FIGUREEXCEPTION_H
#define FIGUREEXCEPTION_H

#include <stdexcept>

// Класс исключения для ошибок создания фигур
class FigureException : public std::domain_error {
public:
    FigureException(const std::string& message);
};

#endif