#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() 
{
	int decision; // zmienna do wyboru co chcemy zrobiæ w bibliotece
	
		cout << "Hello!" << endl;
		cout <<"We welcome to the library." << endl;
		cout <<"How can I help you?" << endl;
	
		cout <<"Choose what do you want make."<< endl;
		cout << "Possible options:" << endl;
		cout <<"1 catalog: go to a catalog" << endl;
		cout <<"2 help: to get help" << endl;
		cout <<"3 quit: exit"<< endl;
	
		cout <<"Please choose one of the option" << endl;

		cin>> decision;
			while (decision)
		{
				cout << decision << "Welcome to the catalog." << endl;
				decision=decision-1;
		}
//	 break;
	//	cout << decision==2 << "Welcome to the help." << endl; 
	//	cout << decision > 3 << "I don't undersand. Choose 1, 2 or 3." << endl;
		
//	cout << "Goodbye." << endl; 
	
//	return 0;
}
