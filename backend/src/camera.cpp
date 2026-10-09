#include <camera.hpp>
#include <iostream>

bool Camera::turnon() {
    std::cout << "Camera turned on\n";
    return true;
}

bool Camera::detect() {
    std::cout << "Camera detected object\n";
    return true;
}
