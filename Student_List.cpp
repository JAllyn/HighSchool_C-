// Student_List.cpp : Defines the entry point for the console application.
/*
NAME: Jack Allyn
DATE: March 3, 2014

Program Name: Student List
Description: Assign values to parallel vectors and sort them
*/

#include "stdafx.h"

#include <string>
#include <iomanip>
#include <iostream>
#include <vector>

using namespace std;

vector <string> last(10," ");
vector <string> first(10," ");
vector <int> age(10,0);

void sortLast(vector <string> &l, vector <string> &f, vector <int> &a, int count);
void swap(string &a, string &b);
void swap(int &a, int &b);
void printResult(vector <string> last, vector <string> first, vector <int> age, int count);


int main()
{//begin main

	int count = 5;

	last[0]="Washington";first[0]="George";age[0]=57;
	last[1]="Adams";first[1]="John";age[1]=61;
	last[2]="Jefferson";first[2]="Thomas";age[2]=57;
	last[3]="Madison";first[3]="James";age[3]=57;
	last[4]="Monroe";first[4]="James";age[4]=58;

	printResult(last,first,age,count);

	sortLast(last,first,age,count);
	
	printResult(last,first,age,count);

	return 0;
}//end main
/**************************************
	sortLast() - sorts by last name
**************************************/

void sortLast(vector <string> &l, vector <string> &f, vector <int> &a, int count)
{//begin sortlast

	int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for

			if(l[i] > l[i+1])
			{//begin if
				swap(l[i],l[i+1]);
				swap(f[i],f[i+1]);
				swap(a[i],a[i+1]);
				exchangeMade = true;
			}//end if

		}//end for


	}//end while


}//end sortlast
/**********************************************
	swap() - switches positions for string
**********************************************/
void swap(string &x, string &y)
{
	string temp;

	temp = x;
	x = y;
	y = temp;
}
void swap(int &x, int &y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}
/************************************
	Print Result
************************************/
void printResult(vector <string> last, vector <string> first, vector <int> age, int count)
{//begin printResult
	
	for(int i=0;i<count;i++)
	{
		/*cout<<setiosflags(ios::right);
		cout<<setw(2)<<i+1<<"  "; 
		*/
		cout<<setiosflags(ios::left);
		cout<<setw(20)<<last[i]
		<<setw(20)<<first[i]
		<<setw(20)<<age[i]<<endl;
	}

}//end printResult