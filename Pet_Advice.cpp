// Pet_Advice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int menu();

int main()
{// begin main

	int choice;
	double hours;

	do
	{
	choice = menu();

	if (choice > 0 && choice<=3)
	{
	cout<<"\nHow many hours are you at your place of residence?"<<endl;
	cin>>hours;
	}
	switch(choice)
{//begin switch

	case 1: //House

		if(hours>=18 && hours<=24)
			cout<<"The recommended animal is a Pot-Bellied pig"<<endl;
		else if (hours>=10 && hours<=17)
			cout<<"The recommended animal is a Dog"<<endl;
		else if (hours<10 && hours>0)
			cout<<"The recommended animal is a Snake"<<endl;
		else
			cout<<"No recommendation for you."<<endl;

		system("pause");

		break;

	case 2: //Appartment

		if(hours>=10 && hours<=24)
			cout<<"The recommended animal is a Cat"<<endl;
		else if (hours<10 && hours>0)
			cout<<"The recommended animal is a Hamster"<<endl;
		else
			cout<<"No recommendation for you."<<endl;

		system("pause");

		break;

	case 3: //dorm

		if (hours>=6 && hours<=24)
			cout<<"The recommended animal is a Fish"<<endl;
		else if (hours<6 && hours>0)
			cout<<"The recommended animal is an Ant Farm"<<endl;
		
		else
			cout<<"No recommendation for you."<<endl;

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



int menu()
{//begin menu

	int choice;
		
	double hours;
	system("cls");

	cout<<setw(40)<<"PET ADVICE\n\n";

	cout<<"Please enter your residence from the numbers\n\n";

	cout<<setw(21)<<"1)   House\n";
	cout<<setw(25)<<"2)   Apartment\n";
	cout<<setw(25)<<"3)   Dormitory\n";
	cout<<setw(20)<<"0)   EXIT\n";

	cout<<"\n\nPlease enter your choice ==>";
	cin>>choice;






	return choice;
}//end menu
