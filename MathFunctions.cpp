// MathFunctions.cpp : Defines the entry point for the console application.
/*
	Jack Allyn
	9/30/3013

	Program Name: MathFuctions.cpp
	Program Description: This program will show the use of the math library and Type casts
*/

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>

//#include <math.h>


using namespace std;

int main()
{//begin main
	
	/***********************************************
		These are the built in functions for 
		the greatest and minimum values for 
		the integer and double data types.
	***********************************************/

	cout<<"The Integer maximum is: "<<INT_MAX<<endl;
	cout<<"The Integer minimum is: "<<INT_MIN<<endl;
	cout<<"The decimal maximum is: "<<DBL_MAX<<endl;
	cout<<"The decimal minimum is: "<<DBL_MIN<<endl;
	cout<<"The maximum number of precision is: "
		<<DBL_DIG<<endl;


	/***********************************************
		The built in math functions are 
		very useful in your programs.

		int abs(x) - Absolute value
		double fabs(double x) - abs. value for a double

		The x that is inside the () is called a parameter

		abs(-5) The function is "called" or "invoked" to perform an action
	***********************************************/

	cout<<"The absolute value of -5 is: "<<abs(-5)<<"\n"
		<<"The absolute value of -12.5 is: "<<fabs(-12.5)<<endl;

	/***********************************************
		The modulus function returns the remainder
		of dividing two numbers. When you use the
		"%", you are dividing two intergers. If you 
		use the fmod you are dividing two doubles.

		The form is double fmod(double x, double y)
	***********************************************/

	cout<<"The remainder of 5 / 2 is: "<<5%2<<endl;
	cout<<"The remainder of 3.25 / 1.25 is: "<<fmod(3.25,1.25)<<endl;

	/***********************************************
		To raise something to a power, you 
		must use double pow(double x, double y)
		So, if you need to cube a number the correct
		format is pow(4.0, 3). One of the numbers must
		be a double
	***********************************************/

	cout<<"4 cubed is: "<<pow(4.0, 3)<<endl;

	/***********************************************
		To square root a number use the format
		double sqrt(double x)
	***********************************************/

	cout<<"The square root of 81 is: "<<sqrt(81.0)<<endl;

	/***********************************************
		Type casting means that you can change a data 
		type for a specific line of code.

		int x = 5, y = 2;
		double z = 0.0;

		z = (double)x/y; THis allows the quotient
		to be saved to z. Remember z is the double and
		x and y are the integers.
	***********************************************/

	int x = 5, y = 2;
	double z = 0.0;

	z = (double)x/y;  //change x to a double

	cout<<"x / y is: "<<x/y<<endl;
	cout<<"x / y is: "<<z<<endl;

	return 0;
}//end main

