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
    cout << "Фигура?\n0. Линия\n1. Квадрат\n";
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
        cout << "Выберите способ (Хоть разницы и нет):\n0. Через for.\n1. Через while\n";
        short way = 0;
        cin >> way;
        otchistka();
        if (way == 0) {
            int size = 1;
            cout << "Введите размер: ";
            cin >> size;
            otchistka();
            for (int i = 0; i < size; i++) {
                for (int i = 0; i < size; i++) {
                    cout << "* ";
                }
                cout << "" << endl;
            }
        }
        else {
            int i = 0;
            int b = 0;
            int size = 1;
            cout << "Введите размер: ";
            cin >> size;
            otchistka();
            while (i < size) {
                b = 0;
                while (b < size) {
                    cout << "* ";
                    b++;
                }
                cout << "" << endl;
                i++;
            }
        }
    }
    else
    {
        cout << "Такой фигуры нет.";
    }
    return 0;
}