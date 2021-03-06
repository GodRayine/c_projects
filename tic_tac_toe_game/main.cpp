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
int settings(){
    cout << "\tНастройки\n\n"
            "[*] Выберите размер поля:\n"
            "[1] 3x3\n"
            "[2] 4x4\n"
            "[3] 5x5\n";
    int select;
    cin >> select;
    return select;
}
/*
bool checkWinCondition(){
    switch (boardSize)
    {
        case 3:
            
            break;
        case 4:
            if ((board4[0][0] == board4[0][1] && board4[0][1] == board4[0][2] && board4[0][2] == board4[0][3] && board4[0][0] == 'x')
                || (board4[1][0] == board4[1][1] && board4[1][1] == board4[1][2] && board4[1][2] == board4[1][3] && board4[1][0] == 'x')
                || (board4[2][0] == board4[2][1] && board4[2][1] == board4[2][2] && board4[2][2] == board4[2][3] && board4[2][0] == 'x')
                || (board4[3][0] == board4[3][1] && board4[3][1] == board4[3][2] && board4[3][2] == board4[3][3] && board4[3][0] == 'x')
                || (board4[0][0] == board4[1][0] && board4[1][0] == board4[2][0] && board4[2][0] == board4[3][0] && board4[0][0] == 'x')
                || (board4[0][1] == board4[1][1] && board4[1][1] == board4[2][1] && board4[2][1] == board4[3][1] && board4[0][1] == 'x')
                || (board4[0][2] == board4[1][2] && board4[1][2] == board4[2][2] && board4[2][2] == board4[3][2] && board4[0][2] == 'x')
                || (board4[0][3] == board4[1][3] && board4[1][3] == board4[2][3] && board4[2][3] == board4[3][3] && board4[0][0] == 'x')) {
                winner = 'x';
                return true;
            }
            else if ((board4[0][0] == board4[0][1] && board4[0][1] == board4[0][2] && board4[0][2] == board4[0][3] && board4[0][0] == 'o')
                     || (board4[1][0] == board4[1][1] && board4[1][1] == board4[1][2] && board4[1][2] == board4[1][3] && board4[1][0] == 'o')
                     || (board4[2][0] == board4[2][1] && board4[2][1] == board4[2][2] && board4[2][2] == board4[2][3] && board4[2][0] == 'o')
                     || (board4[3][0] == board4[3][1] && board4[3][1] == board4[3][2] && board4[3][2] == board4[3][3] && board4[3][0] == 'o')
                     || (board4[0][0] == board4[1][0] && board4[1][0] == board4[2][0] && board4[2][0] == board4[3][0] && board4[0][0] == 'o')
                     || (board4[0][1] == board4[1][1] && board4[1][1] == board4[2][1] && board4[2][1] == board4[3][1] && board4[0][1] == 'o')
                     || (board4[0][2] == board4[1][2] && board4[1][2] == board4[2][2] && board4[2][2] == board4[3][2] && board4[0][2] == 'o')
                     || (board4[0][3] == board4[1][3] && board4[1][3] == board4[2][3] && board4[2][3] == board4[3][3] && board4[0][0] == 'o')) {
                winner = 'o';
                return true;
            }
            break;
        case 5:
            if ((board5[0][0] == board5[0][1] && board5[0][1] == board5[0][2] && board5[0][2] == board5[0][3] && board5[0][3] == board5[0][4] && board5[0][0] == 'x')
                || (board5[1][0] == board5[1][1] && board5[1][1] == board5[1][2] && board5[1][2] == board5[1][3] && board5[1][3] == board5[1][4] && board5[1][0] == 'x')
                || (board5[2][0] == board5[2][1] && board5[2][1] == board5[2][2] && board5[2][2] == board5[2][3] && board5[2][3] == board5[2][4] && board5[2][0] == 'x')
                || (board5[3][0] == board5[3][1] && board5[3][1] == board5[3][2] && board5[3][2] == board5[3][3] && board5[3][3] == board5[3][4] && board5[3][0] == 'x')
                || (board5[4][0] == board5[4][1] && board5[4][1] == board5[4][2] && board5[4][2] == board5[4][3] && board5[4][3] == board5[4][4] && board5[4][0] == 'x')
                || (board5[0][0] == board5[1][0] && board5[1][0] == board5[2][0] && board5[2][0] == board5[3][0] && board5[3][0] == board5[4][0] && board5[0][0] == 'x')
                || (board5[0][1] == board5[1][1] && board5[1][1] == board5[2][1] && board5[2][1] == board5[3][1] && board5[3][1] == board5[4][1] && board5[0][1] == 'x')
                || (board5[0][2] == board5[1][2] && board5[1][2] == board5[2][2] && board5[2][2] == board5[3][2] && board5[3][2] == board5[4][2] && board5[0][2] == 'x')
                || (board5[0][3] == board5[1][3] && board5[1][3] == board5[2][3] && board5[2][3] == board5[3][3] && board5[3][3] == board5[4][3] && board5[0][3] == 'x')
                || (board5[0][4] == board5[1][4] && board5[1][4] == board5[2][4] && board5[2][4] == board5[3][4] && board5[3][4] == board5[4][4] && board5[0][4] == 'x')
                || (board5[0][0] == board5[1][1] && board5[1][1] == board5[2][2] && board5[2][2] == board5[3][3] && board5[3][3] == board5[4][4] && board5[0][0] == 'x')
                || (board5[0][4] == board5[1][3] && board5[1][3] == board5[2][2] && board5[2][2] == board5[3][1] && board5[3][1] == board5[4][0] && board5[0][4] == 'x')) {
                winner = 'x';
                return true;
            }
            else if ((board5[0][0] == board5[0][1] && board5[0][1] == board5[0][2] && board5[0][2] == board5[0][3] && board5[0][3] == board5[0][4] && board5[0][0] == 'o')
                     || (board5[1][0] == board5[1][1] && board5[1][1] == board5[1][2] && board5[1][2] == board5[1][3] && board5[1][3] == board5[1][4] && board5[1][0] == 'o')
                     || (board5[2][0] == board5[2][1] && board5[2][1] == board5[2][2] && board5[2][2] == board5[2][3] && board5[2][3] == board5[2][4] && board5[2][0] == 'o')
                     || (board5[3][0] == board5[3][1] && board5[3][1] == board5[3][2] && board5[3][2] == board5[3][3] && board5[3][3] == board5[3][4] && board5[3][0] == 'o')
                     || (board5[4][0] == board5[4][1] && board5[4][1] == board5[4][2] && board5[4][2] == board5[4][3] && board5[4][3] == board5[4][4] && board5[4][0] == 'o')
                     || (board5[0][0] == board5[1][0] && board5[1][0] == board5[2][0] && board5[2][0] == board5[3][0] && board5[3][0] == board5[4][0] && board5[0][0] == 'o')
                     || (board5[0][1] == board5[1][1] && board5[1][1] == board5[2][1] && board5[2][1] == board5[3][1] && board5[3][1] == board5[4][1] && board5[0][1] == 'o')
                     || (board5[0][2] == board5[1][2] && board5[1][2] == board5[2][2] && board5[2][2] == board5[3][2] && board5[3][2] == board5[4][2] && board5[0][2] == 'o')
                     || (board5[0][3] == board5[1][3] && board5[1][3] == board5[2][3] && board5[2][3] == board5[3][3] && board5[3][3] == board5[4][3] && board5[0][3] == 'o')
                     || (board5[0][4] == board5[1][4] && board5[1][4] == board5[2][4] && board5[2][4] == board5[3][4] && board5[3][4] == board5[4][4] && board5[0][4] == 'o')
                     || (board5[0][0] == board5[1][1] && board5[1][1] == board5[2][2] && board5[2][2] == board5[3][3] && board5[3][3] == board5[4][4] && board5[0][0] == 'o')
                     || (board5[0][4] == board5[1][3] && board5[1][3] == board5[2][2] && board5[2][2] == board5[3][1] && board5[3][1] == board5[4][0] && board5[0][4] == 'o')) {
                winner = 'o';
                return true;
            }
            break;
    }

    return false;
}
*/

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int select = 1;
    cout << "\tКрестики нолики\n\n"
            "[*] Меню:\n"
            "[1] Играть\n"
            "[2] Настройки\n"
            "[3] Правила\n"
            "[4] Выход\n\n";
    int menu = 4;
    cin >> menu;

    bool win = true;
    char who_win;
    switch (menu) {
        case 1:
            if (select == 1){
                int play_ground_3x3[3][3] = {
                        {1, 1, 1},
                        {1, 1, 1},
                        {1, 1, 1}
                };
                cout << "\tИгра начинаеться\n\n";
                while (win == true){
                    if ((play_ground_3x3[0][0] == play_ground_3x3[0][1] && play_ground_3x3[0][1] == play_ground_3x3[0][2] && play_ground_3x3[0][0] == 2)
                        || (play_ground_3x3[1][0] == play_ground_3x3[1][1] && play_ground_3x3[1][1] == play_ground_3x3[1][2] && play_ground_3x3[1][0] == 2)
                        || (play_ground_3x3[2][0] == play_ground_3x3[2][1] && play_ground_3x3[2][1] == play_ground_3x3[2][2] && play_ground_3x3[2][0] == 2)
                        || (play_ground_3x3[0][0] == play_ground_3x3[1][0] && play_ground_3x3[1][0] == play_ground_3x3[2][0] && play_ground_3x3[0][0] == 2)
                        || (play_ground_3x3[0][1] == play_ground_3x3[1][1] && play_ground_3x3[1][1] == play_ground_3x3[2][1] && play_ground_3x3[0][1] == 2)
                        || (play_ground_3x3[0][2] == play_ground_3x3[1][2] && play_ground_3x3[1][2] == play_ground_3x3[2][2] && play_ground_3x3[0][2] == 2)
                        || (play_ground_3x3[0][0] == play_ground_3x3[1][1] && play_ground_3x3[1][1] == play_ground_3x3[2][2] && play_ground_3x3[0][0] == 2)
                        || (play_ground_3x3[0][2] == play_ground_3x3[1][1] && play_ground_3x3[1][1] == play_ground_3x3[2][0] && play_ground_3x3[0][2] == 2)) {
                        win = false;
                        who_win = 1;
                    }
                    else if ((play_ground_3x3[0][0] == play_ground_3x3[0][1] && play_ground_3x3[0][1] == play_ground_3x3[0][2] && play_ground_3x3[0][0] == 3)
                             || (play_ground_3x3[1][0] == play_ground_3x3[1][1] && play_ground_3x3[1][1] == play_ground_3x3[1][2] && play_ground_3x3[1][0] == 3)
                             || (play_ground_3x3[2][0] == play_ground_3x3[2][1] && play_ground_3x3[2][1] == play_ground_3x3[2][2] && play_ground_3x3[2][0] == 3)
                             || (play_ground_3x3[0][0] == play_ground_3x3[1][0] && play_ground_3x3[1][0] == play_ground_3x3[2][0] && play_ground_3x3[0][0] == 3)
                             || (play_ground_3x3[0][1] == play_ground_3x3[1][1] && play_ground_3x3[1][1] == play_ground_3x3[2][1] && play_ground_3x3[0][1] == 3)
                             || (play_ground_3x3[0][2] == play_ground_3x3[1][2] && play_ground_3x3[1][2] == play_ground_3x3[2][2] && play_ground_3x3[0][2] == 3)
                             || (play_ground_3x3[0][0] == play_ground_3x3[1][1] && play_ground_3x3[1][1] == play_ground_3x3[2][2] && play_ground_3x3[0][0] == 3)
                             || (play_ground_3x3[0][2] == play_ground_3x3[1][1] && play_ground_3x3[1][1] == play_ground_3x3[2][0] && play_ground_3x3[0][2] == 3)) {
                        win = false;
                        who_win = 2;
                    }
                    if (win == true) {
                        const int size = 3;
                        for (int y = 0; y < size; y++) {
                            for (int x = 0; x < size; x++) {
                                if (play_ground_3x3[y][x] == 1) {
                                    cout << "* ";
                                } else if (play_ground_3x3[y][x] == 2) {
                                    cout << "X ";
                                } else if (play_ground_3x3[y][x] == 3) {
                                    cout << "0 ";
                                }
                            }
                            cout << endl;
                        }
                        cout << "[Player 1 \"x\": ]";
                        int x = 0;
                        cin >> x;
                        cout << "[Player 1 \"y\"]";
                        int y = 0;
                        cin >> y;
                        play_ground_3x3[y][x] = 2;
                        bool bot_turn = true;
                        int b_x = 0;
                        int b_y = 0;
                        while (bot_turn == true) {
                            if (play_ground_3x3[b_y][b_x] != 2 and play_ground_3x3[b_y][b_x] != 3) {
                                play_ground_3x3[b_y][b_x] = 3;
                                bot_turn = false;
                            } else {
                                b_y = 0 + rand() % size;
                                b_x = 0 + rand() % size;
                            }
                        }
                    }
                    else if (win == false and who_win == 1) {
                        cout << "!!! Ты выйграл !!!";
                        return 0;
                    }
                    else if (win == false and who_win == 2) {
                        cout << "!!! Ты проиграл !!!";
                        return 0;
                    }
                }
            }

        case 2:
            select = settings();
            main();
            break;
        case 3:
            rules();
            cout << "[!] что бы продолжить, введите любой сивыол и нажмите \"Enter\"";
            char _skip;
            cin >> _skip;
            main();
            break;
        case 4:
            return 0;
    }
    return 0;
}
