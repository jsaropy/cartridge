#include <iostream>
#include <camera.hpp>

int main(void) {
    std::cout << "compiled main.cpp\n";

    Camera logitech;
    if (!logitech.turnon())
        std::cout << "Failed to turn on camera";

    logitech.detect();
    return 0;
}
