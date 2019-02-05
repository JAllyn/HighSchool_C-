// Project_5_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{// begin main

	int x = 0,
		y = 0;

	int q = 0;
	int r = 0;

	cout<<"Enter the first interger: ";
	cin>>x;

	cout<<"Enter the second interger: ";
	cin>>y;
	if (x == 0 || y == 0)
	{
		cout<<"\n\nError - division by zero"<<endl;
	}

	else if ( x < y )
	{
		q = y / x;
		r = y % x;
	}
	else
	{
		q = x / y;
		r = x % y;
	}

	if(r == 0 && x != 0 && y != 0)
	{
		cout<<x<<" / "<<y<<" is "<<q<<endl;
	}
	if(r > 0 && x != 0 && y != 0)
	{
	cout<<max(x , y)<<"/"<<min(x , y)<<"= "<<q<<" r "<<r<<endl;
	}
	
	return 0;
}// End main

