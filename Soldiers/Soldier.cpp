#pragma warning(disable : 4996)
#include "Soldier.h"
#include <stdio.h>
#include <string.h>

void Soldier::CopyFrom(const Soldier& other) {
    int len = strlen(other.name);
    name = new char[len + 1];
    strcpy(name, other.name);

    age = other.age;
    salary = other.salary;
    combatSkills = other.combatSkills;
}

void Soldier::Free() {
    delete[]name;
}

Soldier::Soldier() {
    name = nullptr;
    age = 0;
    salary = 0;
    combatSkills = 0.0;
}

Soldier::Soldier(const char* name, int age, int salary, double combatSkills) {
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);

    this->age = age;
    this->salary = salary;
    this->combatSkills = combatSkills;
}

Soldier::Soldier(const Soldier& other) {
    CopyFrom(other);
}

Soldier& Soldier::equal(const Soldier& other) {
    if (this != &other) {
        Free();
        CopyFrom(other);
    }
    return*this;
}

Soldier::~Soldier() {
    Free();
}

const char* Soldier::getName() {
    return name;
}

int Soldier::getAge() {
    return age;
}

int Soldier::getSalary() {
    return salary;
}

double Soldier::getCombatSkills() {
    return combatSkills;
}

void Soldier::setName(const char* name) {
    int len = strlen(name);
    this->name = new char[len + 1];
    strcpy(this->name, name);
}

void Soldier::setAge(int age) {
    this->age = age;
}

void Soldier::setSalary(int salary) {
    this->salary = salary;
}

void Soldier::setCombatSkills(double combatSkills) {
    this->combatSkills = combatSkills;
}

void Soldier::Print() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Salary: " << salary << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Combat Skills: " << combatSkills << std::endl;
}
