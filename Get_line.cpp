// Get_line.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{//begin
	int age;//users age
	string name, //users name
		school = "Wachusett Regional High School",
	studID = " "; //Student ID number


	cout<<"Enter Your Age: ";
		cin>>age;

		cin.ignore(80,'\n');

	cout<<"Enter your Name: ";
		getline(cin,name);

	cout<<"Enter Your Student ID number: ";
		getline(cin,studID);

	cout<<"Age: "<<age<<"\t\t"
		<<"Name: "<<name<<"\n";

	cout<<"My name has "<<name.length()
		<<" Characters."<<endl;

	cout<<"My school name is "<<school<<endl;
	cout<<"It has "<<school.length()
		<<" characters."<<endl;



	cout<<school.find("use")<<endl; //find a string
	cout<<school.find('t')<<endl; //find a character

	/***********

		Create a password with student name, student id number, and school.

	***********/


	string password;

	password = school.substr(0,4) + name.substr(0,3) + studID.substr(5,8);

	cout<<password<<endl;



	return 0;
}//end

