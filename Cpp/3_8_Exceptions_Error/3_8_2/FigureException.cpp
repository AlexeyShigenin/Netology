// Класс исключения для ошибок создания фигур

#include "FigureException.h"

FigureException::FigureException(const std::string& message) : std::domain_error(message) {}
