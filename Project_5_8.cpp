// Project_5_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{//Begin main

	double a = 0.0,
		   b = 0.0,
		   c = 0.0,
		   p = 0.0;


		cout<<"Enter the length of side one: ";
	cin>>a;

	cout<<"Enter the length of side two: ";
	cin>>b;

	cout<<"Enter the length of side three: ";
	cin>>c;

	if(a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b)
	{
		cout<<"The triangle is a right triangle."<<endl;
	}
	else
	{
		cout<<"The triangle is not a right triangle."<<endl;
	}

	return 0;
}//End main

