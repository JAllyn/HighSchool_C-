// Project3_15.cpp : Defines the entry point for the console application.
/*
Jack Allyn 
October 8, 3013
Project: Project3_15.cpp
Description: Write a test program that allows you to see a
character contained within the character set of your computer
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>
#include <time.h>

using namespace std;
int main()
{// begin main

	int x = 0; //define variables
	cin>>x;

	system("cls"); //clear screen


	cout<<"Character number "<<x<<" is "<<char(x)<<endl; //output

	cout<<"\n\nEnd of Run- Jack Allyn"<<endl;



	return 0;
}//end main

