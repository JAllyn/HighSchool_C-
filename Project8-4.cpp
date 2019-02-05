// Project8-4.cpp : Defines the entry point for the console application.
/*
NAME: Jack Allyn
DATE: 5/21/14
PROJECT: 8-4
Description: Print a list of 5 candidates, the number of votes recieved and the percentage of total votes they recieved
from highest to lowest
*/

#include "stdafx.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include "string"

using namespace std;
vector <string> candidates(5);
vector <double> votes(5);
vector <double> perc(5);

void sortPerc(vector <string> &candidates, vector<double> &votes, vector <double> &perc);
void swap(string &x, string &y);
void swap(double &x, double &y);
void stars();

int main()
{//begin main

	/***********
	Declarations
	***********/
	double total = 0;

	candidates[0]="A";
	candidates[1]="B";
	candidates[2]="C";
	candidates[3]="D";
	candidates[4]="E";

	votes[0]=65.0;
	votes[1]=45.0;
	votes[2]=110.0;
	votes[3]=90.0;
	votes[4]=95.0;

	/************
	Calculations
	************/

	for(int i =0; i<5; i++)
	{//begin for
		

		total += votes[i];

		
	}//end for

	for(int i = 0; i<5; i++)
	{//begin for
		perc[i] = (votes[i] / total) *100;

		//cout<<perc[i]<<endl;

	}//end for
	stars();
	cout<<setw(55)<<"Class Elections"<<endl;
	stars();
	cout<<"\n\n";
	cout<<"\t"<<setw(10)<<"Candidates"<<setw(10)<<"Votes"<<setw(15)<<"Percentage"<<endl;

	sortPerc(candidates,votes,perc);

	for(int i = 0; i<5; i++)
	{//begin for
	
	cout<<"\t"<<setw(5)<<candidates[i]<<setw(14)<<votes[i]<<setw(12)<<setiosflags(ios::fixed)<<setprecision(0)<<perc[i]<<"%"<<endl;
	}//end for

	cout<<endl;

	return 0;
}//end main

/***********
Sort Function
***********/
void sortPerc(vector <string> &candidates, vector<double> &votes, vector <double> &perc)
{//begin sort
	int count = 5;
		int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for
			if(perc[i] < perc[i +1])
			{//begin if
				swap(perc[i],perc[i+1]);
				swap(candidates[i],candidates[i+1]);
				swap(votes[i],votes[i+1]);
				 
				exchangeMade = true;
			}//end if
		}//end for
	}//end while
}//end sort
	void swap(string &x, string &y)
{//swap
	string temp;

	temp = x;
	x = y;
	y = temp;
}//swap

	void swap(double &x, double &y)
{//swap
	double temp;

	temp = x;
	x = y;
	y = temp;
}//swap

	void stars()
	{//begin star
		for(int star = 1; star <100; star++)
			cout<<"*";
		cout<<endl;
	}//end star