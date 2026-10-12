#include <string>
#include <iostream>

class Camera {
    public:
        std::string name; 

        std::string getname();
        bool turnon();
        bool detect();
};

