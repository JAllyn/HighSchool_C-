// Project_5_1.cpp : Defines the entry point for the console application.
/* Project Description:
	A three minute phone call to Scio, New York
	costs $1.15. Each additional minute costs $0.26.
	Given the total time of call in minutes,
	calculate and Print the cost.
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{// begin main

	double lengthOfCall = 0.0;
	int minutes = 0;

	double totalCost = 0.0;

	cout<<"Enter the length of the call: ";
	cin>>lengthOfCall;

	minutes = ceil(lengthOfCall);

	if (minutes <= 3)
		totalCost = 1.15;
	else
		totalCost = 1.15 + (minutes - 3) * .26;

	cout<<"\n\nThe cost for a phonecall lasting "<<lengthOfCall<<" is "<<totalCost<<endl;





	return 0;
}//end main

