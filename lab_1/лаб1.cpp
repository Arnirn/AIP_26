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
    CAR min_cars[777];
    int cars_number = 0;
    int mincar = 0;
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
                    if (cars[checking_number].MILEAGE <= min_mileage)
                    {
                        min_mileage = cars[checking_number].MILEAGE;
                        min_cars[mincar].BRAND = cars[checking_number].BRAND;
                        min_cars[mincar].MODEL = cars[checking_number].MODEL;
                        min_cars[mincar].COLOR = cars[checking_number].COLOR;
                        min_cars[mincar].MILEAGE = cars[checking_number].MILEAGE;
                        min_cars[mincar].YEAR = cars[checking_number].YEAR;
                    }
                    cars[checking_number].YEAR = -77;
                }
            }
            mincar++;
            int average_milage = mileage_sum / amount_of_sim_years;
            cout << "\n\nДля автомобиля " << year << " года выпуска: \n\nМинимальный пробег: " << min_mileage
                << "\nСредний пробег: " << average_milage << endl << endl;
        }
    }
            int needed_year;
            cout << "Какого года автомобиль вас интересует?\n";
            while (!(cin >> needed_year))
            {
                cout << "Ошибка! Введите целое число: ";
                cin.clear();
                cin.ignore(7777777, '\n');
            }
            for (int mincar_indx = 0; mincar_indx < mincar; mincar_indx++)
            {
                if (min_cars[mincar_indx].YEAR == needed_year)
                {
                    cout << "\n\nДанные автомобиля с минимальным пробегом: \n" << "Бренд: " << min_cars[mincar_indx].BRAND
                        << "\nМодель: " << min_cars[mincar_indx].MODEL << "\nЦвет: " << min_cars[mincar_indx].COLOR << "\nПробег: "
                        << min_cars[mincar_indx].MILEAGE << endl;
                }
            }
    cout << "Для выхода нажмите 'Enter'\n";
    cin.get();
    return 0;
}