#pragma once
#include <iostream>
using namespace std;

class CarSpec
{
	string* carDetail;
	string path;

public:
	CarSpec(string) { this->path = path; }

	void loadFromFile();
	string get(int value) { return carDetail[value]; };
};

class CarInfo
{
	string* carName;
	string path;
	int len;

public:
	CarInfo(string);

	void loadFromFile(string);	
	string get(int);
};