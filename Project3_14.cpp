// Project3_14.cpp : Defines the entry point for the console application.
/*
Jack Allyn 
October 7, 3013
Project: Project3_14.cpp
Description:Given the number of memory cards, disk drives, and sofware packages
desired by a customer purchasing an NW-PC, print out a bill of sale.


*/

#include "stdafx.h" //Libraries
#include <iomanip>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main()
{//begin main

		int pcn, //define intergers
			mcn,
			ddn,
			swn;

		double pc = 675.00, //define doubles
			   mc = 69.95,
			   dd = 198.50,
			   sw = 34.98;
			   
//start of code for input of items

	cout<<"\t***************************************"<<endl;
	cout<<"\t\tNew wave Computers"<<endl;
	cout<<"Enter Number of NW-PC: ";
		cin>>pcn;

	cout<<"Enter the number of Memory cards: ";
		cin>>mcn;

	cout<<"Enter the number of disk drives: ";
		cin>>ddn;

	cout<<"Enter the number of software: ";
		cin>>swn;

	

		system("cls"); //clear the screen

		double pct = pcn * pc, //Define more doubles and do calculations
			   mct = mcn * mc,
			   ddt = ddn * dd,
			   swt = swn * sw,
			   total = pct + mct + ddt + swt;


cout<<setiosflags(ios::fixed|ios::showpoint|ios::right) //formatting
	<<setprecision(2);

cout<<"***************************************"<<endl; //start of output
	cout<<"\tNew wave Computers"<<endl;

	cout<<"Item\t\t\t\tCost"<<endl;
	cout<<pcn<<" NW-PC "<<"\t\t\t"<<pct<<endl;
	cout<<mcn<<" Memory Card"<<"\t\t\t"<<mct<<endl;
	cout<<ddn<<" Disk Drive "<<"\t\t\t"<<ddt<<endl;
	cout<<swn<<" Software "<<"\t\t\t"<<swt<<endl;
	cout<<"\n\n\t\tTotal\t"<<total<<endl;


	cout<<"\n\nEnd of Run- Jack Allyn"<<endl;







	return 0;
}//end main

