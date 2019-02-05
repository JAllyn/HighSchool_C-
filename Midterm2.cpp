// Midterm2.cpp : Defines the entry point for the console application.
/*
Jack Allyn
January 14, 2014
D Block
An easy Sequence
Description: Write a program that asks for the position
and displays the corresponding value.
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{//begin main

	int p = 1,
		i = 0,
		v = 1;

	cout<<setw(50)<<"***********************************"<<endl;
	cout<<setw(40)<<"An Easy Sequence"<<endl;
	cout<<setw(50)<<"***********************************"<<endl;

	cout<<"\n\t\tPlease enter the position: ";
	cin>>p;
	
	
	if (p > 1)
	{
	for( int i = 2; i<=p; i++)
	{
		v = v + i;
	}

	cout<<"\n\t\tThe value of the position you entered is: "<<v<<endl;
	cout<<"\n\t\tEnd of Run - Jack Allyn"<<endl;
	}
	
	else
	{
	cout<<"\n\t\tThe value of the position you entered is: "<<v<<endl;	
	cout<<"\n\t\tEnd of Run - Jack Allyn"<<endl;
	}

	return 0;
}//end main

