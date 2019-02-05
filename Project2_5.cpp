// Project 2-5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;


int main()
{ string lastname = "Author:",
		firstname = "Mary Smith",
		s1name = "Course:",
		s1first = "CPS-150",
		s2name = "Assignment:",
		s2first = "Program #3",
		s3name = "Due Date:",
		s3first = "September 18",
		s4name = "Instructor:",
		s4first = "Mr. Samson";


cout<<setiosflags(ios::left);
cout<<"****************************************************************\n";
cout<<"*"<<"  "<<setw(15)<<lastname<<setw(15)<<firstname<<"                              "<<"*\n";
cout<<"*"<<"  "<<setw(15)<<s1name<<setw(15)<<s1first<<"                              "<<"*\n";
cout<<"*"<<"  "<<setw(15)<<s2name<<setw(15)<<s2first<<"                              "<<"*\n";
cout<<"*"<<"                                                              "<<"*\n";
cout<<"*"<<"  "<<setw(15)<<s3name<<setw(15)<<s3first<<"                              "<<"*\n";
cout<<"*"<<"  "<<setw(15)<<s4name<<setw(15)<<s4first<<"                              "<<"*\n";
cout<<"*                                                              *\n";
cout<<"****************************************************************\n";
	





	return 0;
}

