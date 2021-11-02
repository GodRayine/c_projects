#include <iostream>

int main()
{
    setlocale(0,"");
    int a;
    std::cout << "Введите номер времени года:"; cin >> a;
    if (a == 0){
        std::cout << "Лето";
    }
    else if (a == 1) {
        std::cout << "Осень";
    }
    else if (a == 2) {
        std::cout << "Зима";
    }
    else if (a == 3) {
        std::cout << "Весна";
    }
    else {
        std::cout << "Вы ввели неверное значение.";
    }
}
