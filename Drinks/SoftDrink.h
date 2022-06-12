#pragma once
#include "Drink.h"

class SoftDrink : public Drink {
private:
	double sugar;

public:
	SoftDrink();
	SoftDrink(const char* mark, double ml, double sugar);

	double getSugar();
	void setSugar(double sugar);

	void Print();
};
