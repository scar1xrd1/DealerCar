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
	string details[6] = {}; // wheels color engine gears seats ������� 

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
		cout << "�������� �����\n";
		for (int i = 0; i < car.get_len(); i++)
		{
			cout << i+1 << ". " << car.get(i) << endl;
		}
		cout << "--> ";

		while (true)
		{
			while (!(cin >> u) || (cin.peek() != '\n')) { cin.clear(); while (cin.get() != '\n'); cout << "\n������ �������!\n\n--> "; }
			if (u >= 0 && u <= car.get_len()) break;
			else cout << "\n�������� ����!\n\n-->";
		}
		break;
	}

	car_inf += car.get(u) + "\n";

	while (true)
	{
		srand(time(0));

		cout << "�������� ������� ������� ������ ��������\n1. �����\n2. ���� ����\n3. ���������\n4. ������� �������\n5. ������� �����������\n--> ";
		cin >> user;

		if (user == "1")
		{
			while (true)
			{
				cout << "1. ������\n2. ����\n3. ������ ������\n--> ";
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
				cout << "1. ����\n2. ����\n3. ����\n--> ";
				cin >> user;				
			}
		}
	}
}

void CarCustom::showCar()
{
	if (car_amount == 0)
	{
		cout << "\n�� ��� �� ������� �� ���� ������!\n\n";
	}
}