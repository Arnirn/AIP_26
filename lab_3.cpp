#include<iostream>
#include<ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(0));

	const int stroka = 7, stolb = 3;

	int massive[stroka][stolb];
	cout << "Массив:\n";
	for (int stroka_ = 0; stroka_ < stroka; stroka_++)
	{
		for (int stolb_ = 0; stolb_ < stolb; stolb_++)
		{
			massive[stroka_][stolb_] = rand() % 201 - 100;
			cout << massive[stroka_][stolb_] << ", ";
		}
		cout << endl;
	}
	cout << endl << endl;

	bool continue_;
	for (int stroka_ = 0; stroka_ < stroka; stroka_++)
	{
		continue_ = true;
		for (int stolb_ = 0; stolb_ < stolb && continue_; stolb_++)
		{
			if (massive[stroka_][stolb_] != 0 && massive[stroka_][stolb_] % 2 != 0)
				continue_ = true;
			else
				continue_ = false;
		}
		if (continue_ == true)
		{
			cout << "\na) Минимальный номер строки массива, состоящей только из четных элементов: " << stroka_ + 1 << endl << endl;
			break;
		}
	}
	if (continue_ == false)
		cout << "\na)Строки массива, состоящей только из четных элементов, не существует\n\n";

	int a;

	cout << "\nВведите число 'a' для поиска строки, состоящей из кратных ему элементов: ";
	while (!(cin >> a))
	{
		cout << "\nОшибка! Введите целое число: ";
		cin.clear();
		cin.ignore(777, '\n');
	}

	for (int stroka_ = 0; stroka_ < stroka; stroka_++)
	{
		continue_ = true;
		for (int stolb_ = 0; stolb_ < stolb && continue_; stolb_++)
		{
			if (massive[stroka_][stolb_] % a == 0)
				continue_ = true;
			else
				continue_ = false;
		}
		if (continue_ == true)
		{
			cout << "\n\nб) Минимальный номер строки массива, состоящей только из кратных заданному числу элементов: " << stroka_ + 1 << endl << endl;
			break;
		}
	}
	if (continue_ == false)
		cout << "\n\nб)Строки массива, состоящей только из кратных заданному числу элементов, не существует\n\n";

	cin.get();
	return 0;
}