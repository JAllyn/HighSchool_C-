// Project8-2.cpp : Defines the entry point for the console application.
/*
NAME: Jack Allyn
DATE: 2/24/2014
Project: 8-3
DESCRIPTION: Read 10 real numbers and print the average of the
numbers followed by all the numbers that are greater than the average
*/
#include "stdafx.h"
#include <string>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

vector <double> test(100);
void printresults( vector<double> &t, double a, int count);
double avg(const vector<double> &t, int c);
void bubblesort (vector<double> &t, int c);
void bubbleSort (vector<double> &t, int c);
void swap(int &x, int &y);
void stars();

int main()
{//begin main

	double average = 0.0;
	int numCount = 0;

	/************************
		Input Data
	************************/

	cout<<"Enter a number or -999 to end: ";
	cin>>test[numCount];

	while(test[numCount] != -999 && numCount < (test.size()-1))
	{//begin while

		numCount++; //increment number count
		cout<<"Enter a number or -999 to end: ";
		cin>>test[numCount];

	}//end while

double h = 0.0,
	   l = 0.0;

average = avg(test, numCount);

printresults(test,average, numCount);

bubblesort(test, numCount);

cout<<"Sorted test scores\n";
stars();

printresults(test, average, numCount);
l = test[0];


bubbleSort(test, numCount);

cout<<"Sorted Test scores - High to Low\n";
stars();

printresults(test, average, numCount);
h = test[0];


cout<<"The highest number is "<<h<<" and the lowest is "<<l<<endl;

for(double i = 0; i < numCount; i++)

{
if(test[i]>average)
{
	cout<<"The numbers greater than the average are: "<<endl;
	cout<<test[i]<<endl;
}
}

cout<<"\n\nEnd of Run - Jack Allyn"<<endl;

	return 0;
}//end main

double avg(const vector<double> &t, int count)
{//average

double sum = 0;
for(double i=0; i < count; i++)
{
	sum += t[i];
}

return double(sum)/count;
}
/*******************************
	Print results of project
*******************************/

void printresults( vector<double> &t, double a, int count)
{//print 
	for(double i = 0; i <count; i++)
	{
		cout<<test[i]<<endl;
	}
	cout<<"The average of the test scores is "<<a<<endl;

	
}//end print

/******************************************
	Bubblesort - This will sort the vector
	from the smallest to largest.
******************************************/
void bubblesort(vector<double> &t, int count)
{//begin bubblesort

	double k = 0;

	bool exchangeMade = true;

	/**************************
		Make up to n-1 passes
		through the vector,
		exit early if no exchanges
		are made on previous pass
	**************************/

	while((k < count-1)&& exchangeMade)
	{//begin while()

		exchangeMade = false;
		k++;

		for(double j=0; j<count-k; j++)
		{//begin for
			if (t[j] > t[j+1])
			{
				swap(t[j],t[j+1]);
				exchangeMade = true;
			}
		}//end for
	}
}//end bubblesort
void bubbleSort(vector<double> &t, int count)
{//begin bubblesort

	double k = 0;

	bool exchangeMade = true;

	/**************************
		Make up to n-1 passes
		through the vector,
		exit early if no exchanges
		are made on previous pass
	**************************/

	while((k < count-1)&& exchangeMade)
	{//begin while()

		exchangeMade = false;
		k++;

		for(double j=0; j<count-k; j++)
		{//begin for
			if (t[j] < t[j+1])
			{
				swap(t[j],t[j+1]);
				exchangeMade = true;
			}
		}//end for
	}
}//end bubblesort
	/***************************************
		swap() - This method will switch 
		the position of the numbers.
	***************************************/
	void swap(int &x, int &y)
	{//begin swap

		int temp = 0; //local variable
		temp = x; //assign the value of x to temp
		x = y; //x takes on the value of y
		y = temp; //y takes on the value of temp

	}//end swap

	/***********************************
	 stars() - prints out line of stars
	***********************************/
	void stars()
	{//begin star
		for(int star = 1; star <50; star++)
			cout<<"*";
		cout<<endl;
	}//end star