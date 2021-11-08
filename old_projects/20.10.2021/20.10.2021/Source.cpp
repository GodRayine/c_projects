#include <iostream>
using namespace std;

void clear() {
	system("cls");
}

int main() {
	int num[10] = {};
	short short_num[10] = {};
	long long_num[10] = {};
	float float_num[10] = { 1.1,1.2,1.3,{} };
	double double_num[10] = { 1.1,1.2,1.3,{} };
	char symbol[10] = { '. ','* ','# ','$ ',{} };
	bool true_false[10] = { '0','1','0','0','1',{} };
	string str[10] = {};

	for (int i = 0; i < 10; i++) {
		cout << "Array num: \n\n" << "[" << i + 1 << "]" << num[i] << endl;
	}
	for (int i = 0; i < 10; i++) {
		cout << "Array short_num: \n\n" << "[" << i + 1 << "]" << short_num[i] << endl;
	}
	for (int i = 0; i < 10; i++) {
		cout << "Array long_num: \n\n" << "[" << i + 1 << "]" << long_num[i] << endl;
	}
	for (int i = 0; i < 10; i++) {
		cout << "Array float_num: \n\n" << "[" << i + 1 << "]" << float_num[i] << endl;
	}
	for (int i = 0; i < 10; i++) {
		cout << "Array double_num: \n\n" << "[" << i + 1 << "]" << double_num[i] << endl;
	}
	for (int i = 0; i < 10; i++) {
		cout << "Array symbol: \n\n" << "[" << i + 1 << "]" << symbol[i] << endl;
	}
	for (int i = 0; i < 10; i++) {
		cout << "Array true_false: \n\n" << "[" << i + 1 << "]" << true_false[i] << endl;
	}
	for (int i = 0; i < 10; i++) {
		cout << "Array str: \n\n" << "[" << i + 1 << "]" << str[i] << endl;
	}
	return 0;
}