// Vectors2014.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector <string> student (20);
vector <int> gradYr (20);
vector <int> even (100,0);
vector <int> number (100,0);//vector size = 100,
							//initial value = 0;
void stars ();

int main()
{//begin main

	int count = 0;

	/***********************
		Assigned value to each location
	***********************/
	student[0] = "Kevin";gradYr[0]=2016;
	student[1] = "Sara";gradYr[1]=2015;
	student[2] = "Quinn";gradYr[2]=2015;
	student[3] = "Alex";gradYr[3]=2015;
	student[4] = "Schoff";gradYr[4]=2015;
	student[5] = "Noah";gradYr[5]=2016;
	student[6] = "Jack";gradYr[6]=2016;
	student[7] = "Zack";gradYr[7]=2016;
	student[8] = "James";gradYr[8]=2014;
	student[9] = "Jake";gradYr[9]=2016;
	student[10] = "Peter";gradYr[10]=2016;
	student[11] = "Mike";gradYr[11]=2016;
	student[12] = "Wesley";gradYr[12]=2016;
	
	/**********************
		Display student Vector
	**********************/
	cout<<setiosflags(ios::left);
	for(int i=0; i < 13; i++)
	{
		cout<<setw(10)<<student[i]<<setw(10)<<gradYr[i]<<endl;
	}

	/**********************
		Search for all juniors
	**********************/
	cout<<setw(25)<<"\nAll Juniors"<<endl;
	stars();
	for(int j=0; j < 13; j++)
	{
		if(gradYr[j]==2015)
		cout<<setw(10)<<student[j]<<setw(10)<<gradYr[j]<<endl;
	}
	/*********************
		All Sophomores
	*********************/
	cout<<"\nAll Sophomores\n";
	stars();
	for(int j=0; j<13; j++)
	{
		if(gradYr[j]==2016)
		{
			cout<<setw(10)<<student[j]<<setw(10)<<gradYr[j]<<endl;
		}
	}
	cout<<"\n\n";//blank lines
	/*************************
		Assign Values to number()
	*************************/
	for(int n=0; n<10; n++)
	{
		cout<<"Enter an Interger: ";
		cin>>number[n];

	/*************************
		Check if number is even,
		if so, place into the 
		even number list.
	*************************/
		if(number[n]%2==0)
		{
			even[count] = number[n];
			count++;
		}
	}

	for(int x=0;x<count; x++)
	{
		cout<<even[x]<<endl;
	}
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