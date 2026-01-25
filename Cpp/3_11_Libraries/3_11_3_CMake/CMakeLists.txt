# CMakeList.txt: проект CMake для 3_11_3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("3_11_3")

# Подключение динамической библиотеки
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)
add_library(Leaver_Dynamic SHARED "Leaver_Dynamic.h" "Leaver_Dynamic.cpp")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (3_11_3  "Source.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 3_11_3 PROPERTY CXX_STANDARD 20)
endif()

# Связываем библиотеку с исполняемым файлом
target_link_libraries(3_11_3 Leaver_Dynamic)