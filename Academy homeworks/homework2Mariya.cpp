#include<iostream>
using namespace std;

int main() {

		
	cout << "Task number 1 solution: ";

		int start = 7;
		int multiplier = 1;
		int end=0;

		
		while (end < 98) {

			end = start * multiplier;
			cout << end << " ";
			multiplier++;
		}

		cout << endl;

	cout << "Task number 2 solution: "; 

	int start2 = 7;
	int multiplier2 = 1;
	int end2 = 0;

	while (end2 < 98) {
		end2 = start2 * multiplier2;

		if (end2 % 2 == 0) {
			cout << " ";
		}
		else {
			cout << " " << end2;
		}

		multiplier2++;
	}


	cout << "\nTask number 3 solution: ";

	int f=1;
	int multiplier3=3;

	int res = 1;

	while (res <= 2187) {
		cout << res <<" ";
		res = f * multiplier3;
		f = res;
	}

	cout << endl;


	cout << "\nTask number 4: \nNumbers divided by 3 and 5. \n";

	int num;
	cout << "Enter number: ";
	cin >> num;

	int res2 = 1;

	while (res2 <= num) {

		if (res2 % 3 == 0 && res2 % 5 == 0) {
			cout << res2 <<" ";
		}
		res2++;
	}

	cout << endl;


	cout << "\nTask number 5: \n";

	int month;
	cout << "Enter month number: ";
	cin >> month;

	switch (month) {
	case 1: cout << "January\n"; break;
	case 2: cout << "February\n"; break;
	case 3: cout << "March\n"; break;
	case 4: cout << "April\n"; break;
	case 5: cout << "May\n"; break;
	case 6: cout << "June\n"; break;
	case 7: cout << "July\n"; break;
	case 8: cout << "August\n"; break;
	case 9: cout << "September\n"; break;
	case 10: cout << "October\n"; break;
	case 11: cout << "November\n"; break;
	case 12: cout << "December\n"; break;
	default: cout << "Not a valid input\n"; break;
	}

	cout << "\nTask number 6: \n";

	int a, b, c, d, year;

	cout << "Enter year: ";
	cin >> year;

	a = year % 10;
	b = (year % 100) / 10;
	c = (year / 100) % 10;
	d = year / 1000;

	if (((a == b) || (a == c) || (a == d) || 
		(b == c) || (b == d) || 
		(d == c))) {
		cout << "Lucky year";
	}
	 else {
		cout << "Not a lucky year";
	}
	
	cout << endl;

	return 0;
}