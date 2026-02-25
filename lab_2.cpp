#include<iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));
	int massive[10];
	int checking = 0;
	int n, m;

	cout << "Массив из 10 целых чисел: \n\n";

	for (checking; checking < 10; checking++)                         //ввод и счет для а)
	{
		massive[checking] = rand() % 801 - 100;
		cout << massive[checking] << ", ";
		if (massive[checking] % 10 == 0)
			massive[checking] = 0;
	}
	checking = 0;
	cout << "\n\na) ";

	for (checking; checking < 10; checking++)                        // а)
	{
		cout << massive[checking] << ", ";
	}
	checking = 0;

	for (checking; checking < 10; checking++)                        // счет для б)
	{
		if (checking % 2 == 0)
			massive[checking] = massive[checking] * 2;
		if ((checking % 2 != 0) && (checking != 0))
			massive[checking] = massive[checking] / 2;
	}
	checking = 0;
	cout << "\n\nб) ";

	for (checking; checking < 10; checking++)                        // б)
	{
		cout << massive[checking] << ", ";
	}
	checking = 0;

	cout << "\n\nВведите два целых числа для последующих вычислений:\n";
	while (!(cin >> n))
	{
		cout << "Ошибка! Введите целое число: ";
		cin.clear();
		cin.ignore(777, '\n');
	}
	while (!(cin >> m))
	{
		cout << "Ошибка! Введите целое число: ";
		cin.clear();
		cin.ignore(777, '\n');
	}

	for (checking; checking < 10; checking++)                        // счет для в)
	{
		if ((massive[checking] % 2 != 0) && (massive[checking] != 0))
			massive[checking] = massive[checking] - m;
		if (checking % 2 == 0)
			massive[checking] = massive[checking] + n;
	}
	checking = 0;
	cout << "\n\nв) ";

	for (checking; checking < 10; checking++)                        // в)
	{
		cout << massive[checking] << ", ";
	}

	cout << "Для выхода нажмите 'Enter'\n\n\n";
	cin.get();
	return 0;
}