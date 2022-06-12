#include "Drink.h"
#include <stdio.h>
#include <string.h>

void Drink::CopyFrom(const Drink& other)
{
	int len = strlen(other.mark);
	mark = new char[len + 1];
	strcpy(mark, other.mark);

	ml = other.ml;
}

void Drink::Free()
{
	delete[]mark;
}

Drink::Drink()
{
	mark = nullptr;
	ml = 0.000;
}

Drink::Drink(const char* mark, double ml)
{
	int len = strlen(mark);
	this->mark = new char[len + 1];
	strcpy(this->mark, mark);

	this->ml = ml;
}

Drink::Drink(const Drink& other)
{
	CopyFrom(other);
}

Drink& Drink::operator=(const Drink& other)
{
	if (this != &other) {
		Free();
		CopyFrom(other);
	}
	return *this;
}

Drink::~Drink()
{
	Free();
}

const char* Drink::getMark()
{
	return mark;
}

double Drink::getMl()
{
	return ml;
}

void Drink::setMark(const char* mark)
{
	int len = strlen(mark);
	this->mark = new char[len + 1];
	strcpy(this->mark, mark);
}

void Drink::setMl(double ml)
{
	this->ml = ml;
}

void Drink::Print()
{
	std::cout << "Mark: " << mark << std::endl;
	std::cout << "Ml: " << ml << std::endl;
}
