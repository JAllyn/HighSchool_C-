// Midterm_3.cpp : Defines the entry point for the console application.
/*
Name: Jack Allyn
Date: January 17, 2014
Class: D Block
Name of Project: Hailstone Series
Description: Write a program that reads the first number 
in the series and then prints how many numbers are in the
series before it starts the ground state repeating series.
*/

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int main()
{//begin main
	/**************************************
					Variables
	**************************************/
	int n = 0,
		max = 0;
	/**************************************
				  Input & Title
	**************************************/
	cout<<setw(48)<<"**********************"<<endl;
	cout<<setw(45)<<"Hailstone Series"<<endl;
	cout<<setw(48)<<"**********************"<<"\n"<<endl;
	cout<<setw(28)<<"Please enter a number: ";
	cin>>n;
	cout<<"\n";
	int count = 1;
	max = n;

	/**************************************
				  While Loop
	**************************************/
	while(n!=4)
	{
		
		if(n%2==0)
			n = n / 2;
		else
			n = n * 3 +1;

			

			count++;
			
			cout<<setw(8)<<n<<endl;

			if(n >max)
			max = n;
			
	}
	/**************************************
					Output
	**************************************/
	cout<<"\n"<<setw(33)<<"The number you entered was: "<<n<<endl;
	cout<<"\n"<<setw(43)<<"The largest number in the series was: "<<max<<"\n"<<endl;
	cout<<setw(30)<<"It went through the loop "<<count<<" times."<<endl;
	cout<<"\n"<<setw(29)<<"End of Run - Jack Allyn\n"<<endl;
	return 0;
}//end main

