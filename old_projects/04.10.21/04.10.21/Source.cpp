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
    cout << "������?\n0. �����\n1. �������\n";
    cin >> figure;
    otchistka();
    if (figure == 0) {
        char sym;
        cout << "�� ���� ������?\n";
        cin >> sym;
        otchistka();
        int size;
        cout << "������?\n";
        cin >> size;
        otchistka();
        short type;
        cout << "����������� ��� �������������?\n";
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
        cout << "�������� ������ (���� ������� � ���):\n0. ����� for.\n1. ����� while\n";
        short way = 0;
        cin >> way;
        otchistka();
        if (way == 0) {
            int size = 1;
            cout << "������� ������: ";
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
            cout << "������� ������: ";
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
        cout << "����� ������ ���.";
    }
    return 0;
}