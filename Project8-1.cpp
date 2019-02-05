// Project8-1.cpp : Defines the entry point for the console application.
/*
Name: Jack Allyn
Date: 2/4/2014
Class: D-Block
Project: Even, Odd, Negative
Description: Place the numbers into a vector called
even, odd, and negative. Print all three after all
numbers have been read.
*/

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <int> even (10,0);
vector <int> odd (10,0);
vector <int> negative (10,0);
vector <int> number (10,0);
void stars();
int main()
{//begin main
	int evencount = 0,
		oddcount = 0,
		negcount = 0;
			
	for(int i=0; i<10; i++)
	{
		cout<<"Enter a number: ";
		cin>>number[i];

		if(number[i]<0)
		{

			negative[negcount]=number[i];
			negcount++;
		}
		else if(number[i]%2==0)
		{
			even[evencount] = number[i];
			evencount++;
		}
		else
		{
			odd[oddcount]=number[i];
		oddcount++;
		}
	}

	cout<<"\nNegatives\n";
	stars();
	for(int i=0; i<negcount; i++)
	{
		cout<<negative[i]<<endl;
	
	}
	stars();
	cout<<"\nPositives\n";
	stars();
	for(int i=0; i<evencount; i++)
	{
		cout<<even[i]<<endl;
	}
	stars();
	
	cout<<"\nOdds\n";
	stars();
	for(int i=0; i<oddcount; i++)
	{
		cout<<odd[i]<<endl;
	}
	stars();
	return 0;
}//end main

void stars()
{
	for(int star = 1;star<80;star++)
	{
		cout<<"*";
	}

	cout<<endl;
}