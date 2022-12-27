#pragma once

class CarSpec
{
	string* carDetail;

public:
	CarSpec();

	void loadFromFile();
	string get(int value) { return carDetail[value]; };
};

class CarInfo
{
	string* carName;	

public:
	CarInfo();

	void loadFromFile();
	string get(int value) { return carName[value]; };
};