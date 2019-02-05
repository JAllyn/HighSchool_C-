// Presidents-Project.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector <int> number(45,0);
vector <string> last(45," ");
vector <string> first(45," ");
vector <int> age(45,0);
vector <string> middle(45," ");
vector <int> birth(45,0);
vector <string> state(45," ");
vector <string> party(45," ");
vector <string> served(45," ");
vector <int> death(45,0);
vector <int> agedeath(45,0);



/*void sortLast(vector <string> &l, vector <string> &f, vector <string> &m, vector <int> &yb, vector <string> &sb, vector <string> &pp,
	vector <int> &ai, vector <string> &ys, vector <int> &yd, vector <int> &ad, int count);
*/
void printResult(vector <int> number,vector <string> last, vector <string> first, vector <string> middle, vector <int> birth, vector <string> state, vector <string> party,
	vector <int> age, vector <string> served, vector <int> death, vector <int> agedeath, int count);
void sortLast(vector <int> &number,vector <string> &last, vector <string> &first, vector <string> &middle, vector <int> &birth, vector <string> &state, vector <string> &party,
	vector <int> &age, vector <string> &served, vector <int> &death, vector <int> &agedeath, int count);
void sortParty(vector <int> &number,vector <string> &last, vector <string> &first, vector <string> &middle, vector <int> &birth, vector <string> &state, vector <string> &party,
	vector <int> &age, vector <string> &served, vector <int> &death, vector <int> &agedeath, int count);
void sortNumber(vector <int> &number,vector <string> &last, vector <string> &first, vector <string> &middle, vector <int> &birth, vector <string> &state, vector <string> &party,
	vector <int> &age, vector <string> &served, vector <int> &death, vector <int> &agedeath,  int count);
void sortAge(vector <int> &number,vector <string> &last, vector <string> &first, vector <string> &middle, vector <int> &birth, vector <string> &state, vector <string> &party,
	vector <int> &age, vector <string> &served, vector <int> &death, vector <int> &agedeath,  int count);
void sortState(vector <int> &number,vector <string> &last, vector <string> &first, vector <string> &middle, vector <int> &birth, vector <string> &state, vector <string> &party,
	vector <int> &age, vector <string> &served, vector <int> &death, vector <int> &agedeath,  int count);
void stars();

void swap(string &x, string &y);
void swap(int &x, int &y);
int menu();

