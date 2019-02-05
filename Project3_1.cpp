// Project3_1.cpp : Defines the entry point for the console application.
/*
Author: Jack Allyn
Date: September 17, 2013

Program Name: Project3_1.cpp
Program Description:
		Susan purchases a computer for $985. The salse tax on the purchase is 5.5%. Compute and print the total purchase price

*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

const double salesTax = 0.055;
int main()
{//begin main
/* Declare and initialize variables */

	 string	customername = " ";
	 double price = 0.0,
			tax = 0.0,
			totalprice = 0.0;

	 /* Input Data */

cout<<"Enter your full name: ";
getline(cin,customername);

cout<<"\nEnter the price of the computer: ";
cin>>price;

/* Calculations */

tax = price * salesTax;
totalprice = price + tax;

/* Display the Output */
cout<<setiosflags(ios::fixed|ios::showpoint|ios::right)
	<<setprecision(2);

system("cls");  //clear the screen
cout<<"\n\nJ.B Lawncare\n";
cout<<"10 Brooke Haven Drive\n";
cout<<"Rutland, MA 01543\n";
cout<<"Customer Name: "<<customername<<endl;
cout<<"\n\nPrice: $"<<price<<endl;
cout<<"\n\nSales Tax: $"<<tax<<endl;
cout<<"\n\nTotal Price: $"<<totalprice;
cout<<"\n\nEnd of Run - Jack Allyn\n\n";



	





	return 0;
}//end main

