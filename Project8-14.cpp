// Project8-14.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include "string"

using namespace std;

//vector<int>input(16," ");
//const int constant = 34;
vector<int>col(4,0);
vector<vector<int>> magicSquare(4,col);
vector<int>rows(4,0);
//vector<int>column(4,0);
vector<int>rowSum(4,0);
vector<int>colSum(4,0);
vector<int>diagnol(4,0);

int main()
{//begin main
	int magic = 0;
	/*
	int rowSum = 0,
		colSum = 0;
	*/	

	/*input[0] = "row 1:";
	input[1] = "row 2:";
	input[2] = "row 3:";
	input[3] = "row 4:";
/*
	/*magicSquare[0][0]=16;magicSquare[0][1]=3;magicSquare[0][2]=2;magicSquare[0][3]=13;
	magicSquare[1][0]=5;magicSquare[1][1]=10;magicSquare[1][2]=11;magicSquare[1][3]=8;
	magicSquare[2][0]=9;magicSquare[2][1]=6;magicSquare[2][2]=7;magicSquare[2][3]=12;
	magicSquare[3][0]=4;magicSquare[3][1]=15;magicSquare[3][2]=14;magicSquare[3][3]=1;*/

	cout<<"Please enter positive interger:";

	for(int i =0; i<magicSquare.size(); i++)
	{
		for(int j = 0; j <col.size(); j++)
		{
	cin>>magicSquare[i][j];
		}
	}
	
	for(int column = 0;column<col.size(); column++)
	{
		

	

	for(int row = 0;row<rows.size();  row++)
		{
			
			rowSum[row] += magicSquare[row][column];
			colSum[column] += magicSquare[row][column];
		}
	//cout<<rowSum;

	}cout<<endl;

	for(int column = 0;column<col.size(); column++)
	{
		

	

	for(int row = 0; row<magicSquare.size(); row++)
		{
			
			
			
		}
	//cout<<rowSum;

	
	}cout<<endl;

	diagnol[0] += magicSquare[0][0] + magicSquare[1][1] + magicSquare[2][2] + magicSquare[3][3];
	diagnol[1] += magicSquare[0][3] + magicSquare[1][2] + magicSquare[2][1] + magicSquare[3][0];

	for(int i =0; i<4; i++)
	{
	if(rowSum[i] == colSum[i]&&rowSum[i]== diagnol[i]&&diagnol[i]==colSum[i])
	{
		magic=1;
	}
	}


	if(magic==1)
	{
		cout<<"The square is magic";
	}
	else
		cout<<"The square is not magic";
	
/********************************
	Print Result
********************************/
	for(int row=0; row<magicSquare.size(); row++)
	{cout<<endl;
		//cout<<input[row]<<"\t";
		
		
		for(int column = 0; column<col.size(); column++)
		{
			cout<<"\t"<<magicSquare[row][column];
			
		}
	//	cout<<column[row][column];
		cout<<setw(10)<<"RowSum:"<<rowSum[row];
		cout<<endl;
		
		cout<<endl;
		
	}
	cout<<endl;
	cout<<"ColSum:";
	for(int i =0; i<4; i++)
		{
			cout<<colSum[i]<<"\t";
		}
	cout<<endl;
	cout<<endl;
	cout<<"diagonal1:"<<diagnol[0];
	cout<<endl;
	cout<<"Diagonal2:"<<diagnol[1];
	cout<<endl;
	return 0;
}//end main

