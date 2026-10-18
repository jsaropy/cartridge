#include <iostream>

class Esp32 {
    public:
        bool led();
    private:
        bool detectsignal = false;
        bool sendsignal();
        bool startprocess();
        bool stopprocess();
};
