// Project_5_20.cpp : Defines the entry point for the console application.
/*
	Jack Allyn
	December 3, 2013

	Program Name: Planets
	Program Description: Project 5-20,
	Write an interactive program that allows you to 
	enter your earth weight and your choice planet
	to which you would like to be converted
*/

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

int menu();
void displayResult(string, double, double);

int main()
{//Begin main

	int choice;
	double weight, // weight on earth
		planetweight; // weight on planet

	
	do
	{//begin the do... while

		choice = menu(); //calls the menu display
					 //and returns the users choice

	if(choice > 0 && choice <= 10)
	{
		cout<<"\nEnter your weight on Earth: ";
		cin>>weight;
	}

/***************************************************
	Switch Statement
***************************************************/
	switch(choice)
	{//begin switch

	case 1: // MERCURY
	
		planetweight = weight *.38;

		displayResult("MERCURY",weight,planetweight);

		break;

	case 2: // VENUS

		planetweight = weight *.78;

		displayResult("VENUS",weight,planetweight);

		break;
	case 3: // EARTH

		planetweight = weight * 1;

		displayResult("EARTH",weight,planetweight);


		break;
	case 4: // EARTH'S MOON

		planetweight = weight *.16;

		displayResult("EARTH'S MOON",weight,planetweight);

		break;

		case 5: // MARS

		planetweight = weight * .39;

		displayResult("MARS",weight,planetweight);

		break;

		case 6: // JUPITER

		planetweight = weight * 2.65;

		displayResult("JUPITER",weight,planetweight);

		break;

		case 7: // SATURN

		planetweight = weight * 1.17;

		displayResult("SATURN",weight,planetweight);

		break;

		case 8: // URANUS

		planetweight = weight * 1.05;

		displayResult("URANUS",weight,planetweight);

		break;

		case 9: // NEPTUNE

		planetweight = weight * 1.23;

		displayResult("NEPTUNE",weight,planetweight);

		break;

	case 10: // PLUTO

		planetweight = weight * .05;

		displayResult("PLUTO",weight,planetweight);

		break;

	case 0: // EXIT

		system("cls");
		cout<<"\n\nTHANK YOU FOR USING THE PROGRAM\n"<<endl;
		cout<<"End of Run - Jack Allyn"<<endl;

		break;

	default:
		
		cout<<"\nERROR. PLEASE CHOOSE AGAIN.\n";
		cout<<endl;
		system("pause");


	}//end switch
	}while(choice != 0);

	return 0;
}//End main
/***************************************************
	menu() -
	precondition: User calls for display
	of planets.

	postcondition: returns the users choice.
***************************************************/
int menu()
{//Begin menu

	int choice;  // local variable whose value is returned to the calling function - menu()


	system("cls"); //clear the screen

	cout<<"\n\n"<<setw(30)<<"WELCOME TO THE\n"
		<<setw(32)<<"PLANET CONVERTER\n\n";

	cout<<setw(50)<<"\n   PLEASE MAKE A CHOICE FROM THE FOLLOWING NUMBERS:\n"<<endl;

	cout<<setw(25)<<"1)   MERCURY\n";
	cout<<setw(23)<<"2)   VENUS\n";
	cout<<setw(23)<<"3)   EARTH\n";
	cout<<setw(30)<<"4)   EARTH'S MOON\n";
	cout<<setw(22)<<"5)   MARS\n";
	cout<<setw(25)<<"6)   JUPITER\n";
	cout<<setw(24)<<"7)   SATURN\n";
	cout<<setw(24)<<"8)   URANUS\n";
	cout<<setw(25)<<"9)   NEPTUNE\n";
	cout<<setw(23)<<"10)  PLUTO\n";
	cout<<setw(22)<<"0)   EXIT\n";

	cout<<"\n\nPLEASE ENTER YOUR CHOICE ==>";
	cin>>choice;


	return choice;
}//end menu
/*********************************************
	displayResult()
		Shows the results
*********************************************/
void displayResult(string p, double w, double pw)
{//begin displayResult

	int con;

	system("cls"); //clear screen

	cout<<"YOUR WEIGHT ON EARTH: "<<w<<endl;
	cout<<"YOUR WEIGHT ON "<<p<<" IS "<<pw;

	cout<<"\n\nHIT 1 TO CONTINUE.";
	cin>>con;

	
}//end displayResult