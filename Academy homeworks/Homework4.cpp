#include<iostream>
using namespace std;

double f(double a, double h) {
	return a / 2 * h;
}
int g(int a, int b);

int main() {


	cout << "Find the area of a triangle." << endl << endl;
	double m, n;
	cout << "Enter the base of the triangle: ";
	cin >> m;
	cout << "Enter the height of the triangle: ";
	cin >> n;

	cout << endl << "The area of the triangle is: "<< f(m,n) << endl << endl;


	cout << "The greater between two numbers: " << endl << endl;
	int c, d;
	cout << "Enter two numbers: ";
	cin >> c >> d;

	cout << "The greater between " << c << " and " << d << " is " << g(c, d) << "." << endl;

	return 0;
}


int g(int a, int b) {
	if (a < b) {
		return b;
	}
	else {
		return a;
	}
}