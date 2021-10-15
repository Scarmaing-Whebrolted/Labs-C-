﻿#include <iostream>
#include <math.h>
using namespace std;

// TASK 25

int main()
{
	unsigned n;
	cout << "Enter a number which is equal to 4 or is bigger than the last one: ";
	cin >> n;	// Initialization of n
	while (n < 4)	// Checking of n for performing of the condition
	{
		cout << "Something went wrong. Enter the number again: ";
		cin >> n;
	}

	long double v1 = 0, v2 = 0, v3 = 1.5, vn; // Initialization of three primary elements of the sequence

	for (unsigned i = 4; i <= n; i++)	// Calculating of vn
	{
		vn = (i + static_cast<unsigned>(1)) / static_cast<long double>(pow(i, 2) + 1) * v3 - v2 * v1;
		v1 = v2;
		v2 = v3;
		v3 = vn;
	}
	
	if (vn != 0)	// Checking for belonging to the range of data type
	{
		cout << "vn is equal to " << vn;
	}
	else
	{
		cout << "Too big value";
	}
}