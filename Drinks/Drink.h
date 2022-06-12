#pragma once
#include <iostream>

class Drink {
private:
	char* mark;
	double ml;

	void CopyFrom(const Drink& other);
	void Free();

public:
	Drink();
	Drink(const char* mark, double ml);
	Drink(const Drink& other);
	Drink& operator=(const Drink& other);
	~Drink();

	const char* getMark();
	double getMl();
	void setMark(const char* mark);
	void setMl(double ml);

	void Print();
};