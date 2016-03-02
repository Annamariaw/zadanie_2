#include <iostream>
#include <string>
using namespace std;

int main() 
{
	int decision; // zmienna do wyboru co chcemy zrobiæ w bibliotece
	//int news=5; zmienna do wyboru katalogu
		
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
		
	switch (decision)	
	{
		case 1:
			cout << "Welcome to the catalog." << endl;
					break;
			case 2:
			cout <<"Go to help." << endl; break;
		case 3:
			cout << "Goodbye." << endl; break;
		default:
			cout << "I don't undersand. Choose 1, 2 or 3." << endl;
		}	

	return 0;
}
