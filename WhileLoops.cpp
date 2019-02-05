// WhileLoops.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{//begin main

	/********************************
		While () loop - pretest loop
		The condition is tested before
		it enters the body of the loop.
	********************************/

	/*******************************
		Enter 10 numbers, add them
		together and print out the
		result.

		The sentinel value is the 
		used to end or break out of 
		the loop.
	*******************************/

	double	n = 0, //value
			sum = 0, //total of the values entered
			count = 1, //counts the number of values
			i = 0;
	/*cout<<"Enter a number or a -999 to end: ";
	cin>>n;

	while(n != -999)

	{//begin while

		

		cout<<"Number = "<<"\t"<<n<<"\tcount = \t"<<count<<endl;
		sum += n; //sum = sum + n

		if(count >= 5)
			n = -999;
		else
		{
	cout<<"Enter a number or a -999 to end: ";
	cin>>n;
	count++; //increment count
		}

	}//end while

	cout<<"sum= "<<sum<<endl;
	cout<<"Average = "<<sum/count<<endl;
	/******************************************
		do...while() - This is a post test loop.
		This means the condition is tested at the
		end of the loop. This loop will run at least
		once.
	******************************************/
/*
	n = 0;
	count = 0;
	sum = 0;

	do
	{// begin do...while()

		cout<<"Enter a number or a -999 to end: ";
		cin>>n;
		count++; //increment count

		cout<<"Number = "<<"\t"<<n<<"\tcount = \t"<<count<<endl;
		sum += n; //sum = sum + n

		if(count >= 5)
			n = -999;

		
	}while(n != -999);

/*************************************************
		for loop - counting loop 
		this loop will only perform a 
		certain amount of times
*************************************************/
	count = 0;
	for ( int i = 1; i <=10; i++)
	{
			cout<<"Enter a number: ";
			cin>>n;
			count++;
			cout<<"Number = "<<"\t"<<n<<"\tcount = \t"<<count<<endl;
			sum += n;
		
	}

	cout<<"sum  = "<<sum<<endl;
	cout<<"Average = "<<sum/count<<endl;

	return 0;
}//end main

