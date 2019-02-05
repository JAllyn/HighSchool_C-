// Project_5_5.cpp : Defines the entry point for the console application.
/*
Description: Given the coordinates of two points on a graph, find and
print the slope of a line passing through them.

Jack Allyn
Project 5-5
11/21/13
*/

#include "stdafx.h"
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{//begin main

	double x = 0.0,
		   x1 = 0.0,
		   y = 0.0,
		   y1 = 0.0,
		   Y = 0.0,
		   X = 0.0;

	cout<<"Enter the first y coordinate: ";
	cin>>y;

	cout<<"Enter the second y coordinate: ";
	cin>>y1;

	cout<<"Enter the first x coordinate: ";
	cin>>x;

	cout<<"Enter the second x coordinate: ";
	cin>>x1;
	/*****************************
		Equations
	*****************************/
	Y = y - y1;
	X = x - x1;

	/*****************************
		If Else Statements
	*****************************/

	if(X == 0)
	{
		cout<<"\n\nThe line is undefined because X is equivalent to zero."<<endl;
	}
	else if (X == Y)
	{
		cout<<"\n\nThe slope of the line is one."<<endl;
	}
	else if(X != 0)
	{
	cout<<"\n\nThe slope of the line is "<<Y<<" / "<<X<<endl;
	}
	else if (Y == 0)
	{
		cout<<"\n\nThe slope of the line is equivalent to zero because Y is zero."<<endl;
	}
	else if (Y < 0 && X < 0)
	{
		cout<<"\n\nThe slope of the line is "<<Y * -1<<" / "<<X * -1<<endl;
	}

	cout<<"\n\n\nEnd of Run - Jack Allyn"<<endl;
	

	return 0;
}//end main

