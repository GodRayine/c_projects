#include <iostream>
using namespace std;
void clear() {
	system("cls");
}

int main() {
	setlocale(0, "");
	int menu = 1;
	cout << "[!]\t???????? ???? ?? ???????:\n[1]\t?????? ???? 15?15\n[2]\t?????? ???? 20?20\n[3]\t?????? ???? 30?30\n\n";
	cin >> menu;
	clear();
	if (menu == 1) {
		const int lab1_dim1 = 15;
		int lab1[lab1_dim1][lab1_dim1] = {
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,0,0,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,0,0,1,1,1,1,1},
			{1,1,1,1,1,1,1,1,0,0,1,1,1,1,1},
			{1,1,1,1,1,1,1,1,0,0,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,0,0,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,0,0,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1}
		};
		for (int i = 0; i < lab1_dim1; i++) {
			for (int j = 0; j < lab1_dim1; j++) {
				if (lab1[i][j] == 1)
				{
					cout << "* ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
	}
	else if (menu == 2)
	{
		const int lab2_dim1 = 20;
		int lab2[lab2_dim1][lab2_dim1] = {
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1},
			{1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
			{1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,0,0,0,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1}
		};
		for (int i = 0; i < lab2_dim1; i++) {
			for (int j = 0; j < lab2_dim1; j++) {
				if (lab2[i][j] == 1)
				{
					cout << "* ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
	}
	else if (menu == 3)
	{
	
		const int lab3_dim1 = 30;
		int lab3[lab3_dim1][lab3_dim1] = {
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,0,0,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,0,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,0,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
			{1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
		};
		for (int i = 0; i < lab3_dim1; i++) {
			for (int j = 0; j < lab3_dim1; j++) {
				if (lab3[i][j] == 1)
				{
					cout << "* ";
				}
				else
				{
					cout << "  ";
				}
			}
			cout << endl;
		}
	}
	else{
		cout << "Error!";
	}
	return 0;
}