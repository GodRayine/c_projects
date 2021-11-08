#include <iostream>
using namespace std;

void clear() {
	system("cls");
}
void back_ground_color() {
	system("color 0");
}
void text_color() {
	system("color c");
}
int size_int() {
	return sizeof(int);
}
int size_char() {
	return sizeof(char);
}
int size_double() {
	return sizeof(double);
}
int size_float() {
	return sizeof(float);
}
int size_bool() {
	return sizeof(bool);
}
void menu() {
	cout << "[!]\tHello!\n\n";
	cout << "[!] Выбитере один из пунктов:\n";
	cout << "[1] Вывести все размеры типов данных.\n[2] Изменить консоль.\n";
}
void square() {
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << '#';
		}
		cout << endl;
	}
}

int main() {
	setlocale(0, "");
	menu();
	int choice = 0;
	cin >> choice;
	clear();
	if (choice == 1) {
		cout << "Int => " << size_int() << endl;
		cout << "Char => " << size_char() << endl;
		cout << "Double => " << size_double() << endl;
		cout << "Float => " << size_float() << endl;
		cout << "Bool => " << size_bool() << endl;
	}
	else {
		back_ground_color();
		text_color();
		cout << "\tЦвет изменён!";
	}
	return 0;
}