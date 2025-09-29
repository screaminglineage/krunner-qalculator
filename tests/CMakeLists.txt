# Test CMakeLists.txt
cmake_minimum_required(VERSION 3.16)

project(qalculator_runner_tests)

find_package(Qt6 REQUIRED COMPONENTS Core Test Widgets)
find_package(KF6 REQUIRED COMPONENTS Runner I18n CoreAddons)

# Enable C++17 standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Test executable for input validation
add_executable(test_qalculatorrunner
    test_qalculatorrunner.cpp
)

target_link_libraries(test_qalculatorrunner
    Qt6::Core
    Qt6::Test
    Qt6::Widgets
    KF6::Runner
    KF6::I18n
    KF6::CoreAddons
)

# Enable automatic MOC
set_property(TARGET test_qalculatorrunner PROPERTY AUTOMOC ON)

# Add the test
add_test(NAME test_qalculatorrunner COMMAND test_qalculatorrunner)

# Also add the main library as a dependency if we build it as a separate library
add_library(qalculatorrunner_lib
    ../src/qalculatorrunner.cpp
)

target_link_libraries(qalculatorrunner_lib
    Qt6::Core
    Qt6::Widgets
    KF6::Runner
    KF6::I18n
    KF6::CoreAddons
)

target_include_directories(qalculatorrunner_lib PUBLIC
    ../src
)

target_include_directories(test_qalculatorrunner PRIVATE
    ../src
)