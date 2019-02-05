// Project_4-1.cpp : Defines the entry point for the console application.

/*quadratic equation ax2+bx+c=0
coefficients: a , b
quadratic formula: x=-b+- sqrt b2-4ac / 2a
b2 - 4ac

if b2 - 4ac is less than zero 
then print not a real number
if b2 - 4ac is equal to zero 
then print only one solution
if b2 - 4ac is greater than zero
then print two real solutions

note discriminant = b2 - 4ac

print discriminant
*/


#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

/****************************
	Declare Functions
****************************/
	
void getData(int &a, int &b, int &c);

int main()
{//begin main

/*************************
	Declare variables
*************************/

int a, b, c;

int discriminant;


/*************************
	input data
/************************/

getData(a, b, c);

/************************
	Calculations
************************/
discriminant = b*b - 4*a*c;

/************************
	determine if the discriminant id
	positive -2 real solutions
	0- 1 real solution 
	negative no solution
************************/


if(discriminant > 0)
{// begin >0
	cout<<"discriminant is positive.  \n";
	cout<<"Two real Solutions\n";
}//end >0

else if (discriminant == 0)

{
	cout<<"discriminant is zero.  \n";
	cout<<"Ome real Solutions\n";

}
else 

{
	cout<<"discriminant is negative.  \n";
	cout<<"No real Solutions\n";


}





	return 0;
}//end main

/****************************
	getData()
****************************/

void getData(int &a, int &b, int &c)
{//begin getData

	cout<<"Enter the value for 'A': ";
	cin>>a;
	cout<<"\nEnter the value for 'b': ";
	cin>>b;
	cout<<"\nEnter the value for 'c': ";
	cin>>c;



}//end getData

