#include <iostream>
#include <string>
// tutaj do��cz bibliotek� do wczytywania pliku
using namespace std;

// stw�rz plik z danymi, kt�re chcesz wczyta�
// jaki� tekstowy z katalogiem

int main() 
{
	//cz�� wst�pna - wej�cie do biblioteki, wybranie ��danej czynno�ci
	int decision; // zmienna do wyboru co chcemy zrobi� w bibliotece
		
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
			// tutaj popro� u�ytkownika o nazw� pliku (�cie�k�) z danymi tj. katologiem
			// stw�rz w�asn� funkcj� w kt�rej wczytasz katalog 
			// i tutaj j� wywo�aj - kod b�dzie czytelniejszy 
			// podpowiedzi szukaj w cPlusPlusMaterials\Kod\Arrays&Functions
			// i plik functions.cpp i jeszcze w webinarium o wektorze
			// np:
			// string file = ...
			// vector<string> catalog = read_catalog(file);
			// zamiast wektora mo�esz u�y� oczywi�cie normalnych tablic ;)
			// ale z wektorem mo�e by� pro�ciej ;)
			cout << "Welcome to the catalog." << endl; break;
			
			// tutaj zr�b co� z katalogiem wg. Twojego pomys�u
			// mo�esz np. wy�wietli�, ale te� mo�esz umo�liwi� u�ytkownikowi
			// jak�� modyfikacj�
			// najlepiej stworzy� funkcj� w kt�rej zaimplementujesz to co chcia�aby�
			// zrobi� z katalogiem :)
			
			// je�li nie b�dziesz mia�a pomys�u co z tym zrobi� to 
			// pisz, a ja mog� pom�c co� zaimplementowa�!
			
		case 2:
			cout <<"Go to help." << endl; break;
		case 3:
			cout << "Goodbye." << endl; break;
		default:
			cout << "I don't undersand. Choose 1, 2 or 3." << endl;
			while (decision>3)
			{
			cin>> decision;
		switch (decision)	
	{
		case 1:
			cout << "Welcome to the catalog." << endl; break;
		case 2:
			cout <<"Go to help." << endl; break;
		case 3:
			cout << "Goodbye." << endl; break;
		default:
			cout << "I don't undersand. Choose 1, 2 or 3." << endl;
	}
			} 
			
		//cz�� katalog
	
		
		//cz�� pomoc
			
	}	
		
		

	return 0;
}
