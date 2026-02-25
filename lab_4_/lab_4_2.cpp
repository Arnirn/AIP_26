#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int ugu, aga;
	int* ugus = &ugu;
	int* agas = &aga;

	cout << "Введите первое число: ";
	while (!(cin >> ugu))
	{
		cout << "Ошибка! Введите целое число: ";
		cin.clear();
		cin.ignore(777, '\n');
	}
	cout << "Введите второе число: ";
	while (!(cin >> aga))
	{
		cout << "Ошибка! Введите целое число: ";
		cin.clear();
		cin.ignore(777, '\n');
	}

	cout << "\n\nСумма чисел: " << *ugus + *agas << endl << endl;

	cin.get();
	return 0;
}
