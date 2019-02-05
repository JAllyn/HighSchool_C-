// Project8-9-10-11.cpp : Defines the entry point for the console application.
/*
NAME: JACK ALLYN
DUE DATE: 5/21/2014
PROJECT: 8-9, 8-10, 8-11
DESCRIPTION:

8-9: Write a program that will, given test scores, find the standard deviation of the numbers.
8-10: Write a program that will print a list of test score more than one standard deviation above the average
and one standard deviation below the average.
8-11: Print a list showing test scores (highest to lowest) and the corresponding z-score.

*/
#include "stdafx.h"
#include <vector>
#include <iomanip>
#include <iostream>
#include "string"

using namespace std;

vector <double> wind(46);
vector <double> variance(46);
vector <double> zscore(46);
int menu();

void swap(string &x, string &y);
void swap(int &x, int &y);
void zedScore(vector <double> &zscore, vector <double> &wind, int count);
void stars();

int main()
{//begin main
	/****************
		Declarations
	****************/
	int choice;
	int count = 46;
	double avg = 0.0,
		t = 0.0,
		avgd = 0.0,
		sq = 0.0,

		total = 0.0;

	/*******************
		DATA
	*******************/
	wind[0]=26.0; wind[6]=14.0; wind[12]=18.0; wind[18]=14.0; wind[24]=113.0; wind[30]=50.0; wind[36]=13.0; wind[41]=22.0;
	wind[1]=27.0; wind[7]=57.0; wind[13]=28.0; wind[19]=50.0; wind[25]=72.0; wind[31]=52.0; wind[37]=105.0; wind[42]=138.0;
	wind[2]=16.0; wind[8]=33.0; wind[14]=18.0; wind[20]=16.0; wind[26]=32.0; wind[32]=26.0; wind[38]=11.0; wind[43]=16.0;
	wind[3]=17.0; wind[9]=14.0; wind[15]=57.0; wind[21]=100.0; wind[27]=35.0; wind[33]=20.0; wind[39]=21.0; wind[44]=34.0;
	wind[4]=18.0; wind[10]=13.0; wind[16]=18.0; wind[22]=28.0; wind[28]=21.0; wind[34]=13.0; wind[40]=25.0; wind[45]=19.0;
	wind[5]=11.0; wind[11]=19.0; wind[17]=22.0; wind[23]=19.0; wind[29]=15.0; wind[35]=20.0;

	/*******************
		Calculations
	*******************/
	for(int i = 0; i < 46; i++)
	{//begin for
		total += wind[i];
	}//end for
	
	avg = total / 46;

	//cout<<avg<<endl;

	for(int i = 0; i < 46; i++)
	{//begin for
		variance[i] = pow((wind[i] - avg),2);
		t += variance[i];
		
	}//end for
	avgd = t / 46;
	sq = sqrt(avgd);
	//cout<<sq<<endl;


	for(int i = 0; i < 46; i++)
	{//begin for
		zscore[i] = (wind[i] - avg) / sq;
			//cout<<zscore[i]<<endl;
	}//end for

	/*******************************
		Case Statements
	*******************************/

	do
	{// begin do-while
		choice = menu();


	switch(choice)
{//begin switch

	case 1:// above standard deviation
		system("cls");
		cout<<"The numbers one above the standard deviation are:"<<endl;
	for(int i =0; i<46; i++)
	{//begin for
	if(wind[i] > (sq + sq))
	{//begin if
		cout<<wind[i]<<endl;
	}//end if
	}//end for
		system("pause");

		break;

	case 2: //Below standard deviation

			system("cls");
			cout<<"The numbers one below the standard deviation are:"<<endl;
	for(int i =0; i<46; i++)
	{//begin for
	if(wind[i] < (avg - sq))
	{//begin if
		cout<<wind[i]<<endl;
	}//end if
	}//end for

		system("pause");

		break;

	case 3://Display test score and z-score
		system("cls");
	

		zedScore(zscore, wind, count);
		cout<<setw(26)<<"Test Score"<<setw(18)<<"Z-Score"<<endl;
		stars();
		for(int i=0; i<46; i++)
		{//begin for
		cout<<setw(22)<<wind[i]<<setw(22)<<zscore[i]<<endl;
		}//end for
		
		system("pause");
		break;
	case 4: // Display standard deviation
		system("cls");
		cout<<"The standard deviation is: ";
		cout<<sq<<endl;
		system("pause");
		break;
	case 0: //exit

			system("cls");
		cout<<"\n\nTHANK YOU FOR USING THE PROGRAM\n"<<endl;
		cout<<"End of Run - Jack Allyn"<<endl;

		break;

	default:


		cout<<"\nERROR. PLEASE CHOOSE AGAIN.\n";
		cout<<endl;
		system("pause");

		

}//end switch
	}while(choice!=0);
	return 0;
}//end main


/*******************
	Menu
*******************/

int menu()
{//begin menu
	int choice;
	system("cls");
	cout<<"1) Display list of scores that are one standard deviation above the average"<<endl;
	cout<<"2) Display list of scores that are one standard deviation below the average"<<endl;
	cout<<"3) Display the z-score"<<endl;
	cout<<"4) Display Standard Deviation"<<endl;
	cout<<"0) Exit"<<endl;

	cout<<"Please enter your choice: ";
	cin>>choice;

	return choice;
}//end menu
/********************
	Swap Fuctions
********************/
	void swap(string &x, string &y)
{//swap
	string temp;

	temp = x;
	x = y;
	y = temp;
}//swap

	void swap(int &x, int &y)
{//swap
	int temp;

	temp = x;
	x = y;
	y = temp;
}//swap


	/*************
		ZedScore
	*************/

	void zedScore(vector <double> &zscore,vector <double> &wind, int count)
			{//begin sort zed

	int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for

			if(wind[i] < wind[i+1])
			{//begin if

				swap(wind[i],wind[i+1]);
				swap(zscore[i],zscore[i+1]);
				


				exchangeMade = true;
			}//end if

			
		}//end for
	}//end while
	}//end sort zed

	/***********************************
	 stars() - prints out line of stars
	***********************************/
	void stars()
	{//begin star
		for(int star = 1; star <101; star++)
			cout<<"*";
		cout<<endl;
	}//end star