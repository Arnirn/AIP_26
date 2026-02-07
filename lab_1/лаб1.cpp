#include <iostream>
#include <string>

using namespace std;

struct CAR
{
    string BRAND;
    string MODEL;
    string COLOR;
    int MILEAGE;
    int YEAR;
};

int main()
{
    setlocale(LC_ALL, "Russian");
    string quit;
    CAR cars[777];
    int cars_number = 0;
    do
    {
        cout << "\nВведите марку автомобиля: " << endl;
        cin >> cars[cars_number].BRAND;
        cout << "Введите модель автомобиля: " << endl;
        cin >> cars[cars_number].MODEL;
        cout << "Введите цвет автомобиля: " << endl;
        cin >> cars[cars_number].COLOR;
        cout << "Введите пробег автомобиля: " << endl;
        while (!(cin >> cars[cars_number].MILEAGE))
        {
            cout << "Ошибка. Введите целое число: ";
            cin.clear();
            cin.ignore(7777777, '\n');
        }
        cout << "Введите год выпуска автомобиля: " << endl;
        while (!(cin >> cars[cars_number].YEAR))
        {
            cout << "Ошибка. Введите целое число: ";
            cin.clear();
            cin.ignore(7777777, '\n');
        }
        cout << "\nЧтобы завершить ввод, введите \"quit\", иначе ввод будет продолжен: " << endl;
        cars_number++;
        cin.ignore();
        getline(cin, quit);
    } while (quit != "quit" && quit != "Quit" && quit != "QUIT");

    for (int check_number = 0; check_number < cars_number; check_number++)
    {
        int checked_mileage = 0;
        int current_mileage = 0;
        int year = cars[check_number].YEAR;
        int min_mileage = cars[check_number].MILEAGE;
        int amount_of_sim_years = 0;
        int mileage_sum = 0;
        if (year != -77)
        {
            for (int checking_number = 0; checking_number < cars_number; checking_number++)
            {
                if (year == cars[checking_number].YEAR)
                {
                    amount_of_sim_years++;
                    mileage_sum = mileage_sum + cars[checking_number].MILEAGE;
                    if (cars[checking_number].MILEAGE < min_mileage)
                        min_mileage = cars[checking_number].MILEAGE;
                    cars[checking_number].YEAR = -77;
                }
            }
            int average_milage = mileage_sum / amount_of_sim_years;
            cout << "\n\nДля автомобиля " << year << " года выпуска: \n\nМинимальный пробег: " << min_mileage << "\nСредний пробег: " << average_milage << endl << endl;
        }
    }
    cout << "Для выхода нажмите 'Enter'\n";
    cin.get();
    return 0;
}