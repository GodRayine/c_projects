#include <iostream>
#include <math.h>
using namespace std;

void clear() {
	system("cls");
}
float calculator(float num1, float num2, char operation) {
	if (operation == '/' and num2 == 0) return -1;
	switch (operation)
	{
	case '+':
		return num1 + num2;
	case '-':
		return num1 - num2;
	case '*':
		return num1 * num2;
	case '/':
		return num1 / num2;
	case '^':
		return pow(num1, num2);
	default:
		return -2;
	}
}

int main() {
	setlocale(0,"");

	cout << "\t�����������\n\n\n[!]\t������� ��������:\n\n";
	cout << "[*]\t������ �������� => ";
	float num1 = 0;
	cin >> num1;
	cout << "[*]\t������ �������� => ";
	float num2 = 0;
	cin >> num2;
	cout << "[*]\t������� �������� �������� => ";
	char operation;
	cin >> operation;
	/*if (operation == '^') {
		cout << "[!]\t��������������: ��� ���������� � �������, ����� ����� ������� ����� ���������.\n   \t�� ��������? [y/n]\n";
		char y_or_n;
		cin >> y_or_n;
		if (y_or_n == 'n') return 0;
	}*/
	clear();
	if (calculator(num1, num2, operation) == -1) {
		cout << "\tError!\n�� ���� ������ ������.";
		return 0;
	}
	else if (calculator(num1, num2, operation) == -2) {
		cout << "\tError\n����� �������� ���.";
		return 0;
	}
	cout << "[=]\t�����: " << calculator(num1, num2, operation) << '.';
	return 0;
}