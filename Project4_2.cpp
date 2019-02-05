// Project4_2.cpp : Defines the entry point for the console application.
/*
Jack Allyn 
October 29, 2013
Project: Project4_2.cpp
Description: Write a program to compute the cost for carpeting a room.

*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>



	using namespace std;

/*************************
	Function Declarations
*************************/
double getDouble(string s);



int main()
{//begin main
	/*************************
		Declare Variables
	*************************/

	double x = 0.0,
		   y = 0.0,
		   z = 2.95;
	double sqft = 0.0;
	double cptpr = 0.0;
	double yard = 0.0;
	double p = 0.0;
	double pad = 0.0;
	double instal = 0.0;
	double labor = 0.95;
	double tp = 15.85;
	double total = 0.0;
	
	/*
Input Data
*/



	
x = getDouble("Enter the Length of the room: ");

y = getDouble("Enter the width of the room: ");

p = getDouble("Enter the price per square yard of the carpet: ");

	/*
	Calculations
	*/

	sqft = x * y;
	yard = ceil((x *y) / 9.0);
	cptpr = p * yard;
	pad = z * yard;
	instal = labor * yard;
	
	total = yard * tp;


/*
Display Values
*/
system("cls");

cout<<setprecision(5);

cout<<"The dimensions of the room (in feet) are "<<x<<" x "<<y<<"."<<endl;
cout<<"The area in yards is: "<<yard<<" square yards."<<endl;
cout<<"The carpet price is: "<<"$"<<p<<" per yard."<<endl;
cout<<"\n\nRoom Dimensions:\t\t "<<x<<" x "<<y<<endl;
cout<<"\nCarpet Required:\t\t "<<yard<<" square yards "<<endl;
cout<<"\nCarpet price/yard:\t\t "<<"$"<<p<<endl;
cout<<"\nPad price/yard:\t\t\t "<<"$"<<z<<endl;
cout<<"\nThe instalation price is:\t "<<"$"<<labor<<endl;
cout<<"\nTotal price/yard:\t\t "<<"$"<<tp<<endl;
cout<<setiosflags(ios::showpoint);
cout<<"\nTotal Price:\t\t\t "<<"$"<<total<<endl;

cout<<"\n\nEnd of Run - Jack Allyn"<<endl;




	return 0;
}//end main

double getDouble(string s)

{//begin getDouble

	double t;

	cout<<s;

	cin>>t;

	return t;



}//end getDouble






