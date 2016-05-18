#include <iostream>
#include <string>
#include <fstream> // biblioteka do wczytywania pliku
#include <vector>
using namespace std;

int main() 
{

 fstream uchwyt; //obiekt typu fstream (uchwyt do pliku)
 
    uchwyt.open("plik.txt"); //otwieramy plik: plik.txt (plik - nazwa pliku, txt - rozszerzenie)
    string linia;
 
    do
    {
        getline(uchwyt, linia); //pobierz linijk�
        cout << linia << endl; //wypisz na ekranie
    }
    while(linia != ""); //przerwij je�eli linia b�dzie pusta (dane w pliku si� sko�cz�) 
    uchwyt.close(); //zamykamy plik
    
    
	//czesc wstepna - wejscie do biblioteki, wybranie danej czynnosci
	int decision; // zmienna do wyboru co chcemy zrobic w bibliotece
	
	
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
			cout << "Welcome to the author catalog:" << endl; 
	// znalaz�am takie rozwi�zanie do wy�wietlania danych
{	fstream uchwyt; //obiekt typu fstream (uchwyt do pliku) 
     uchwyt.open("dane.txt"); //otwieramy plik
	
	string linia;
 
    do
    {
        getline(uchwyt, linia); //pobierz linijk�
        cout << linia << endl; //wypisz na ekranie
    }
    while(linia != ""); //przerwij je�eli linia b�dzie pusta (dane w pliku si� sko�cz�) UWAGA: Pami�taj, �eby w pliku zostawi� ostatni� linijk� pust�
 
    uchwyt.close(); //zamykamy plik
    
	ifstream odczyt("dane.txt");
}
  
    break;
			case 2:
			cout <<"Go to help." << endl; break;
		case 3:
			cout << "Goodbye." << endl; break;
		default:
			cout << "I don't undersand. Choose 1, 2 or 3." << endl;
	}	
	
	cout<<"Write the name of the file."<< endl;	// tutaj poproo u?ytkownika o nazwe pliku (ocie?ke) z danymi tj. katologiem
	// a tego ju� nie umiem 
	//je�li wstawi� cin - to co wpisa� po << ??? - a mo�e trzeba wstawi� co� innego
	// moja znajomo�� c++ jest niewystarczaj�ca - prosz� o podpowied� 
	
	// pytanie techniczne - je�li tworz� w�asn� funkcj�, to wcze�niej musz� stworzy� projekt
	// aby pliki by�y ze sob� powi�zane?
	
	/*----------- to dopiero rozgryzam */
			// stw�rz w3asn1 funkcje w kt�rej wczytasz katalog 
			// i tutaj j1 wywo3aj - kod bedzie czytelniejszy 
			
		
		
			// podpowiedzi szukaj w cPlusPlusMaterials\Kod\Arrays&Functions
			// i plik functions.cpp i jeszcze w webinarium o wektorze
			// np:
	//	string file = "katalog.txt";
	//	vector<string> catalog = read_catalog(file);
			// zamiast wektora mo?esz u?ya oczywiocie normalnych tablic ;)
			// ale z wektorem mo?e bya proociej ;)
	//		cout << "Welcome to the catalog." << endl; break;
			
			// tutaj zr�b coo z katalogiem wg. Twojego pomys3u
			// mo?esz np. wyowietlia, ale te? mo?esz umo?liwia u?ytkownikowi
			// jak1o modyfikacje
			// najlepiej stworzya funkcje w kt�rej zaimplementujesz to co chcia3abyo
			// zrobia z katalogiem :)
			
			// jeoli nie bedziesz mia3a pomys3u co z tym zrobia to 
			// pisz, a ja moge pom�c coo zaimplementowaa! 
	
while (decision>3)
	{
	cin>> decision;
		switch (decision)	
	{
		case 1:
			cout << "Welcome to the catalog." << endl;
			//czy mo�na tak zrobi�, aby nie powtarza� tego fstream w ca�o�ci 2 razy?
			{	fstream uchwyt; //obiekt typu fstream (uchwyt do pliku)
     uchwyt.open("dane.txt"); //otwieramy plik
	
	string linia;
 
    do
    {
        getline(uchwyt, linia); //pobierz linijk�
        cout << linia << endl; //wypisz na ekranie
    }
    while(linia != ""); //przerwij je�eli linia b�dzie pusta (dane w pliku si� sko�cz�) 
 
    uchwyt.close(); //zamykamy plik
    
	ifstream odczyt("dane.txt");
}
  
			 break;
		case 2:
			cout <<"Go to help." << endl; break;
		case 3:
			cout << "Goodbye." << endl; break;
		default:
			cout << "I don't undersand. Choose 1, 2 or 3." << endl;
	}
			} 
			
	return 0;
}
