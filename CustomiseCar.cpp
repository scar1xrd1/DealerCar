#include "CustomiseCar.h"
#include "CarInfo.h"
#include <iostream>
using namespace std;

CarCustom::CarCustom()
{
	CarInfo car("Cars/Name/name_car.txt");
	car_amount = 0;
}

void CarCustom::choiceCar()
{
	string details[6] = {}; // wheels color engine gears seats внешние 

	string tyre[] = {};
	string disc[] = {};
	string size_tyre[] = {}; 
	string color[] = {};
	string engine[] = {};
	string seat[] = {};
	string external[] = {};

	string car_inf;
	CarInfo car("Cars/Name/name_car.txt");
	string user;
	int u;

	while (true)
	{
		cout << "Выберите цифру\n";
		for (int i = 0; i < car.get_len(); i++)
		{
			cout << i+1 << ". " << car.get(i) << endl;
		}
		cout << "--> ";

		while (true)
		{
			while (!(cin >> u) || (cin.peek() != '\n')) { cin.clear(); while (cin.get() != '\n'); cout << "\nТолько цифрами!\n\n--> "; }
			if (u >= 0 && u <= car.get_len()) break;
			else cout << "\nНеверный ввод!\n\n-->";
		}
		break;
	}

	car_inf += car.get(u) + "\n";

	while (true)
	{
		srand(time(0));

		cout << "Выберите элемент который хотите изменить\n1. Колёса\n2. Цвет авто\n3. Двигатель\n4. Коробка передач\n5. Внешние модификации\n--> ";
		cin >> user;

		if (user == "1")
		{
			while (true)
			{
				cout << "1. Резина\n2. Диск\n3. Размер колеса\n--> ";
				cin >> user;

				if (user == "1")
				{
					cout << 
				}
				else if (user == "2")
				{
					cout << 
				}
				else if (user == "3")
				{
					cout << 
				}
			}
		}
		else if (user == "2")
		{
			while (true)
			{
				cout << "1. Цвет\n2. Цвет\n3. Цвет\n--> ";
				cin >> user;				
			}
		}
	}
}

void CarCustom::showCar()
{
	if (car_amount == 0)
	{
		cout << "\nВы ещё не создали ни одну машину!\n\n";
	}
}