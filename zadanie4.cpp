#include <iostream>
#include <string>
#include <fstream> // biblioteka do wczytywania pliku
#include <vector>
using namespace std;

void funkcja_catalog () //funkcja wczytuje pliki 
{
	string name;
	cout << "Welcome to the catalog:" << endl; 
			cout <<"Write the name of the file."<< endl;	
			cout << "Possible options:" << endl;
			cout << "author - go to the author catalog" << endl;
			cout << "title - go to the title catalog" << endl;
			cout << "quit - go to menu" << endl;// tutaj poproo u?ytkownika o nazwe pliku (ocie?ke) z danymi tj. katologiem
		cin>> name;	
			{
					if(name=="author")
					{
					string linia;
				 ifstream uchwyt ("dane.txt"); //obiekt typu fstream (uchwyt do pliku) 
   					 if (uchwyt.is_open()) //otwieramy plik
						{
						while (getline(uchwyt,linia))
							{
								cout<< linia << endl;
							}
					uchwyt.close ();	
						}
					else cout << "Unable to open file"; 	
					}
					
        			else if(name=="title")
           			{
					string linia;
				 ifstream uchwyt ("katalog.txt"); //obiekt typu fstream (uchwyt do pliku) 
   					 if (uchwyt.is_open()) //otwieramy plik
						{
						while (getline(uchwyt,linia))
							{
								cout<< linia << endl;
							}
					uchwyt.close ();	
						}
					else cout << "Unable to open file"; 	
					} 
				else if (name=="quit")
				{
			cout <<"Goodbye" << endl;
			}
			else cout <<"Choose" << endl;
						
			}
}

void funkcja_help ()
{
	cout <<"Go to help." << endl; 
}

int main() 
{    
	//czesc wstepna - wejscie do biblioteki, wybranie danej czynnosci
	int decision; // zmienna do wyboru co chcemy zrobic w bibliotece
	string linia, name;
		
		cout << "Hello!" << endl;
		cout <<"We welcome to the library." << endl;
		cout <<"How can I help you?" << endl;
		cout <<"Choose what do you want make."<< endl;
		cout << "Possible options:" << endl;
		cout <<"1 catalog: go to a catalog" << endl;
		cout <<"2 help: to get help" << endl;
		cout <<"3 quit: exit"<< endl;
		cout <<"Please choose one of the options." << endl;

	cin>> decision;

	switch (decision)	
	{	
		case 1:
			funkcja_catalog ();
		break;
	
		case 2:
			funkcja_help ();
			break;
		case 3:
			cout << "Goodbye." << endl; break;
		default:
			cout << "I don't undersand. Choose 1, 2 or 3." << endl;
	}	
	

	/*----------- to dopiero rozgryzam */
			// stwórz w3asn1 funkcje w której wczytasz katalog 
			// i tutaj j1 wywo3aj - kod bedzie czytelniejszy 
			
		
		
			// podpowiedzi szukaj w cPlusPlusMaterials\Kod\Arrays&Functions
			// i plik functions.cpp i jeszcze w webinarium o wektorze
			// np:
	//	string file = "katalog.txt";
	//	vector<string> catalog = read_catalog(file);
			// zamiast wektora mo?esz u?ya oczywiocie normalnych tablic ;)
			// ale z wektorem mo?e bya proociej ;)
	//		cout << "Welcome to the catalog." << endl; break;
			
			// tutaj zrób coo z katalogiem wg. Twojego pomys3u
			// mo?esz np. wyowietlia, ale te? mo?esz umo?liwia u?ytkownikowi
			// jak1o modyfikacje
			// najlepiej stworzya funkcje w której zaimplementujesz to co chcia3abyo
			// zrobia z katalogiem :)
			
			// jeoli nie bedziesz mia3a pomys3u co z tym zrobia to 
			// pisz, a ja moge pomóc coo zaimplementowaa! 


while (decision>3)
	{
	cin>> decision;
		switch (decision)	
	{
		case 1:
			funkcja_catalog ();
			 break;
		case 2:
			funkcja_help ();
			break;
		case 3:
			cout << "Goodbye." << endl; break;
		default:
			cout << "I don't undersand. Choose 1, 2 or 3." << endl;
	}
			} 
	return 0;
}

