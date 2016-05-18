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
        getline(uchwyt, linia); //pobierz linijkê
        cout << linia << endl; //wypisz na ekranie
    }
    while(linia != ""); //przerwij je¿eli linia bêdzie pusta (dane w pliku siê skoñcz¹) 
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
	// znalaz³am takie rozwi¹zanie do wyœwietlania danych
{	fstream uchwyt; //obiekt typu fstream (uchwyt do pliku) 
     uchwyt.open("dane.txt"); //otwieramy plik
	
	string linia;
 
    do
    {
        getline(uchwyt, linia); //pobierz linijkê
        cout << linia << endl; //wypisz na ekranie
    }
    while(linia != ""); //przerwij je¿eli linia bêdzie pusta (dane w pliku siê skoñcz¹) UWAGA: Pamiêtaj, ¿eby w pliku zostawiæ ostatni¹ linijkê pust¹
 
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
	// a tego ju¿ nie umiem 
	//jeœli wstawiê cin - to co wpisaæ po << ??? - a mo¿e trzeba wstawiæ coœ innego
	// moja znajomoœæ c++ jest niewystarczaj¹ca - proszê o podpowiedŸ 
	
	// pytanie techniczne - jeœli tworzê w³asn¹ funkcjê, to wczeœniej muszê stworzyæ projekt
	// aby pliki by³y ze sob¹ powi¹zane?
	
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
			cout << "Welcome to the catalog." << endl;
			//czy mo¿na tak zrobiæ, aby nie powtarzaæ tego fstream w ca³oœci 2 razy?
			{	fstream uchwyt; //obiekt typu fstream (uchwyt do pliku)
     uchwyt.open("dane.txt"); //otwieramy plik
	
	string linia;
 
    do
    {
        getline(uchwyt, linia); //pobierz linijkê
        cout << linia << endl; //wypisz na ekranie
    }
    while(linia != ""); //przerwij je¿eli linia bêdzie pusta (dane w pliku siê skoñcz¹) 
 
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
