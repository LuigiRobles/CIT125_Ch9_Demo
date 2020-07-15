// CIT125_Ch9_ValueReturningFunctionDemo.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Demo on Value Returning Functions

#include <iostream>
using namespace std;

int addition(int a, int b); //function prototype
int main()
{
	int x;
	int y;
	int z;

	cout << "Enter the first number" << endl;
	cin >> x;
	cout << "Enter the second number" << endl;
	cin >> y;

	//addition
	z = addition(x, y); //Function call carries values held by x and y and 
	//passes them to the function 'addition'
	cout << "The result of addition is: " << z << endl;

	//fucntion call
	return 0;
}

//function definition
int addition(int a, int b)
{
	int r;
	r = a + b;
	return r;
}
