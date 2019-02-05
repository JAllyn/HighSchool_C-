// Testscorematrix.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include "string"

using namespace std;

vector<string> names(4," ");
vector<int> col(3,0);//Number of columns
vector<vector<int>> testScores(4,col);//Number of rows
vector<double> rowAvg(4,0.0);// parallel vectors


int main()
{//begin main

	int rowSum = 0.0;

		  

	names[0] = "Arthur";
	names[1] = "Betty";
	names[2] = "Charlie";
	names[3] = "DiLeo";


	testScores[0][0] = 70; testScores[0][1] = 80; testScores[0][2] = 22;
	testScores[1][0] = 100; testScores[1][1] = 95; testScores[1][2] = 105;
	testScores[2][0] = 80; testScores[2][1] = 70; testScores[2][2] = 82;
	testScores[3][0] = 92; testScores[3][1] = 70; testScores[3][2] = 85;
/**********************
 Calculating row average
**********************/
	for(int row=0; row<testScores.size(); row++)
	{rowSum = 0;
		for(int column = 0; column<col.size(); column++)
		{
			rowSum += testScores[row][column];
		}



		//cout<<rowSum<<endl;
		rowAvg[row] = rowSum/3.0;
		//cout<<rowAvg[row]<<endl;
	}
/********************
	Print Result
********************/
	cout<<setiosflags(ios::showpoint|ios::fixed|ios::right);
	cout<<setprecision(1);
	for(int row=0; row<testScores.size(); row++)
	{
		cout<<names[row]<<"\t";
		for(int column = 0; column<col.size(); column++)
		{
			cout<<testScores[row][column]<<"\t";
			
		}
		cout<<rowAvg[row];
		cout<<endl;
	}
	return 0;
}//end main

