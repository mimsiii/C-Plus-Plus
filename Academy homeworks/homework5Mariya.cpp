#include <iostream>
using namespace std;

const int SIZE = 10;
const int SIZE2 = 7;
const int SIZE3 = 8;

int main() {

	cout << "Task number one: \n\n";

	int arr[SIZE];

	cout << "Enter ten numbers: \n\n";

	for (int i = 0; i < SIZE; i++) {
		cin >> arr[i];
	}

	cout << "\nThe numbers you have entered are: \n\n";

	cout << "\" ";
	for (int i = 0; i < SIZE; i++) {
		cout << arr[i] << " ";
	}
	cout << "\"" << endl << endl;

	cout << "Task number two: \n\n";

	int arr2[SIZE2];
	int sum = 1;

	cout << "Enter seven numbers to be multiplied: \n\n";

	for (int i = 0; i < SIZE2; i++) {
		cin >> arr2[i];
		sum *= arr2[i];
	}

	cout << endl;

	cout << "The result of the multiplication is equal to: "<< sum << endl << endl;

	cout << "Task number three: \n\n";

	int arr3[SIZE2];

	cout << "Enter seven numbers: \n\n";

	for (int i = 0; i < SIZE2; i++) {
		cin >> arr3[i];
		if (arr3[i] % 2 == 0) {
			arr3[i] = 0;
		}
		cout << arr3[i] << " ";
	}

	cout << endl << endl;
	
	double arr4[SIZE3];
	int counter = 0;
	double sum1 = 0;

	cout << "Task number four: \n\n";
	cout << "Enter eight numbers: \n\n";

	for (int i = 0; i < SIZE3; i++) {
		cin >> arr4[i];
		if (arr4[i] != 0) {
			counter++;
		}
		sum1 += arr4[i];
	}
	
	sum1 /= counter;
	cout << "\nThe average value of the numbers is " << sum1;

	cout << endl << endl;
	return 0;
}