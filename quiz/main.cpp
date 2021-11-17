#include <iostream>

using namespace std;

int settings_set = 1;
bool win = true;
int w_counter = 0;
int c_counter = 0;

//Создаём структуру для сомого вопроса. | Create structure for questions.
struct q_one {
    string quest;
    string answer;
    string w_answer[3];
};

//Обьявляем структуру как массив. | Announce structure how array.
q_one *questions;

//Инициализируем массив структуры со значениями. | We initialize the array of the structure with values.
void set_questions() {
    questions[0] = {"Тут должен быть 1 вопрос.", "Тут должен быть ответ на 1 вопрос.", "1", "2", "3"};
    questions[1] = {"Тут должен быть 2 вопрос.", "Тут должен быть ответ на 2 вопрос.", "1", "2", "3"};
    questions[2] = {"Тут должен быть 3 вопрос.", "Тут должен быть ответ на 3 вопрос.", "1", "2", "3"};
    questions[3] = {"Тут должен быть 4 вопрос.", "Тут должен быть ответ на 4 вопрос.", "1", "2", "3"};
    questions[4] = {"Тут должен быть 5 вопрос.", "Тут должен быть ответ на 5 вопрос.", "1", "2", "3"};
    questions[5] = {"Тут должен быть 6 вопрос.", "Тут должен быть ответ на 6 вопрос.", "1", "2", "3"};
    questions[6] = {"Тут должен быть 7 вопрос.", "Тут должен быть ответ на 7 вопрос.", "1", "2", "3"};
    questions[7] = {"Тут должен быть 8 вопрос.", "Тут должен быть ответ на 8 вопрос.", "1", "2", "3"};
    questions[8] = {"Тут должен быть 9 вопрос.", "Тут должен быть ответ на 9 вопрос.", "1", "2", "3"};
    questions[9] = {"Тут должен быть 10 вопрос.", "Тут должен быть ответ на 10 вопрос.", "1", "2", "3"};
    questions[10] = {"Тут должен быть 11 вопрос.", "Тут должен быть ответ на 11 вопрос.", "1", "2", "3"};
    questions[11] = {"Тут должен быть 12 вопрос.", "Тут должен быть ответ на 12 вопрос.", "1", "2", "3"};
    questions[12] = {"Тут должен быть 13 вопрос.", "Тут должен быть ответ на 13 вопрос.", "1", "2", "3"};
    questions[13] = {"Тут должен быть 14 вопрос.", "Тут должен быть ответ на 14 вопрос.", "1", "2", "3"};
    questions[14] = {"Тут должен быть 15 вопрос.", "Тут должен быть ответ на 15 вопрос.", "1", "2", "3"};
}

//Функция меню. | Menu function.
int menu() {
    string p_name;
    int menu;
    cout << "\tВикторина!\n\n[*] Введите имя игрока: ";
    cin >> p_name;
    cout << "Здавствуйте " << p_name << "\n\n[*] Меню:\n\n[1] Играть\n\n[2] Настройки\n\n[3] Выход\n";
    cin >> menu;
    return menu;
}

//Функция настроек. | Settings function.
void settings() {
    cout
            << "\tНастройки\n\n\n[*] Выберите кол-во вопросов:\n\n[1] Один случайный вопрос\n\n[2] Пять случайных вопросов\n\n[3] Пятнадцать случайных вопросов\n";
    cin >> settings_set;
}

//Игра с 1 (одним) вопросом. | Game with 1 (one) question.

//Основная функция. | The main function.
int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int select = menu();
    questions = new q_one[15];
    set_questions();
    if (select == 1) {
        switch (settings_set) {
            case 1:
                while (win == true) {
                    cout << "Вопрос 1:\n";
                    int random_question = rand() % 14 + 1;
                    cout << questions[random_question].quest << "\n\n" <<
                         questions[random_question].w_answer[0] << endl <<
                         questions[random_question].answer << endl <<
                         questions[random_question].w_answer[0] << endl <<
                         questions[random_question].w_answer[0] << endl <<
                         "\n\n[*] Выберите один правильный ответ:";
                    int answer;
                    cin >> answer;
                    if (answer == 2) {
                        win = false;
                        cout << "You win!!!\n";
                    } else {
                        cout << "Wrong. You lose :(\n\n";
                        w_counter++;
                        win = false;
                    }
                }
                break;
            case 2:
                while (win == true){
                    for (int i = 1; i < 6; i++) {
                        cout << "Вопрос " << i << ":\n";
                        int random_question = rand() % 14 + 1;
                        cout << questions[random_question].quest << "\n\n" <<
                             questions[random_question].w_answer[0] << endl <<
                             questions[random_question].answer << endl <<
                             questions[random_question].w_answer[0] << endl <<
                             questions[random_question].w_answer[0] << endl <<
                             "\n\n[*] Выберите один правильный ответ:";
                        int answer;
                        cin >> answer;
                        if (answer == 2) {
                            cout << "correct\n";
                            c_counter++;
                        } else {
                            cout << "Wrong :(\n\n";
                            w_counter++;
                        }
                    }
                    cout << "Правильных ответов: " << c_counter << "\nНе правильных ответов: " << w_counter;
                    if (w_counter > c_counter){
                        cout << "Ты выйграл!";
                    }
                    else{
                        cout << "\n\nТы проиграл :(";
                    }
                    win = false;
                }
                break;
            case 3:
                for (int i = 1; i < 16; i++) {
                    cout << "Вопрос " << i << ":\n";
                    int random_question = rand() % 14 + 1;
                    cout << questions[random_question].quest << "\n\n" <<
                         questions[random_question].w_answer[0] << endl <<
                         questions[random_question].answer << endl <<
                         questions[random_question].w_answer[0] << endl <<
                         questions[random_question].w_answer[0] << endl <<
                         "\n\n[*] Выберите один правильный ответ:";
                    int answer;
                    cin >> answer;
                    if (answer == 2) {
                        cout << "correct\n";
                        c_counter++;
                    } else {
                        cout << "Wrong :(\n\n";
                        w_counter++;
                    }
                }
                cout << "Правильных ответов: " << c_counter << "\nНе правильных ответов: " << w_counter;
                if (w_counter > c_counter){
                    cout << "Ты выйграл!";
                }
                else{
                    cout << "\n\nТы проиграл :(";
                }
                win = false;
                break;
        }
    } else if (select == 2) {
        settings();
        main();
    } else if (select == 3) {
        return 0;
    }
}
