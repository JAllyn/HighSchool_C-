// Midterm_4.cpp : Defines the entry point for the console application.
/*
Name: Jack Allyn
Date: January 21, 2014
Class: D Block
Name of Project: Frame Buffer
Description: Write a program that reads the screen size and the
number of bits that are required for each pixel.
*/

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{//begin main

	/************************
		Variables
	************************/

	double w = 0.0,
		   l = 0.0,
		   b = 0.0,
		   a = 0.0,
		   tbit = 0.0,
		   byte = 0.0,
		   mbyte = 0.0;

	/****************************
		Input & Title
	****************************/
	cout<<setw(43)<<"******************"<<endl;
	cout<<setw(40)<<"Frame Buffer"<<endl;
	cout<<setw(43)<<"******************"<<endl;
	cout<<"\n"<<setw(50)<<"Please enter the number of pixels in a row: ";
	cin>>l;
	cout<<"\n"<<setw(53)<<"Please enter the number of pixels in a column: ";
	cin>>w;
	cout<<"\n"<<setw(55)<<"Please enter the bits per pixel of your monitor: ";
	cin>>b;

	/************************
		Calculations
	************************/
	a = l * w;
//	b = pow(2.0, b);
	tbit = a * b;
	byte = tbit / 8.0;
	mbyte = byte / 1000000;

	/*************************
		Output
	*************************/

	cout<<setiosflags(ios::showpoint | ios::fixed | ios::right);
	cout<<setprecision(2);
	cout<<"\n"<<setw(57)<<"The number of Megabytes required for your frame is "<<mbyte<<" Megabytes."<<endl;
	cout<<"\n"<<setw(29)<<"End of Run - Jack Allyn"<<"\n"<<endl;
	return 0;
}//end main

