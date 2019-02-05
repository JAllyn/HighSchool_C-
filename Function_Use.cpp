// Function_Use.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;
/*********************
 Function Declarations
*********************/


int getInteger(string s); //A function that will return an interger when called
double getDouble(string s); //function that will return a double value
double sqRoot(int a); //calculates the square root of the interger
double sqRoot(double a); //calculates square root of the double

void displayValues (int x, double y, double a, double b);
void welcome();



int main()
{//begin main()
/***************************
	Declare and initialize variables
***************************/
	int number1=0;
	welcome ();
		
	
	double sqRt = 0.0,
		dblSqRt = 0.0,
		number2 = 0.0;
/************************
	Input data
************************/
	number1 = getInteger("Enter an integer Value, then press enter: ");
	number2 = getDouble("Enter a double Value, then press enter: ");


/***********************
	Calculations
***********************/

	sqRt = sqRoot(number1);
	dblSqRt = sqRoot(number2);

/***********************
	Display output
***********************/
	displayValues (number1, number2, sqRt, dblSqRt);

	



	return 0;
}//end main()

/****************************************
	getInterger()

	Precondition: User will call the function for a value
	Postcondition: Function will return an interger

****************************************/






int getInteger(string s)
{//begin getInterger
	int x;		//local variable
	cout<<s;
	cin>>x;

	return x;



}//end getInterger
/****************************************
	getInterger()

	Precondition: User will call the function for a value
	Postcondition: Function will return an interger

****************************************/






double getDouble(string s)
{//begin getDouble
	double x;		//local variable
	cout<<s;
	cin>>x;

	return x;



}//end getDouble
/************************************************
	sqRoot(int a) -
	Precondition: Value sent to function
			to have square root calculated
	Postcondition: Return Square root 
				of the value.
************************************************/

double sqRoot(int a)
{//Begin sqRoot
	double y;

	y = sqrt(double (a)); //convert (int a) to a double

	return y;



}//end sqRoot
/************************************************
	sqRoot(int a) -
	Precondition: Value sent to function
			to have square root calculated
	Postcondition: Return Square root 
				of the value.
************************************************/

double sqRoot(double a)
{//Begin sqRoot
	double y;

	y = sqrt(a); //calculate the square root of a 

	return y;



}//end sqRoot

/**********************************
	Display Values ()

	Precondition: Values are sent from the main()
	to be printed.

	Postcondition: Screen display of values.
**********************************/

void displayValues (int x, double y, double a, double b)

{//begin display values

	cout<<"The square root of "<<x<<" is "<<a<<endl;
	cout<<"The square root of "<<y<<" is "<<b<<endl;
	




}// end display values
/*********************
	welcome () - displays a welcome screen
*********************/

void welcome()

{//begin welcome
	int cont; //variable to continue program
	system ("cls"); //clear the screen

	cout<<"\n\nWelcome to WRHS Calculator\n\n";

	cout<<"Hit 1 to continue";
	cin>>cont;

}//end welcome
