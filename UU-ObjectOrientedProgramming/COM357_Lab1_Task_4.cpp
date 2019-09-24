#include <iostream>

using namespace std;

static int LabOneTaskFour() {
	double weight, height;

	cout << "BMI Calculator" << endl;
	cout << "------------------------------" << endl;

	cout << "Please enter your weight (lbs): ";
	cin >> weight;
	cout << "You entered your weight as " << weight << "lbs" << endl;

	cout << "Please enter your height (in): ";
	cin >> height;
	cout << "You entered your height as " << height << "in" << endl;

	cout << "------------------------------" << endl;

	double bmi = (weight / pow(height, 2)) * 703;

	cout << "Your BMI: " << bmi << endl;

	return 0;
}