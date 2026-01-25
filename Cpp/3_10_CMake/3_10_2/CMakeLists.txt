# CMakeList.txt: проект CMake для 3_10_2; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("3_10_2")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (3_10_2	"src/main.cpp" 
						"src/Classes/EquilateralTriangle.cpp" "src/Classes/EquilateralTriangle.h" 
						"src/Classes/Figure.cpp" "src/Classes/Figure.h" 
						"src/Classes/IsoscelesTriangle.cpp" "src/Classes/IsoscelesTriangle.h" 
						"src/Classes/Parallelogram.cpp" "src/Classes/Parallelogram.h" 
						"src/Classes/Quadrangle.cpp" "src/Classes/Quadrangle.h" 
						"src/Classes/Rectangle.cpp" "src/Classes/Rectangle.h" 
						"src/Classes/RectangularTriangle.cpp" "src/Classes/RectangularTriangle.h" 
						"src/Classes/Rhombus.cpp" "src/Classes/Rhombus.h" 
						"src/Classes/Square.cpp" "src/Classes/Square.h" 
						"src/Classes/Triangle.cpp" "src/Classes/Triangle.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 3_10_2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
