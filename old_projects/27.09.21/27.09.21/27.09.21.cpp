#include <iostream>
using namespace std;

int main()
{
	setlocale(0,"");
	char menu;
	cout << "Выберите одно:\nВыйти - 0\nВывести список русских слов - 1\nВывести список английских слов - 2\n";
	cin >> menu;
	if (menu == '0') {
		return 0;
	}
	else if (menu == '1') {
		cout << "1. апартамент\n2. апатит\n3. апатия\n4. апелляция\n5. апельсин\n6. живец\n7. живность\n8. живодер\n9. живой\n10. живот\n11. нудист\n12. нудный\n13. нужда\n14. нужно\n15. нуль\n";
		cout << "Введите номер нужного вам слова:\n";
		int ru_words;
		cin >> ru_words;
		switch (ru_words)
		{
		case (1):
			cout << "apartment, suite";
			break;
		case (2):
			cout << "apatite";
			break;
		case (3):
			cout << "apathy, lassitude, torpor, indifference";
			break;
		case (4):
			cout << "appeal";
			break;
		case (5):
			cout << "orange";
			break;
		case (6):
			cout << "live bait, bait fish";
			break;
		case (7):
			cout << "poultry, fowl";
			break;
		case (8):
			cout << "flayer, knacker, slaughterer";
			break;
		case (9):
			cout << "live, living, lively, alive";
			break;
		case (10):
			cout << "stomach, belly, maw";
			break;
		case (11):
			cout << "nudist";
			break;
		case (12):
			cout << "tedious, tiresome, soggy";
			break;
		case (13):
			cout << "need, want, distress, poverty";
			break;
		case (14):
			cout << "must";
			break;
		case (15):
			cout << "zero, null";
			break;
		default:
			cout << "Ошибка.Неверное значение.";
			break;
		}
	}
	else {
		cout << "1. apartment\n2. apatite\n3. apathy\n4. appeal\n5. orange\n6. live bait\n7. poultry\n8. flayer\n9. live\n10. maw\n11. nudist\n12. tedious\n13. need\n14. must\n15. zero\n";
		cout << "Введите номер нужного вам слова:\n";
		int ru_words;
		cin >> ru_words;
		switch (ru_words)
		{
		case (1):
			cout << "апартамент";
			break;
		case (2):
			cout << "апатит";
			break;
		case (3):
			cout << "апатия";
			break;
		case (4):
			cout << "апелляция";
			break;
		case (5):
			cout << "апельсин";
			break;
		case (6):
			cout << "живец";
			break;
		case (7):
			cout << "живность";
			break;
		case (8):
			cout << "живодер";
			break;
		case (9):
			cout << "живой";
			break;
		case (10):
			cout << "живот";
			break;
		case (11):
			cout << "нудист";
			break;
		case (12):
			cout << "нудный";
			break;
		case (13):
			cout << "нужда";
			break;
		case (14):
			cout << "нужно";
			break;
		case (15):
			cout << "нуль";
			break;
		default:
			cout << "Ошибка.Неверное значение.";
			break;
		}
	}
	return 0;
}