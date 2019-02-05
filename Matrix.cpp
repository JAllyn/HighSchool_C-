// Matrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include "string"
#include <vector>

using namespace std;

vector <string> col(4,"*"); //number of columns
vector <vector<string>>seatPlan(3,col); //number of rows
int main()
{// begin main

	seatPlan[0][0] = "empty";
	seatPlan[0][1] = "Alex";
	seatPlan[0][2] = "quinn";
	seatPlan[0][3] = "Kevin";

	seatPlan[1][0] = "Schoff";
	seatPlan[1][1] = "Andrew";
	seatPlan[1][2] = "Eli";
	seatPlan[1][3] = "Sarah";

	seatPlan[2][0] = "Noah";
	seatPlan[2][1] = "Jack";
	seatPlan[2][2] = "Zach";
	seatPlan[2][3] = "empty";

	cout<<setiosflags(ios::left);

	for(int row=0; row<seatPlan.size(); row++)
	{
		for(int column = 0; column<col.size(); column++)
		{
			cout<<setw(15)<<seatPlan[row][column];
		}//end column

		cout<<endl;
	}//end row

	return 0;
}//end main

