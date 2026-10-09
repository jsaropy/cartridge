#include <string>
#include <iostream>

class Camera {
    public:
        std::string name; 

        std::string cameraname();
        bool turnon();
        bool detect();
};

