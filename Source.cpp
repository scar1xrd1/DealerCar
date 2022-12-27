#include <iostream>
#include "CarInfo.h"
#include "CustomiseCar.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string user;

	CarCustom car;

	while (true)
	{
		cout << "1. Выбрать авто для кастомизации\n2. Посмотреть свои авто\n--> ";
		cin >> user;

		if (user == "1")
		{
			car.choiceCar();
		}
		else if (user == "2")
		{
			car.showCar();
		}
	}
}