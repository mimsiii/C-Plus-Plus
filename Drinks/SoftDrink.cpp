#include "SoftDrink.h"
SoftDrink::SoftDrink()
{
	sugar = 0.0;
}

SoftDrink::SoftDrink(const char* mark, double ml, double sugar) : Drink::Drink(mark, ml)
{
	this->sugar = sugar;
}

double SoftDrink::getSugar()
{
	return sugar;
}

void SoftDrink::setSugar(double sugar)
{
	this->sugar = sugar;
}

void SoftDrink::Print()
{
	Drink::Print();
	std::cout << "Sugars= " << sugar << std::endl << std::endl;
}
