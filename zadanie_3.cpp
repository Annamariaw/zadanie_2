#include <iostream>
#include <string>
// tutaj do³¹cz bibliotekê do wczytywania pliku
using namespace std;

// stwórz plik z danymi, które chcesz wczytaæ
// jakiœ tekstowy z katalogiem

int main() 
{
	//czêœæ wstêpna - wejœcie do biblioteki, wybranie ¿¹danej czynnoœci
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
	
	switch (decision)	
	{
		case 1:
			// tutaj poproœ u¿ytkownika o nazwê pliku (œcie¿kê) z danymi tj. katologiem
			// stwórz w³asn¹ funkcjê w której wczytasz katalog 
			// i tutaj j¹ wywo³aj - kod bêdzie czytelniejszy 
			// podpowiedzi szukaj w cPlusPlusMaterials\Kod\Arrays&Functions
			// i plik functions.cpp i jeszcze w webinarium o wektorze
			// np:
			// string file = ...
			// vector<string> catalog = read_catalog(file);
			// zamiast wektora mo¿esz u¿yæ oczywiœcie normalnych tablic ;)
			// ale z wektorem mo¿e byæ proœciej ;)
			cout << "Welcome to the catalog." << endl; break;
			
			// tutaj zrób coœ z katalogiem wg. Twojego pomys³u
			// mo¿esz np. wyœwietliæ, ale te¿ mo¿esz umo¿liwiæ u¿ytkownikowi
			// jak¹œ modyfikacjê
			// najlepiej stworzyæ funkcjê w której zaimplementujesz to co chcia³abyœ
			// zrobiæ z katalogiem :)
			
			// jeœli nie bêdziesz mia³a pomys³u co z tym zrobiæ to 
			// pisz, a ja mogê pomóc coœ zaimplementowaæ!
			
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
			
		//czêœæ katalog
	
		
		//czêœæ pomoc
			
	}	
		
		

	return 0;
}
