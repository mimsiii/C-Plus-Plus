#pragma once
#include <iostream>

class Soldier {
private:
    char* name;
    int age;
    int salary;
    double combatSkills;
    void CopyFrom(const Soldier& other);
    void Free();

public:
    Soldier();
    Soldier(const char* name, int age, int salary, double combatSkills);
    Soldier(const Soldier& other);
    Soldier& equal(const Soldier& other);
    ~Soldier();

    const char* getName();
    int getAge();
    int getSalary();
    double getCombatSkills();
    void setName(const char* name);
    void setAge(int age);
    void setSalary(int salary);
    void setCombatSkills(double combatSkills);

    void Print();
};
