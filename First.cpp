// First.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream> //Library for input/output
#include <iomanip> //Library to format data

using namespace std;
int main()
{//Begin Main

	double n1; //first number
	double n2; //second number

	double n3; //result

	cout<<"Jack Allyn"<<endl;
	cout<<"Wachusett Regional High school"<<endl;
	cout<<"Class of 2016"<<endl;
	cout<<"My town is Rutland"<<endl;
	cout<<(5 + 4) *3<<endl;
	cout<<5.23 +7.495 - 10.334 + 11.77543<<endl;

	cout<<setiosflags(ios::fixed| ios::showpoint| ios::right);
	cout<<setprecision (2);// Sets decimal point
	cout<<5.23 +7.495 - 10.334 + 11.77543<<endl;

	cout<<"enter a number:";
	cin>>n1;

	cout<<"enter a number:";
	cin>>n2;

	n3 = n1 + n2;

	cout<<n1<<" + "<<n2<<" = "<<n3<<endl;




	return 0;//Tells the computer there is no more code
}//end main

