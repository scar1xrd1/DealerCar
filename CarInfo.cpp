#include "CarInfo.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

string CarInfo::get(int value) 
{
	if(value >= 0 && value <= len) return carName[value]; 
}

void CarInfo::loadFromFile(string path) 
{
	ifstream f(path);
	string line; 
	int i = 0;

	while (getline(f, line)) i++;
	f.close();

	len = i;
	carName = new string[i];

	i = 0;
	ifstream f1(path);
	while (getline(f1, line))
	{
		carName[i++] = line;
	}
}

CarInfo::CarInfo(string path)
{
	this->path = path;
	loadFromFile(path);
}