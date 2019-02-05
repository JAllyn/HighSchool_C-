// RandomNumbers.cpp : Defines the entry point for the console application.
//
/*		Jack Allyn
		September 26, 3013

		Program name: RandomNumbers.cpp
		Program Description: create a program using a 
		random number generator.

*/
#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h> // standard library
#include <time.h> //internal clock

using namespace std;

const int LOW = 1;
const int HIGH = 6;

int main()
{//begin

	int firstDie, secondDie; //pair of dice
	time_t seconds;

	time(&seconds);
	srand((unsigned int)seconds);
	
	/***************************************
		Heading Lines
	***************************************/

	cout<<setw(30)<<"Outcome of rolling the dice\n"
		<<setw(20)<<"10 times\n";

	for(int star = 1; star<=80; star++)
		cout<<"*";
	cout<<endl;


	for(int count=1; count <= 10000; count++)
{//begin for loop
	firstDie = rand() % (HIGH - LOW + 1) + LOW;
	secondDie = rand() % (HIGH - LOW + 1) + LOW;



	cout<<"Roll "<<count<<" ("<<firstDie<<" , "<<secondDie<<")"<<endl;
	}//end for loop

	return 0;
}//end

