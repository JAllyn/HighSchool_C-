// Formatting_Numbers.cpp : Defines the entry point for the console application.
//
/*********************************************************
Jack Allyn
Sept. 10, 2013

Program description:
This will show how to use the set ios flags for numbers

Pg. 49
**********************************************************/


#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{//begin

	
/************************************************
	ios::showpoint    Displays decimal point with trailing zeros
	ios::Fixed        Displays a real number in fixed notation
	ios::Scientific   Displays a real number in floating point notation
	ios::right        Displays values right justified
	
	setprecision(x)   Rounds a number to the x decimal position
************************************************/	
	
double num = 12345.6789;
double n2 = 1234;

string name;
string Town;

/*
	cout<<num<<endl;
	cout<<setiosflags(ios::showpoint);
	cout<<num<<"\t"<<n2<<endl;

	cout<<setiosflags(ios::scientific);
	cout<<num<<"\t"<<n2<<endl;

	cout<<setiosflags(ios::fixed);
	cout<<num<<"\t"<<n2<<endl;
*/	
	cout<<setiosflags(ios::showpoint | ios::fixed | ios::right);
	cout<<setprecision(3);
	cout<<num<<"\t"<<n2<<endl;

	cout<<"\n\nEnter your Name: ";
	getline(cin,name);  //Allows user to enter both names
	cout<<"\n\nEnter your Town: ";
	cin>>Town;

/********************
		Clear Screen
********************/
	system("cls");
	cout<<"Name: "<<name<<endl;
	cout<<"Town: "<<Town<<endl;
	cout<<num<<"\t\t"<<n2<<endl;

	return 0;
}//end main

