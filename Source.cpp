#include <iostream>
#include "CarInfo.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	string user;

	CarInfo carInfo("Cars/Name/name_car.txt");
	cout << carInfo.get(0) << endl;

	while (true)
	{
		cout << "1. ������� ���� ��� ������������\n2. ���������� ���� ����\n--> ";
		cin >> user;

		if (user == "1")
		{

		}
	}
}