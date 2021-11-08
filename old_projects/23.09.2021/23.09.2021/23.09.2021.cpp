#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	setlocale(0, "");
	string operation;
	float num1, num2, answer;
	cout << "Введите нужную операцию: \n";
	cout << "Возможные действия: \n'+'\n'-'\n'*'\n'/'\n'%' - остаток от деления\n'sqrt' - Квадратный корень\n'tan' - Тангенс\n'pow' - Возведение в стпень\n";
	cin >> operation;
	if (operation == "sqrt") {
		cout << "Введите число: \n";
		cin >> num1;
		answer = sqrt(num1);
		cout << "Ответ: ";	cout << answer;
	}
	else if (operation == "pow") {
		cout << "Введите число: \n";
		cin >> num1;
		cout << "Введите степень: \n";
		cin >> num2;
		answer = powf(num1, num2);
		cout << "Ответ: ";	cout << answer;
	}
	else if (operation == "tan") {
		cout << "Введите число: \n";
		cin >> num1;
		answer = tan(num1);
		cout << "Ответ: ";	cout << answer;
	}
	else if (operation != "sqrt" or operation != "tan" or operation != "^") {
		cout << "Введите первое число: \n";
		cin >> num1;
		cout << "Введите второе число: \n";
		cin >> num2;
		if (operation == "+") {
			answer = num1 + num2;	cout << "Ответ: ";	cout << answer;
		}
		else if (operation == "-") {
			answer = num1 - num2;	cout << "Ответ: ";	cout << answer;
		}
		else if (operation == "*") {
			answer = num1 * num2;	cout << "Ответ: ";	cout << answer;
		}
		else if (operation == "/") {
			answer = num1 / num2;	cout << "Ответ: ";	cout << answer;
		}
		else if (operation == "%") {
			answer = int(num1) % int(num2);	cout << "Ответ: ";	cout << answer;
		}
	}
	else {
	cout << "Вы ввели неверное значение.";
	}
	return 0;
}