int main()
{//begin main
int count = 44;
int choice;


	

	


	
	

	number[0]=1;last[0]="Washington";first[0]="George";middle[0]="nmn";birth[0]=1732;state[0]="VA";party[0]="None";age[0]=57;served[0]="1789-1797";death[0]=1799;agedeath[0]=67;
	number[1]=2;last[1]="Adams";first[1]="John";middle[1]="nmn";birth[1]=1735;state[1]="MA";party[1]="Fed";age[1]=61;served[1]="1797-1801";death[1]=1826;agedeath[1]=90;
	number[2]=3;last[2]="Jefferson";first[2]="Thomas";middle[2]="nmn";birth[2]=1743;state[2]="VA";party[2]="Dem-Rep";age[2]=57;served[2]="1801-1808";death[2]=1826;agedeath[2]=83;
	number[3]=4;last[3]="Madison";first[3]="James";middle[3]="nmn";birth[3]=1751;state[3]="VA";party[3]="Dem-Rep";age[3]=57;served[3]="1809-1817";death[3]=1836;agedeath[3]=85;
	number[4]=5;last[4]="Monroe";first[4]="James";middle[4]="nmn";birth[4]=1758;state[4]="VA";party[4]="Dem-Rep";age[4]=58;served[4]="1817-1825";death[4]=1831;agedeath[4]=73;
	number[5]=6;last[5]="Adams";first[5]="John";middle[5]="Quincy";birth[5]=1767;state[5]="MA";party[5]="Dem-Rep";age[5]=57;served[5]="1825-1829";death[5]=1848;agedeath[5]=80;
	number[6]=7;last[6]="Jackson";first[6]="Andrew";middle[6]="nmn";birth[6]=1767;state[6]="SC";party[6]="Dem";age[6]=61;served[6]="1829-1837";death[6]=1845;agedeath[6]=78;
	number[7]=8;last[7]="Van Buren";first[7]="Martin";middle[7]="nmn";birth[7]=1782;state[7]="NY";party[7]="Dem";age[7]=54;served[7]="1837-1841";death[7]=1862;agedeath[7]=79;
	number[8]=9;last[8]="Harrison";first[8]="William";middle[8]="Henry";birth[8]=1773;state[8]="VA";party[8]="Whig";age[8]=68;served[8]="1841-1841";death[8]=1841;agedeath[8]=68;
	number[9]=10;last[9]="Tyler";first[9]="John";middle[9]="nmn";birth[9]=1790;state[9]="VA";party[9]="Whig";age[9]=51;served[9]="1841-1845";death[9]=1862;agedeath[9]=71;
	number[10]=11;last[10]="Polk";first[10]="James";middle[10]="Knox";birth[10]=1795;state[10]="NC";party[10]="Dem";age[10]=49;served[10]="1845-1849";death[10]=1849;agedeath[10]=53;
	number[11]=12;last[11]="Taylor";first[11]="Zachary";middle[11]="nmn";birth[11]=1784;state[11]="VA";party[11]="Whig";age[11]=64;served[11]="1849-1850";death[11]=1850;agedeath[11]=65;
	number[12]=13;last[12]="Fillmore";first[12]="Millard";middle[12]="nmn";birth[12]=1800;state[12]="NY";party[12]="Whig";age[12]=50;served[12]="1850-1853";death[12]=1874;agedeath[12]=74;
	number[13]=14;last[13]="Pierce";first[13]="Franklin";middle[13]="nmn";birth[13]=1804;state[13]="NH";party[13]="Dem";age[13]=48;served[13]="1853-1857";death[13]=1869;agedeath[13]=64;
	number[14]=15;last[14]="Buchanan";first[14]="James";middle[14]="nmn";birth[14]=1791;state[14]="PA";party[14]="Dem";age[14]=65;served[14]="1857-1861";death[14]=1868;agedeath[14]=77;
	number[15]=16;last[15]="Lincoln";first[15]="Abraham";middle[15]="nmn";birth[15]=1809;state[15]="KY";party[15]="Rep-Union";age[15]=52;served[15]="1861-1865";death[15]=1865;agedeath[15]=64;
	number[16]=17;last[16]="Johnson";first[16]="Andrew";middle[16]="nmn";birth[16]=1808;state[16]="NC";party[16]="Union";age[16]=56;served[16]="1865-1869";death[16]=1875;agedeath[16]=66;
	number[17]=18;last[17]="Grant";first[17]="Hiram";middle[17]="Ulysses";birth[17]=1822;state[17]="OH";party[17]="Rep";age[17]=47;served[17]="1869-1877";death[17]=1885;agedeath[17]=63;
	number[18]=19;last[18]="Hayes";first[18]="Rutherford";middle[18]="Birchard";birth[18]=1822;state[18]="OH";party[18]="Rep";age[18]=55;served[18]="1877-1881";death[18]=1893;agedeath[18]=71;
	number[19]=20;last[19]="Garfield";first[19]="James";middle[19]="Abram";birth[19]=1831;state[19]="OH";party[19]="Rep";age[19]=50;served[19]="1881-1881";death[19]=1881;agedeath[19]=50;
	number[20]=21;last[20]="Arthur";first[20]="James";middle[20]="Alan";birth[20]=1829;state[20]="VT";party[20]="Rep";age[20]=52;served[20]="1881-1885";death[20]=1886;agedeath[20]=57;
	number[21]=22;last[21]="Cleveland";first[21]="Stephen";middle[21]="Grover";birth[21]=1837;state[21]="NJ";party[21]="Dem";age[21]=48;served[21]="1885-1889";death[21]=1908;agedeath[21]=71;
	number[22]=23;last[22]="Harrison";first[22]="Benjamin";middle[22]="nmn";birth[22]=1833;state[22]="OH";party[22]="Rep";age[22]=56;served[22]="1889-1893";death[22]=1901;agedeath[22]=68;
	number[23]=24;last[23]="Cleveland";first[23]="Stephen";middle[23]="Grover";birth[23]=1837;state[23]="NJ";party[23]="Dem";age[23]=56;served[23]="1893-1897";death[23]=1908;agedeath[23]=71;
	number[24]=25;last[24]="McKinley";first[24]="William";middle[24]="nmn";birth[24]=1843;state[24]="OH";party[24]="Rep";age[24]=54;served[24]="1897-1901";death[24]=1901;agedeath[24]=58;
	number[25]=26;last[25]="Roosevelt";first[25]="Theodore";middle[25]="nmn";birth[25]=1858;state[25]="NY";party[25]="Rep";age[25]=43;served[25]="1901-1909";death[25]=1919;agedeath[25]=61;
	number[26]=27;last[26]="Taft";first[26]="William";middle[26]="Howard";birth[26]=1857;state[26]="OH";party[26]="Rep";age[26]=52;served[26]="1909-1913";death[26]=1930;agedeath[26]=73;
	number[27]=28;last[27]="Wilson";first[27]="Thomas";middle[27]="Woodrow";birth[27]=1856;state[27]="VA";party[27]="Dem";age[27]=57;served[27]="1913-1921";death[27]=1924;agedeath[27]=68;
	number[28]=29;last[28]="Harding";first[28]="Warren";middle[28]="Gamaliel";birth[28]=1865;state[28]="OH";party[28]="Rep";age[28]=56;served[28]="1921-1923";death[28]=1923;agedeath[28]=58;
	number[29]=30;last[29]="Coolidge";first[29]="John";middle[29]="Calvin";birth[29]=1872;state[29]="VT";party[29]="Rep";age[29]=51;served[29]="1923-1929";death[29]=1933;agedeath[29]=61;
	number[30]=31;last[30]="Hoover";first[30]="Herbert";middle[30]="Clark";birth[30]=1874;state[30]="IA";party[30]="Rep";age[30]=55;served[30]="1929-1933";death[30]=1964;agedeath[30]=90;
	number[31]=32;last[31]="Roosevelt";first[31]="Franklin";middle[31]="Delano";birth[31]=1882;state[31]="NY";party[31]="Dem";age[31]=51;served[31]="1933-1945";death[31]=1945;agedeath[31]=63;
	number[32]=33;last[32]="Truman";first[32]="Harry";middle[32]="S.";birth[32]=1884;state[32]="MO";party[32]="Dem";age[32]=61;served[32]="1945-1953";death[32]=1972;agedeath[32]=88;
	number[33]=34;last[33]="Eisenhower";first[33]="Dwight";middle[33]="David";birth[33]=1890;state[33]="TX";party[33]="Rep";age[33]=63;served[33]="1953-1961";death[33]=1969;agedeath[33]=79;
	number[34]=35;last[34]="Kennedy";first[34]="John";middle[34]="Fitzgerald";birth[34]=1917;state[34]="MA";party[34]="Dem";age[34]=44;served[34]="1961-1963";death[34]=1963;agedeath[34]=46;
	number[35]=36;last[35]="Johnson";first[35]="Lyndon";middle[35]="Baines";birth[35]=1908;state[35]="TX";party[35]="Dem";age[35]=55;served[35]="1963-1969";death[35]=1973;agedeath[35]=65;
	number[36]=37;last[36]="Nixon";first[36]="Richard";middle[36]="Milhous";birth[36]=1913;state[36]="CA";party[36]="Rep";age[36]=56;served[36]="1969-1974";death[36]=1994;agedeath[36]=81;
	number[37]=38;last[37]="Ford";first[37]="Gerald";middle[37]="Rudolph";birth[37]=1913;state[37]="NE";party[37]="Rep";age[37]=61;served[37]="1974-1977";death[37]=2006;agedeath[37]=93;
	number[38]=39;last[38]="Carter";first[38]="James";middle[38]="Earl";birth[38]=1924;state[38]="GA";party[38]="Dem";age[38]=53;served[38]="1977-1981";death[38]=0;agedeath[38]=0;
	number[39]=40;last[39]="Reagan";first[39]="Ronald";middle[39]="Wilson";birth[39]=1911;state[39]="IL";party[39]="Rep";age[39]=70;served[39]="1981-1989";death[39]=2004;agedeath[39]=93;
	number[40]=41;last[40]="Bush";first[40]="George";middle[40]="Herbert Walker";birth[40]=1924;state[40]="MA";party[40]="Rep";age[40]=65;served[40]="1989-1993";death[40]=0;agedeath[40]=0;
	number[41]=42;last[41]="Clinton";first[41]="William";middle[41]="Jefferson";birth[41]=1946;state[41]="AR";party[41]="Dem";age[41]=47;served[41]="1993-2001";death[41]=0;agedeath[41]=0;
	number[42]=43;last[42]="Bush";first[42]="George";middle[42]="Walker";birth[42]=1946;state[42]="CT";party[42]="Rep";age[42]=55;served[42]="2001-2009";death[42]=0;agedeath[42]=0;
	number[43]=44;last[43]="Obama";first[43]="Barack";middle[43]="Hussein";birth[43]=1961;state[43]="HI";party[43]="Dem";age[43]=48;served[43]="2009-";death[43]=0;agedeath[43]=0;

	do
	{
	 choice = menu();

	 switch(choice)
	 {
	 case 1://Sort by party
sortParty(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);
	{//begin sortparty

	int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for

			if(party[i] > party[i+1])
			{//begin if
				swap(number[i],number[i+1]);
				swap(last[i],last[i+1]);
				swap(first[i],first[i+1]);
				swap(middle[i],middle[i+1]);
				swap(birth[i],birth[i+1]);
				swap(state[i],state[i+1]);
				swap(party[i],party[i+1]);
				swap(age[i],age[i+1]);
				swap(served[i],served[i+1]);
				swap(death[i],death[i+1]);
				swap(agedeath[i],agedeath[i+1]);
				
				exchangeMade = true;
			}//end if

		}//end for


	}//end while


}//end sortlast
	cout<<setiosflags(ios::left)<<"     "<<setw(12)<<"Last"<<setw(12)<<"First"<<setw(17)<<"Middle"<<setw(10)<<"Born"<<setw(12)<<"Political"<<setw(19)<<"Inauguration"<<setw(10)<<"Died"<<endl;
	cout<<setiosflags(ios::left)<<"No.  "<<setw(12)<<"Name"<<setw(12)<<"name"<<setw(14)<<"Name"<<setw(5)<<"Year"<<setw(10)<<"State"<<setw(9)<<"Party"<<setw(7)<<"Age"<<setw(10)<<"Year"<<setw(5)<<"Year"<<setw(10)<<"Age"<<endl;
	
	stars();
	sortParty(number,last, first, middle, birth, state, party, age, served, death, agedeath, count);

	 printResult(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);
	 system("pause");
		 break;

	 case 2:
	sortLast(number,last, first, middle, birth, state, party, age, served, death, agedeath, count);
	{//begin sortlast

	int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for

			if(last[i] > last[i+1])
			{//begin if
				swap(number[i],number[i+1]);
				swap(last[i],last[i+1]);
				swap(first[i],first[i+1]);
				swap(middle[i],middle[i+1]);
				swap(birth[i],birth[i+1]);
				swap(state[i],state[i+1]);
				swap(party[i],party[i+1]);
				swap(age[i],age[i+1]);
				swap(served[i],served[i+1]);
				swap(death[i],death[i+1]);
				swap(agedeath[i],agedeath[i+1]);
				
				exchangeMade = true;
			}//end if

		}//end for


	}//end while


}//end sortlast
	cout<<setiosflags(ios::left)<<"     "<<setw(12)<<"Last"<<setw(12)<<"First"<<setw(17)<<"Middle"<<setw(10)<<"Born"<<setw(12)<<"Political"<<setw(19)<<"Inauguration"<<setw(10)<<"Died"<<endl;
	cout<<setiosflags(ios::left)<<"No.  "<<setw(12)<<"Name"<<setw(12)<<"name"<<setw(14)<<"Name"<<setw(5)<<"Year"<<setw(10)<<"State"<<setw(9)<<"Party"<<setw(7)<<"Age"<<setw(10)<<"Year"<<setw(5)<<"Year"<<setw(10)<<"Age"<<endl;
	
	stars();
	sortLast(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);

	 printResult(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);

		 system("pause");
		 break;

	 case 3: //presidents number
