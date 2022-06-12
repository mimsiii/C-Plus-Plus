#include<iostream>
using namespace std;



int main() {

	int size;
	cout << "Please, input how many numbers you want to enter: ";
	cin >> size;
	int* arr = new int[size];
	
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}
	
	cout << "\nThe numbers that are divisible by 3 are: \n";
	for (int i = 0; i < size; i++) {
		if (arr[i] >= 4 && arr[i] <= 99 && arr[i] % 3 == 0)
			cout << arr[i] << endl;
	}
	
	cout << endl << endl;

	int size2;
	cout << "Please, input how many numbers you want to enter: ";
	cin >> size2;
	int* arr2 = new int[size2];

	for (int i = 0; i < size2; i++) {
		cin >> arr2[i];
	}

	cout << "\nThe numbers that are divisible by 2 are: \n";

	for (int i = 0; i < size2; i++) {
		if (arr2[i] % 2 == 0)
			cout << arr2[i] << endl;
	}


	delete[]arr;
	delete[]arr2;
	return 0;
}





