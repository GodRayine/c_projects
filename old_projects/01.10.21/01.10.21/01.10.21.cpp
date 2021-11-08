#include <iostream>
using namespace std;

void otchistka()
{
    system("cls");
}
int main()
{
    setlocale(0,"");
    short figure;
    cout << "Фигура?\n";
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
    else
    {
        cout << "Такой фигуры нет.";
    }
    return 0;
}