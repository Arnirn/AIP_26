#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int tea;
	int* chai = &tea;
	cout << "Введите число: ";
	while (!(cin >> tea))
	{
		cout << "Ошибка! Введите целое число: ";
		cin.clear();
		cin.ignore(777, '\n');
	}

	if (*chai == 0)
		cout << "\nЗаданное число является нулем\n";
	if (*chai < 0)
		cout << "\nЗаданное число является отрицательным\n";
	if (*chai > 0)
		cout << "\nЗаданное число является положительным\n";

	cin.get();
	return 0;
}