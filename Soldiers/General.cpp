#include "General.h"
#include "Soldier.h"

General::General() {
    count = 0;
}

General::General(const char* name, int age, int salary, double combatSkills, int count) : Soldier::Soldier(name, age, salary, combatSkills) {
    this->count = count;
}

int General::getCount() {
    return count;
};

void General::setCount(int count) {
    this->count = count;
};

void General::Print() {
    Soldier::Print();
    std::cout << "The General has " << count << " soldiers." << std::endl << std::endl;
};
