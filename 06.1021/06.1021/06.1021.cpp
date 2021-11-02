
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
        cout << "Фигура?\n0. Линия\n1. Квадрат\n2. Прямоугольник\n";
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
                for (int i = 0; i< height; i++) {
                    for (int j = 0; j < width; j++) {
                        cout << "* ";
                    }
                    cout << "" << endl;
                }
            }
        }
        else
        {
            cout << "Такой фигуры нет.";
        }
        return 0;
    }
