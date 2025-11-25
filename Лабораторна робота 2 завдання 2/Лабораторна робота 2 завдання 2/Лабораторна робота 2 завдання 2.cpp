#include <iostream>
using namespace std;
#include <windows.h> 

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int trainNumber;

    cout << "Введіть номер поїзда: ";
    cin >> trainNumber;

    cout << "Пункт призначення: ";
    switch (trainNumber) {
    case 1:
        cout << "Київ" << endl;
        break;
    case 2:
        cout << "Львів" << endl;
        break;
    case 3:
        cout << "Одеса" << endl;
        break;
    case 4:
        cout << "Харків" << endl;
        break;
    case 5:
        cout << "Дніпро" << endl;
        break;
    default:
        cout << "Невідомий номер поїзда" << endl;
        break;
    }

    return 0;
}
