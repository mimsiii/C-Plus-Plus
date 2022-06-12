#include<iostream>
using namespace std;

int main() {


	cout << "\t\t\tTask number 1: \n";
	cout << ">>\t\tThe sum of all is at the bottom.\t\t<<\n ";
	cout << endl;

	double n = 1;
	double i = n + 1;
	double res = 0;
	double endRes = 0 + res;

	for (endRes +=res; n <= 100; n++) {
		cout << "\t\t\t" << n << " / " << n << " + 1" << " = " << (n / (n + 1)) << endl;
		i = n + 1;
		res = n / i;
		endRes = res + endRes;
	}

	cout << endl;
	cout << "\t\t\tThe result of all is:\n"<<endl;
	cout <<"\t\t\t>>\t" <<"  "<<endRes <<"\t<<";
	cout << endl << endl;

	
	cout << "Task number 2: \n";

	cout << endl << endl;

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j < 10; j++) {
			cout << j << "*" << i << "\t";
		}
		cout << endl << endl;
		}

	cout << "\n Task number 3:";
	cout << endl << endl ;

	int m;
	cout << "\n Enter a number: ";
	cin >> m;

	cout << endl;

	for (int i = 1; i <= m; i++) {
		for (int k = m - i; k >= 1; k--) 
			cout << " ";
			for (int j = 1; j <= i; j++) {
				cout << "*";
			}
		
		cout << endl;
	}

	
	cout << endl << endl;

	return 0;
}