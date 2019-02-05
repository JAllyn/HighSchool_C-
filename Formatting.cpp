// Formatting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string> //need to include if using a string of charaters

using namespace std;


int main()
{
	string lastname = "Allyn",
		   firstname = "Jack",
		s1name = "Brum",
		s1first = "Wesley",
		s2name = "Sleboda",
		s2first = "james",
		s3name = "Bilzerian",
		s3first = "Peter";

	int teacher = 1001,
		s1number = 2001,
		s2number = 2002,
		s3number = 2003;


	cout<<setiosflags(ios::left);

	cout<<setw(15)<<lastname<<setw(10)<<firstname<<"\t"
		<<teacher<<"\n"


		<<setw(15)<<s1name<<setw(10)<<s1first<<"\t"
			<<s1number<<"\n"

		<<setw(15)<<s2name<<setw(10)<<s2first<<"\t"
			<<s2number<<"\n"

		<<setw(15)<<s3name<<setw(10)<<s3first<<"\t"
			<<s3number<<"\n";








	return 0;
}

