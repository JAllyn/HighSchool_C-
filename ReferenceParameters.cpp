// ReferenceParameters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

/****************************************
			Declare Functions
	****************************************/

	void getData(int &x, int &y); //call for data
	void swap(int &a, int &b);
	void swap(double &c, double &d);
	void swap(string &n, string &p);
	void getDouble(double &x, double &y);
	void getString(string &n, string &p);
int main()
{//begin main()

	

	/****************************************
			Declare Variables
	****************************************/

	int length = 0,
		width = 0,
		perimeter = 0,
		area = 0,

		n1=0, n2=0;
	double d1=0.0,
		   d2=0.0;

	string s1 = " ",
		   s2 = " ";

	/****************************************
			input data
	****************************************/
/*
	getData(length , width);
	area = length * width;
	perimeter = (2 * length) + (2 * width);

	cout<<"length "<<length<<" and "<<"width "<<width<<"\n\n"<<endl;
	cout<<"Area: "<<area<<endl;
	cout<<"Perimeter: "<<perimeter<<endl;

	getData(length , width);
	area = length * width;
	perimeter = (2 * length) + (2 * width);

	cout<<"length "<<length<<" and "<<"width "<<width<<"\n\n"<<endl;
	cout<<"Area: "<<area<<endl;
	cout<<"Perimeter: "<<perimeter<<endl;

	//area = length * width;
	//perimeter = (2 * length) + (2 * width);
*/
	getData(n1 , n2);
	cout<<"n1= "<<n1<<"\tn2= "<<n2<<endl;
	swap(n1,n2);
	cout<<"n1= "<<n1<<"\tn2= "<<n2<<endl;
	
	getDouble(d1 , d2);
	cout<<"d1= "<<d1<<"\td2= "<<d2<<endl;
	swap(d1,d2);
	cout<<"d1= "<<d1<<"\td2= "<<d2<<endl;
	cout<<"\n\n\n"<<endl;
	getString(s1,s2);
	cout<<"Name 1: "<<s1<<endl;
	cout<<"Name 2: "<<s2<<endl;
	swap(s1,s2);
	cout<<"Name 1: "<<s1<<endl;
	cout<<"Name 2: "<<s2<<endl;
	return 0;
}//end main()
/****************************************
			Get data()-

			precondition- prompt the user
			to enter 2 values representing 
			length and width of a rectangle

			postcondition- 2 intergers 
			representing the length and 
			width are returned
****************************************/

void getData(int &x, int &y)

{//begin getData

	cout<<"Enter the length: ";
	cin>>x; //enter length

	cout<<"\nEnter the Width: ";
	cin>>y; //enter width




}//end getData

void getDouble(double &x, double &y)

{//begin getData

	cout<<"Enter the value: ";
	cin>>x; //enter length

	cout<<"\nEnter the second value: ";
	cin>>y; //enter width




}//end getData

void getString(string &f, string &g)
{//begin getstring

	cout<<"Enter the first name: ";
	cin>>f;
	cin.ignore(80,'\n');

	cout<<"\nEnter the second name: ";
	getline(cin,g);


}//end getstring
/***************************************
	swap(int,int)-

	precondition- two intergers come into 
	function

	postcondition- two intergers will switch
	positions

****************************************/

void swap(int &a, int &b)
{//begin swap()

	int temp; //temporary local variable
	temp = a;
	a = b;
	b = temp;

	



}//end swap()
void swap(double &a, double &b)
{//begin swap()

	double temp; //temporary local variable
	temp = a;
	a = b;
	b = temp;

	



}//end swap()

void swap (string &n, string &p)
{//begin swap(string)

	string temp;

	temp = n;
	n = p;
	p = temp;




}//end swap(string)


{//begin





}//end 