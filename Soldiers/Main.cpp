#include <iostream>
#include "General.h"

using namespace std;

int main()
{

    General general1("Georgi", 45, 5000, 35.6, 22);
    general1.Print();

    Soldier vanko1("Vanko", 22, 1000, 20);
    vanko1.Print();
    cout << endl;

    general1.setAge(46);
    general1.Print();
    return 0;
}