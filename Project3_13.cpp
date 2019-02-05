// Project3_13.cpp : Defines the entry point for the console application.
/* 
	Author: Jack Allyn
	Date: September 20, 2013

Program Name: Project3_13.cpp
Program Description: A supermarket wants to install a computerized weighing system in the produce department.
Input to this system will consist of a single letter identifier for the type of produce, the weight of the produce purchase
(in pounds), and the cost per pound of the produce.

*/

#include "stdafx.h"
#include <string>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{//begin

	char letter; //single letter identifier

		double weight = 0.0, //weight of the produce
			   plb = 0.0, //cost per pound
			   cost = 0.0; //total cost

	cout<<"Enter Description: ";
			cin>>letter;

	cout<<"\nEnter Weight: ";
			cin>>weight;

	cout<<"\nEnter Cost Per Pound: ";
		cin>>plb;

	//calculations
		cost = weight * plb;


	
		
system("cls");
cout<<setiosflags(ios::fixed|ios::showpoint|ios::right)
	<<setprecision(2);
		


	cout<<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% "<<endl;

	cout<<"\n\tPenny Spender Super Market";
	cout<<"\n\t   Produce Department"<<endl;
	cout<<"\n\nItem\tWeight\t Cost/lb\tCost"<<"\n\n";
	cout<<letter<<"\t";
	cout<<weight<<" lb\t ";
	cout<<" $"<<plb<<"\t        ";
	cout<<"$"<<cost<<endl;

	cout<<"\n\n\t\tThank You!"<<endl;
	cout<<" %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% "<<endl; 

	cout<<"\n\nEnd of Run - Jack Allyn\n\n";






	return 0;
}//end

