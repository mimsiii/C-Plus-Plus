#include<iostream>
using namespace std;

int main() {

	cout << "Task 1: Area of rectangle" << endl;

	int side1;
	int side2;
	int res;

	cout << "\nPlease, enter the vertical side of the rectangle: ";
	cin >> side1;
	cout << "Please, enter the horizontal side of the rectangle: ";
	cin >> side2;

	res = side1 * side2;

	cout << "\nWhen one of the sides is " << side1 << " and the other side is " << side2 << " then the area of the rectangle is " << res << "." << endl << endl;
	cout << endl;

	cout << "Task 2: Greater number.\n";

	int n;
	int m;

	cout << "\nEnter the first number: ";
	cin >> n;
	cout << "Enter the first number: ";
	cin >> m;

	cout << endl;

	if (n > m) {
		cout << n << " is greater than " << m << endl;
	}
	else if (m > n) {
		cout << m << " is greater than " << n << endl;
	}
	else {
		cout << n << " is equal to " << m << endl;
	}
	
	cout << endl << endl;

	cout << "Task 3: Bool values.\n";

	int a;
	int b;

	cout << "\nEnter first digit: ";
	cin >> a;
	cout << "Enter second digit: ";
	cin >> b;

	bool c = a;
	bool d = b;

	cout << endl;

	cout << "By using && the result is: " << (c && d) << endl;
	cout << "By using || the result is: " << (c || d) << endl;
	cout << "By using ^ the result is: " << (c ^ d) << endl;
	cout << endl;

	cout << "\nTask 4: Speed.\n";

	float speed;
	cout << "\nEnter speed:";
	cin >> speed;

	if (speed <= 10) {
		cout << "\nSlow\n";
	}
	else if (speed > 10 && speed <= 50) {
		cout << "\nAverage\n";
	}
	else if (speed > 50 && speed <= 150) {
		cout << "\nFast\n";
	}
	else if (speed > 150 && speed <= 1000) {
		cout << "\nUltra fast\n";
	}
	else {
		cout << "\nExtremely fast\n";
	}

	cout << endl;

	cout << "\nTask 5: Grades.\n";

	int grade;
	cout << "\nEnter grade:";
	cin >> grade;

	switch (grade) {
	case 2:
		cout << "\nValid grade!\nYou entered grade " << grade << endl;
		break;
	case 3:
		cout << "\nValid grade!\nYou entered grade " << grade << endl;
		break;
	case 4:
		cout << "\nValid grade!\nYou entered grade " << grade << endl;
		break;
	case 5:
		cout << "\nValid grade!\nYou entered grade " << grade << endl;
		break;
	case 6:
		cout << "\nValid grade!\nYou entered grade " << grade << endl;
		break;
	default:
		cout << endl << grade << " is not a valid grade!\n";
		break;
	}

	return 0;
}