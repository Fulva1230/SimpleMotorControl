# Define CMake's minimum version (must-do) and the project's name and supported languages
cmake_minimum_required(VERSION 3.8.2)
project(ArduinoSample)

# Call a framework utility function, passing it information about the hardware board that will be used - This function returns a structure known only to the framework
get_board_id(board_id nano atmega328)

# Create an executable suitable for Arduino using CMake-style target-creation
add_arduino_executable(ArduinoSample ${board_id} main.cpp)
# Upload the created target through a connected Serial Port (Where your board is connected to)
# upload_arduino_target(ArduinoSample "${board_id}" COM3)

#add "-DCMAKE_TOOLCHAIN_FILE=cmake/Arduino-Toolchain.cmake" to cmake option