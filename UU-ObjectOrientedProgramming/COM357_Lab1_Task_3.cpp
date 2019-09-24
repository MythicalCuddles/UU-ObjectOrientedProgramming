#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

static int LabOneTaskThree() {
	double amount = 0;
	double startingfunds = 1000.0;
	double rate = 0.05;
	double duration{ 10 }; // <- ?

	cout << "Year" << setw(21) << "Amount on deposit" << endl;
	cout << setprecision(2) << fixed;

	for (int year = 1; year <= duration; year++) {
		amount = startingfunds * pow(1.0 + rate, year);
		cout << setw(4) << year << setw(21) << amount << endl;
	}

	cout << defaultfloat;
	cout << "Total interest earned on the investment over " << duration << " is " << fixed << setprecision(2) << amount - startingfunds << endl;

	return 0;
}