sortNumber(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);

		 	{//begin sortnumber

	int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for

			if(number[i] > number[i+1])
			{//begin if
				swap(number[i],number[i+1]);
				swap(last[i],last[i+1]);
				swap(first[i],first[i+1]);
				swap(middle[i],middle[i+1]);
				swap(birth[i],birth[i+1]);
				swap(state[i],state[i+1]);
				swap(party[i],party[i+1]);
				swap(age[i],age[i+1]);
				swap(served[i],served[i+1]);
				swap(death[i],death[i+1]);
				swap(agedeath[i],agedeath[i+1]);
				
				
				exchangeMade = true;
			}//end if

		}//end for


	}//end while


}//end sortnumber
cout<<setiosflags(ios::left)<<"     "<<setw(12)<<"Last"<<setw(12)<<"First"<<setw(17)<<"Middle"<<setw(10)<<"Born"<<setw(12)<<"Political"<<setw(19)<<"Inauguration"<<setw(10)<<"Died"<<endl;
	cout<<setiosflags(ios::left)<<"No.  "<<setw(12)<<"Name"<<setw(12)<<"name"<<setw(14)<<"Name"<<setw(5)<<"Year"<<setw(10)<<"State"<<setw(9)<<"Party"<<setw(7)<<"Age"<<setw(10)<<"Year"<<setw(5)<<"Year"<<setw(10)<<"Age"<<endl;
	
	stars();
	 sortNumber(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);

	 printResult(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);
	 system("pause");
		 break;

	 case 4:
	sortAge(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);

	{//begin sortage

	int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for

			if(age[i] > age[i+1])
			{//begin if
				swap(number[i],number[i+1]);
				swap(last[i],last[i+1]);
				swap(first[i],first[i+1]);
				swap(middle[i],middle[i+1]);
				swap(birth[i],birth[i+1]);
				swap(state[i],state[i+1]);
				swap(party[i],party[i+1]);
				swap(age[i],age[i+1]);
				swap(served[i],served[i+1]);
				swap(death[i],death[i+1]);
				swap(agedeath[i],agedeath[i+1]);
				
				
				exchangeMade = true;
			}//end if

		}//end for


	}//end while


}//end sortage
	cout<<setiosflags(ios::left)<<"     "<<setw(12)<<"Last"<<setw(12)<<"First"<<setw(17)<<"Middle"<<setw(10)<<"Born"<<setw(12)<<"Political"<<setw(19)<<"Inauguration"<<setw(10)<<"Died"<<endl;
	cout<<setiosflags(ios::left)<<"No.  "<<setw(12)<<"Name"<<setw(12)<<"name"<<setw(14)<<"Name"<<setw(5)<<"Year"<<setw(10)<<"State"<<setw(9)<<"Party"<<setw(7)<<"Age"<<setw(10)<<"Year"<<setw(5)<<"Year"<<setw(10)<<"Age"<<endl;
	
	stars();
	 sortAge(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);

	 printResult(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);

	 system("pause");
		 break;

	 case 7:

		 sortState(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);
		 	{//begin sortState

	int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for

			if(state[i] > state[i+1])
			{//begin if
				swap(number[i],number[i+1]);
				swap(last[i],last[i+1]);
				swap(first[i],first[i+1]);
				swap(middle[i],middle[i+1]);
				swap(birth[i],birth[i+1]);
				swap(state[i],state[i+1]);
				swap(party[i],party[i+1]);
				swap(age[i],age[i+1]);
				swap(served[i],served[i+1]);
				swap(death[i],death[i+1]);
				swap(agedeath[i],agedeath[i+1]);
				
				
				exchangeMade = true;
			}//end if

		}//end for


	}//end while


}//end sortState
	cout<<setiosflags(ios::left)<<"     "<<setw(12)<<"Last"<<setw(12)<<"First"<<setw(17)<<"Middle"<<setw(10)<<"Born"<<setw(12)<<"Political"<<setw(19)<<"Inauguration"<<setw(10)<<"Died"<<endl;
	cout<<setiosflags(ios::left)<<"No.  "<<setw(12)<<"Name"<<setw(12)<<"name"<<setw(14)<<"Name"<<setw(5)<<"Year"<<setw(10)<<"State"<<setw(9)<<"Party"<<setw(7)<<"Age"<<setw(10)<<"Year"<<setw(5)<<"Year"<<setw(10)<<"Age"<<endl;
	
	stars();
	 sortState(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);

	 printResult(number, last, first, middle, birth, state, party, age, served, death, agedeath, count);

	 system("pause");
		 break;


	 }//end switch
	 }while(choice!=0);



	

	 


	return 0;
}//end main

