
#include <iostream>
using namespace std;

void otchistka()
{
    system("cls");
}

int main()
{
    setlocale(0, "");
    short figure;
    cout << "Фигура?\n0. Линия\n1. Квадрат\n2. Прямоугольник\n3. Треугольник\n4. Решётка\n5. Крестик\n6. Плюсик\n";
    cin >> figure;
    otchistka();
    if (figure == 0) {
        char sym;
        cout << "Из чего делаем?\n";
        cin >> sym;
        otchistka();
        int size;
        cout << "Размер?\n";
        cin >> size;
        otchistka();
        short type;
        cout << "Вертикально или горизонтально?\n";
        cin >> type;
        otchistka();
        if (type == 0) {
            int i = 0;
            while (i < size)
            {
                cout << sym << endl;
                i++;
            }
        }
        else
        {
            int i = 0;
            while (i < size)
            {
                cout << sym;
                i++;
            }
        }
    }
    else if (figure == 1) {

        int size = 1;
        cout << "Введите размер: ";
        cin >> size;
        otchistka();
        int empty = 0;
        cout << "Он пустой?\n0. Нет\n1. Да\n";
        cin >> empty;
        otchistka();
        if (empty == 0) {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    cout << "* ";
                }
                cout << "" << endl;
            }
        }
        else
        {
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (i == 0 or i == size - 1 or j == 0 or j == size - 1)
                    {
                        cout << "* ";
                    }
                    else
                    {
                        cout << "  ";
                    }
                }
                cout << "" << endl;
            }
        }
    }
    else if (figure == 2)
    {
        int height = 0;
        int width = 0;
        int empty = 0;
        cout << "Введите высоту прямоугольника: \n";
        cin >> height;
        cout << "Введите ширину прямоугольника: \n";
        cin >> width;
        cout << "Он полый?\n0. Нет\n1. Да\n";
        cin >> empty;
        otchistka();
        if (empty == 1) {
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    if (i == 0 or i == height - 1 or j == 0 or j == width - 1) {
                        cout << "* ";
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << "" << endl;
            }
        }
        else {
            for (int i = 0; i < height; i++) {
                for (int j = 0; j < width; j++) {
                    cout << "* ";
                }
                cout << "" << endl;
            }
        }
    }
    else if (figure == 3)
    {
        int osnovanie = 0;
        cout << "Введите основание треугольника (Только нечётные): \n";
        cin >> osnovanie;
        otchistka();
        if (osnovanie % 2 == 0)
        {
            cout << "Error";
        }
        else {
            int empty = 0;
            cout << "Он пустой?\n0. Нет\n1. Да\n";
            cin >> empty;
            otchistka();
            int sentr = osnovanie / 2;
            if (empty == 0) {
                for (int i = 0; i < sentr + 1; i++)
                {
                    for (int j = 0; j < osnovanie; j++)
                    {
                        if ((j < sentr - i || j > sentr + i) && j != sentr) {
                            cout << ". ";
                        }
                        else {
                            cout << "* ";
                        }
                    }
                    cout << "" << endl;
                }
            }
            else
            {
                for (int i = 0; i < osnovanie; i++) {
                    for (int j = 0; j < osnovanie; j++) {
                        if ((j == sentr + i or j == sentr - i) or i == sentr) {
                            cout << "* ";
                        }
                        else {
                            cout << "  ";
                        }
                    }
                    if (i > sentr) {
                        break;
                    }
                    cout << "\n";
                }
            }
        }
    }
    else if (figure == 4) {
        int size = 1;
        cout << "Введите размер: ";
        cin >> size;
        otchistka();
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if ((i % 2 == 0 or j % 2 == 0) and i != 0 and j != 0 and i != size - 1 and j != size - 1) {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << "" << endl;
        }
    }
    else if (figure == 5) {
        int size = 1;
        cout << "Введите размер (Только не чётное): ";
        cin >> size;
        int centr = size / 2;
        otchistka();
        if (size % 2 != 0) {
            
            for (int i = 0; i < size; i++) {
                for (int j = 0; j < size; j++) {
                    if (j == i or j == size - 1 - i) {
                        cout << "* ";
                    }
                    else {
                        cout << ". ";
                    }
                }
                cout << "\n";
            }
        }
        else {
            cout << "Error";
        }
    }
    else if (figure == 6) {
        int size = 1;
        cout << "Введите размер (Только не чётное): ";
        cin >> size;
        int centr = size / 2;
        otchistka();
        if (size % 2 != 0) {
            for (int y = 0; y < size; y++) {
                for (int x = 0; x < size; x++) {
                    if (x == centr or y == centr) {
                        cout << "* ";
                    }
                    else {
                        cout << ". ";
                    }
                }
                cout << "\n";
            }
        }
        else {
            cout << "Error";
        }
    }
    else
    {
        cout << "Такой фигуры нет.";
    }
    return 0;
}
