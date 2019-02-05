// Project_5_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{//Begin Main

	double a = 0.0,
		   b = 0.0,
		   c = 0.0;
	string s = "scalene",
		   i = "isosceles",
		   e = "equilateral";

	cout<<"Enter the length of side a: ";
	cin>>a;

	cout<<"Enter the length of side b: ";
	cin>>b;

	cout<<"Enter the length of side c: ";
	cin>>c;

	if(a == b && a == c && b == c)
	{
		cout<<"\n\nThe triangle is an "<<e<<endl;
	}
	
	 if(a != b && a != c && b != c)
	{
		cout<<"\n\nThe triangle is a "<<s<<endl;
	}
	if(a == c && a != b)  
	{
		cout<<"\n\nThe triangle is an "<<i<<endl;
	}
	if(a == b && a != c)  
	{
		cout<<"\n\nThe triangle is an "<<i<<endl;
	}
	if(b == c && b != a)  
	{
		cout<<"\n\nThe triangle is an "<<i<<endl;
	}

	cout<<"\n\n\nEnd of Run - Jack Allyn"<<endl;
	return 0;
}//end Main

