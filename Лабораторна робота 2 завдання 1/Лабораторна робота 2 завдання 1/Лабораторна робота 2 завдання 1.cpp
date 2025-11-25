#include <iostream>
#include <cmath> 
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    double x, y;

    std::cout << "Введіть значення x: ";
    std::cin >> x;

    if (x < -1) {
        y = pow(sin(x), 3) * pow(cos(x), 2);
    }
    else {
        y = log(abs(x) + 2.0) * exp(x + 1.0);
    }

    std::cout << "Значення y = " << y << std::endl;

    return 0;
}