void printResult(vector <int> number,vector <string> last, vector <string> first, vector <string> middle, vector <int> birth, vector <string> state, vector <string> party,
	vector <int> age, vector <string> served, vector <int> death, vector <int> agedeath, int count)
{//begin printResult

	for(int i=0;i<count; i++)
	{
		cout<<setiosflags(ios::left);
		
		cout<<setiosflags(ios::left);
		cout<<setw(5)<<number[i]
		<<setw(12)<<last[i]
		<<setw(12)<<first[i]
		<<setw(15)<<middle[i]
		<<setw(6)<<birth[i]
		<<setw(7)<<state[i]
		<<setw(10)<<party[i]
		<<setw(5)<<age[i]
		<<setw(12)<<served[i]
		<<setw(5)<<death[i]
		<<setw(5)<<agedeath[i]<<endl;
	}

}//end printResult
	/***********************************
	 stars() - prints out line of stars
	***********************************/
	void stars()
	{//begin star
		for(int star = 1; star <101; star++)
			cout<<"*";
		cout<<endl;
	}//end star
	
	int menu()
	{//menu
		int choice;
		system("cls");

		cout<<setw(53)<<"Welcome to the\n"
			<<setw(55)<<"Presidents Program\n\n";

		cout<<setw(49)<<"Please make a selection from the following: "<<"\n\n";

		cout<<setw(40)<<"1)   Sort by Political Party\n";
		cout<<setw(34)<<"2)   Sort by Last Name\n";
		cout<<setw(43)<<"3)   Sort by President's number\n";
		cout<<setw(44)<<"4)   Sort by Age at Inauguration\n";
		cout<<setw(36)<<"5)   Search by Last Name\n";
		cout<<setw(52)<<"6)   List all Presidents that are Living\n";
		cout<<setw(30)<<"7)   Sort by State\n";
		cout<<setw(32)<<"8)   Search by State\n";
		cout<<setw(22)<<"0)   Exit\n\n";


		cout<<setw(12)<<"Enter: ";
		cin>>choice;

		return choice;
	}//menu

	void sortParty(vector <int> &number,vector <string> &last, vector <string> &first, vector <string> &middle, vector <int> &birth, vector <string> &state, vector <string> &party,
	vector <int> &age, vector <string> &served, vector <int> &death, vector <int> &agedeath, int count)
	{//begin sortparty

	int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for

			if(party[i] > party[i+1])
			{//begin if
				swap(number[i],number[i+1]);
				swap(last[i],last[i+1]);
				swap(first[i],first[i+1]);
				swap(middle[i],middle[i+1]);
				swap(birth[i],birth[i+1]);
				swap(state[i],state[i+1]);
				swap(party[i],party[i+1]);
				swap(age[i],age[i+1]);
				swap(served[i],served[i+1]);
				swap(death[i],death[i+1]);
				swap(agedeath[i],agedeath[i+1]);
				
				exchangeMade = true;
			}//end if

		}//end for


	}//end while


}//end sortlast

	void sortLast(vector <int> &number,vector <string> &last, vector <string> &first, vector <string> &middle, vector <int> &birth, vector <string> &state, vector <string> &party,
	vector <int> &age, vector <string> &served, vector <int> &death, vector <int> &agedeath, int count)
		{//begin sortlast

	int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for

			if(last[i] > last[i+1])
			{//begin if
				swap(number[i],number[i+1]);
				swap(last[i],last[i+1]);
				swap(first[i],first[i+1]);
				swap(middle[i],middle[i+1]);
				swap(birth[i],birth[i+1]);
				swap(state[i],state[i+1]);
				swap(party[i],party[i+1]);
				swap(age[i],age[i+1]);
				swap(served[i],served[i+1]);
				swap(death[i],death[i+1]);
				swap(agedeath[i],agedeath[i+1]);
				
				exchangeMade = true;
			}//end if

		}//end for


	}//end while


}//end sortlast

	void sortNumber( vector <int> &number,vector <string> &last, vector <string> &first, vector <string> &middle, vector <int> &birth, vector <string> &state, vector <string> &party,
	vector <int> &age, vector <string> &served, vector <int> &death, vector <int> &agedeath, int count)

		{//begin sortnumber

	int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for

			if(number[i] > number[i+1])
			{//begin if
				swap(number[i],number[i+1]);
				swap(last[i],last[i+1]);
				swap(first[i],first[i+1]);
				swap(middle[i],middle[i+1]);
				swap(birth[i],birth[i+1]);
				swap(state[i],state[i+1]);
				swap(party[i],party[i+1]);
				swap(age[i],age[i+1]);
				swap(served[i],served[i+1]);
				swap(death[i],death[i+1]);
				swap(agedeath[i],agedeath[i+1]);
				
				
				exchangeMade = true;
			}//end if

		}//end for


	}//end while


}//end sortnumber

	void sortAge(vector <int> &number,vector <string> &last, vector <string> &first, vector <string> &middle, vector <int> &birth, vector <string> &state, vector <string> &party,
	vector <int> &age, vector <string> &served, vector <int> &death, vector <int> &agedeath,  int count)
		{//begin sortage

	int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for

			if(age[i] > age[i+1])
			{//begin if
				swap(number[i],number[i+1]);
				swap(last[i],last[i+1]);
				swap(first[i],first[i+1]);
				swap(middle[i],middle[i+1]);
				swap(birth[i],birth[i+1]);
				swap(state[i],state[i+1]);
				swap(party[i],party[i+1]);
				swap(age[i],age[i+1]);
				swap(served[i],served[i+1]);
				swap(death[i],death[i+1]);
				swap(agedeath[i],agedeath[i+1]);
				
				
				exchangeMade = true;
			}//end if

		}//end for


	}//end while


}//end sortage

void sortState(vector <int> &number,vector <string> &last, vector <string> &first, vector <string> &middle, vector <int> &birth, vector <string> &state, vector <string> &party,
	vector <int> &age, vector <string> &served, vector <int> &death, vector <int> &agedeath,  int count)
{//begin sortState

	int k = 0;
	bool exchangeMade = true;

	while((k<count-1) && exchangeMade)
	{//begin while

		exchangeMade = false;
		k++;

		for(int i=0; i<count-k; i++)
		{//begin for

			if(state[i] > state[i+1])
			{//begin if
				swap(number[i],number[i+1]);
				swap(last[i],last[i+1]);
				swap(first[i],first[i+1]);
				swap(middle[i],middle[i+1]);
				swap(birth[i],birth[i+1]);
				swap(state[i],state[i+1]);
				swap(party[i],party[i+1]);
				swap(age[i],age[i+1]);
				swap(served[i],served[i+1]);
				swap(death[i],death[i+1]);
				swap(agedeath[i],agedeath[i+1]);
				
				
				exchangeMade = true;
			}//end if

		}//end for


	}//end while


}//end sortState

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