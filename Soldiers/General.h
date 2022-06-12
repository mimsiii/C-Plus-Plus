#pragma once
#include "Soldier.h"

class General : public Soldier {
private:
	int count;
public:
	General();
	General(const char* name, int age, int salary, double combatSkills, int count);

	int getCount();
	void setCount(int count);

	void Print();
};
