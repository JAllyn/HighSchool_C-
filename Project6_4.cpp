// Project6_4.cpp : Defines the entry point for the console application.
/*
NAME: Jack Allyn
DATE: 1/31/2014
CLASS: D-Block
TITLE: Perfect Numbers
DESCRIPTION: Create a program that displays all
perfect numbers under the value of 10000.
*/
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>



using namespace std;

int main()
{//begin main

/*************************
		Input
*************************/
	int x = 0,
		i = 1,
		I = 1,
		d = 0,
		sum = 0,
		cont = 0;

/************************
		Do - While
		statement
************************/
	do
	{
		system("cls");
		sum = 0;
		cout<<"Please enter a positive interger: ";
	cin>>x;
	cout<<"The perfect numbers under the value you input are: "<<endl;
	for(int I=1; I<=x; I++)
	{
		sum=0;
	for(int i=1;i<I;i++)
	{//begin for
		if(I%i==0)
		{
		sum += i;
		}
	}//end for
	if (sum==I)
		
		cout<<I<<endl;
	
	}
/************************
		Output
************************/
	if(sum==x)
		cout<<x<<" is a perfect number."<<endl;
	else if(sum>x)
		cout<<x<<" is abundant."<<endl;
	else
		cout<<x<<" is deficient."<<endl;

/************************
		Exit or rerun
************************/
	cout<<"If you would like to run the program\n"
		<<"press 1 or you can press 0 to exit: ";
	cin>>cont;


	}while(cont==1);
		//system("cls");

	cout<<"End of Run - Jack Allyn"<<endl;
	return 0;
}//end main

