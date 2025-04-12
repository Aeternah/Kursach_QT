cmake_minimum_required(VERSION 3.16)  # Обновите версию для Qt6

project(MDQT VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Настройки Qt
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Поиск Qt6
find_package(Qt6 REQUIRED COMPONENTS Core Gui Widgets Sql)

# Добавление исполняемого файла
qt_add_executable(MDQT
    main.cpp
    MainWindow.cpp
    MainWindow.h
    MainWindow.ui
    DatabaseManager.cpp
    DatabaseManager.h
)

# Подключение библиотек Qt
target_link_libraries(MDQT PRIVATE 
    Qt6::Core
    Qt6::Gui
    Qt6::Widgets
    Qt6::Sql
)

# Включение текущего каталога
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Настройка для Windows
if(WIN32)
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -Wl,--subsystem,windows")
endif()