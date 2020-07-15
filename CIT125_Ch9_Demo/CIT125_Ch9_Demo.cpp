// CIT125_Ch9_Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Demo on Void Function

#include <iostream>
using namespace std;

void companyAddress();//function prototype
int main()
{
	cout << "Our address is" << endl;
	companyAddress(); //function call
	return 0;
}

void companyAddress() //function definition
{
	cout << "Tesla inc." << endl;
	cout << "111 Huntington Dr. Ste 1000" << endl;
	cout << "Hawthorne, CA 90901" << endl;
}
