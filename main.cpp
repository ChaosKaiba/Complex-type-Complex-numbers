// complexType.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include "complexNumber.h"

 using namespace std;
 int main() {
 	complexType num1(23, 34);
 	complexType num2;
 	complexType num3;

 	cout << "Num1 = " << num1 << endl;
 	cout << "Num2 = " << num2 << endl;
 	cout << "Enter the complex number " << "in the form (a, b) ";
 	cin >> num2;   	cout << endl;
 	cout << "New value of num2 = " << num2 << endl;
 	num3 = num1 + num2;
 	cout << "Num3 = " << num3 << endl;
 	cout << "" << num1 << " + " << num2 << " = " << num1 + num2 << endl;
 	cout << "" << num1 << " * " << num2 << " = " << num1 * num2 << endl;
 	return 0;
}
