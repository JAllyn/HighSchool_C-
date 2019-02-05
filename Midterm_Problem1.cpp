// Midterm_Problem1.cpp : Defines the entry point for the console application.
/*
Jack Allyn
January 13, 2014
D block
Problem 1: Area
Description: Find the area of the larger circle without
including the areas of the smaller circles inside.
*/
#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{// begin main

	/*******************
		Variables
	*******************/
	double r = 0.0,
		   sr = 0.0,
		   area = 0.0,
		   sarea = 0.0,
		   a = 0.0,
		   answer = 0.0,
		   Pi = 3.1416;

	cout<<setw(50)<<"***************************************"<<endl;
	cout<<setw(45)<<"Welcome to the Radius finder"<<endl;
	cout<<setw(50)<<"***************************************";

	/****************************
				Input
	****************************/
	cout<<"\n\tPlease enter the radius of the outside circle: ";
	cin>>r;

	/***************************
		Equations
	***************************/
	sr = r / 2;

	sarea = Pi *sr *sr;

	a = sarea * 2;

	area = Pi * r * r;

	answer = area - a;

	/***************************
				Output
	***************************/

	cout<<"\n\n\tThe answer is "<<answer<<endl;
	cout<<"\n\n\tEnd of Run - Jack Allyn"<<endl;


	return 0;
}// end main

