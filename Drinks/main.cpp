#include<iostream>
#include"SoftDrink.h"

using namespace std;

int main() {

	SoftDrink CocaCola("Coca Cola", 0.330, 0.50);
	CocaCola.Print();

	SoftDrink MinaralWater("Mineral Water", 0.500, 0.0);
	MinaralWater.Print();

	return 0;
}