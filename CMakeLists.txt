cmake_minimum_required(VERSION 3.16)
project(MyQtDatabaseApp VERSION 1.0 LANGUAGES CXX)

# Настройка стандарта C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Автоматические обработчики Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Пути к Qt (для Windows)
set(QT_DIR "C:/msys64/mingw64/lib/cmake/Qt6" CACHE PATH "Путь к Qt6")
set(CMAKE_PREFIX_PATH ${QT_DIR})

# Поиск необходимых компонентов Qt
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Sql)
 
if(NOT Qt6_FOUND)
    message(FATAL_ERROR "Qt6 не найден. Проверьте CMAKE_PREFIX_PATH.")
else()
    message(STATUS "Найдена Qt версии ${Qt6_VERSION}")
endif()

# Источники и заголовки
set(SOURCES
    Main.cpp
    MainWindow.cpp
    DatabaseManager.cpp
)

set(HEADERS
    MainWindow.h
    DatabaseManager.h
)

set(FORMS
    MainWindow.ui
)

# Добавление исполняемого файла
qt_add_executable(MyQtDatabaseApp
    ${SOURCES}
    ${HEADERS}
    ${FORMS}
)

# Подключение библиотек Qt
target_link_libraries(MyQtDatabaseApp PRIVATE
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
    Qt6::Sql
)

# Включение текущего каталога и папки сборки для заголовков
target_include_directories(MyQtDatabaseApp PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_BINARY_DIR}
)

# Дополнительные настройки для Windows
if(WIN32)
    # Настройка для сборки с MinGW
    if(MINGW)
        set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++")
    endif()
endif()

# Установка свойств для более чистого вывода
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)