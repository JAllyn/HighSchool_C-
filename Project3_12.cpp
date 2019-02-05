// Project3_12.cpp : Defines the entry point for the console application.
/* 
	Author: Jack Allyn
	Date: September 19, 2013

Program Name: Project3_12.cpp
Program Description: Write a program that takes two whole numbers and displays these three means.

*/

#include "stdafx.h"
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;


int main()
{//begin

	double n1 = 0.0,
		   n2 = 0.0,
		   arithmeticMean = 0.0,
		   geometricMean = 0.0,
		   harmonicMean = 0.0;

cout<<setw(20)<<"***** C++ Mean Generator *****"<<endl;	

	cout<<"\nEnter a Number: ";
		cin>>n1;

	cout<<"\nEnter another Number: ";
		cin>>n2;

	//Calculations

	arithmeticMean = (n1 + n2) /2;

	geometricMean = sqrt(n1 * n2);

	harmonicMean = ((1/n1) + (1/n2)) /2;

cout<<setiosflags(ios::fixed|ios::showpoint|ios::right)
	<<setprecision(2);

cout<<"\n\nArithmetic Mean: "<<arithmeticMean<<endl;
cout<<"\n\nGeometric Mean: "<<geometricMean<<endl;
cout<<"\n\nHarmonic Mean: "<<harmonicMean<<endl;


cout<<"\n\nEnd of Run - Jack Allyn\n\n";






	return 0;
}//end

