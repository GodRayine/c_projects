#include <iostream>
using namespace std;

void rules(){
    cout << "[*] для одиночной игры:\n\n"
            "[1] Вы вводите координту(x и y) того места куда хотите поставить значёк\n"
            "[2] Компьютер ставит свой\n"
            "[3] Всё повторяеться до победы одной из сторон\n\n"
            "[*] для двух игроков\n\n"
            "[1] Игрок 1 вводит координту(x и y) того места куда хочет поставить значёк\n"
            "[2] Игрок 2 вводит координту(x и y) того места куда хочет поставить значёк\n"
            "[3] Всё повторяеться до победы одной из сторон\n\n";
}
void settings(){
    cout << "\tНастройки\n\n"
            "[*] Выберите размер поля:\n"
            "[1] 3x3\n"
            "[2] 4x4\n"
            "[3] 5x5\n";
}


int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int select = 1;
    const int play_ground_one = 3;
    const int play_ground_two = 4;
    const int play_ground_three = 5;

    cout << "\tКрестики нолики\n\n"
            "[*] Меню:\n"
            "[1] Играть\n"
            "[2] Настройки\n"
            "[3] Правила\n"
            "[4] Выход\n\n";
    int menu = 4;
    cin >> menu;
    switch (menu) {
        case 1:
            if (select == 1){
                int play_ground[play_ground_one][play_ground_one] = {
                        {1, 1, 1},
                        {1, 1, 1},
                        {1, 1, 1}
                };
            } else if (select == 2){
                int play_ground[play_ground_two][play_ground_two] = {
                        {1, 1, 1, 1},
                        {1, 1, 1, 1},
                        {1, 1, 1, 1},
                        {1, 1, 1, 1}
                };
            } else if (select == 3){
                int play_ground[play_ground_three][play_ground_three] = {
                        {1, 1, 1, 1, 1},
                        {1, 1, 1, 1, 1},
                        {1, 1, 1, 1, 1},
                        {1, 1, 1, 1, 1},
                        {1, 1, 1, 1, 1}
                };
            }
        case 2:
            settings();
            cin >> select;
            main();
        case 3:
            rules();
            cout << "[!] что бы продолжить, введите любой сивыол и нажмите \"Enter\"";
            char __skip;
            cin >> __skip;
            main();
        case 4:
            return 0;
    }
    return 0;
}
