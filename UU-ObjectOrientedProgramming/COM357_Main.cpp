#include <iostream>

#include "COM357_Lab1_Task_1.cpp"
#include "COM357_Lab1_Task_2.cpp"
#include "COM357_Lab1_Task_3.cpp"
#include "COM357_Lab1_Task_4.cpp"

void printTitle(string titleToPrint) {
	cout << "------------------------------" << endl;
	cout << "\t" << titleToPrint << endl;
	cout << "------------------------------" << endl;
}

int main() {
	printTitle("Lab 1 - Task 1");
	LabOneTaskOne();
	cout << endl;

	printTitle("Lab 1 - Task 2");
	LabOneTaskTwo();
	cout << endl;

	printTitle("Lab 1 - Task 3");
	LabOneTaskThree();
	cout << endl;

	printTitle("Lab 1 - Task 4");
	LabOneTaskFour();
	cout << endl;

	return 0;
}