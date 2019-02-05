// Project 2-7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <iomanip>


using namespace std;



int main()
{
	string Lastname = "Fixit Roof Repair Service",
		
		s1name = "Date: July 20, 2001",
		s2name = "Cost of labor:",
		s3name = "Cost of materials:",
		s4name = "Tax:",
		s6name = " ",
		s6first = "______",
		s5name = "Total Cost:",
		

		 s2number = "$150.00",
		 s3number = "3.00",
		 s4number = "7.41",
		 s5number = "$210.21";

	cout<<setiosflags(ios::right);

		cout<<setw(30)<<Lastname<<"\n"
			<<" "<<"\n";

	cout<<setiosflags(ios::left);

		cout<<setw(10)<<s1name<<"\n"
			<<" "<<"\n"
		<<setw(0)<<s2name<<setw(17)<<s2number<<"\n"
		<<setw(0)<<s3name<<setw(13)<<s3number<<"\n"
		<<setw(0)<<s4name<<setw(27)<<s4number<<"\n"
		<<setw(0)<<s6name<<setw(30)<<s6first<<"\n"
		<<setw(0)<<s5name<<setw(20)<<s5number<<"\n"
		<<" "<<"\n"

		<<"end of run - Jack Allyn""\n";




	return 0;
}

