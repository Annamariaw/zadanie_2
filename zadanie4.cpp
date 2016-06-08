#include <iostream>
#include <string>
#include <fstream> // biblioteka do wczytywania pliku
#include <vector>
#include <conio.h>
using namespace std;

class human
{
public:
    string name;
    string surname;
    string number;
    human( string xname, string xsurname, string xnumber );
};

void funkcja_open () // ta funkja dzia�a tylko po�owicznie - nie wypisuje danych z pliku tylko podaje komunikat z else
{
	string linia;
	ifstream uchwyt;
	if (uchwyt.is_open()) //otwieramy plik
						{
						while (getline(uchwyt,linia))
							{
								cout<< linia << endl;
							}
					uchwyt.close ();
											}
				else cout << "Unable to open file"<<'\n'; 	
}
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
					ifstream uchwyt ("dane.txt");
					funkcja_open (); 						// nie dzia�a dla while 
				 /*obiekt typu fstream (uchwyt do pliku) 
				 if (uchwyt.is_open()) //otwieramy plik
						{
						while (getline(uchwyt,linia))
							{
								cout<< linia << endl;
							}
					uchwyt.close (); */
					}                                         // niestety funkcja open nie otwiera pliku
				//else cout << "Unable to open file"; 	
				//}
					
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
vector < human > osoba;
    cout << "Baza Osob\n1.-Lista osob\n2.-Dodaj osobe\n3.-Wyjscie";
    char odp;
    do
    {
        odp = getch();
        switch( odp )
        {
        case '1':
           cout << "\n\n\nLista osob:\n";				// wypisuje tylko wpisane dane , po zamkni�ciu i otworzeniu programu dane ulegaj� zniszczeniu
            for( int i = 0; i < osoba.size(); i++ )
            {
                cout << endl;
                cout << "Name: " << osoba[ i ].name << endl;
                cout << "Surname: " << osoba[ i ].surname << endl;
                cout << "Number library card: " << osoba[ i ].number << endl;
            } 
            break;
        case '2': 			// nie wiem, jak zapisa� do pliku - czy tutaj trzeba otworzy� nowy plik?
		{
			cout << "\n\n\n|----DODAWANIE_OSOBY_DO_LISTY-----|";
            cout << "\nName: ";
            string odp_name;
            cin >> odp_name;
            cout << "Surname: ";
            string odp_surname;
            cin >> odp_surname;
            cout << "Number library card: ";
            string odp_number;
            cin >> odp_number;
            osoba.push_back( human( odp_name, odp_surname, odp_number ) );
            cout << "\n<***ZAKONCZONO_Z_SUKCESEM***>";
    	}
            break;
        }
    }
    while( odp != '3' );	
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
			cout<< "/---------------------------------------------/"<< endl;


/* tu wklejam moje pr�by z tworzeniem pliku i wprowadzaniem 1 danej*/
 cout<< "napisz imi�" << endl;
// cin>>name;     - to z kolei nie dopisuje do pliku            
	fstream katalog;
	katalog.open ("ja.txt", ios::out|ios::app);
	getline (cin, name);
	katalog<<name << '\n';  // jako osobny plik pozwala wpisywa� imiona atutaj nie
	katalog.close ();

 { 
 string linia;
 	ifstream katalog;
 katalog.open("ja.txt", ios::in); // otwarcie pliku
 if(katalog.good()) // sprawdzamy czy plik istnieje
{
 	while(!katalog.eof())
 	{
 		getline(katalog, linia);
 		cout<< linia<< '\n';
	 }
}
 if(katalog==NULL)   // nie wiem dlaczego to te� si� wykonuje na ekranie
 {
 	cout<<"plik jest pusty"; 	
	katalog.close();
 }
else cout<<"plik nie istnieje";
}
 getch();
 
 
 /*----------- to dopiero rozgryzam */
		
		
		
			// stw�rz w3asn1 funkcje w kt�rej wczytasz katalog 
			// i tutaj j1 wywo3aj - kod bedzie czytelniejszy 
			
		
		
			// podpowiedzi szukaj w cPlusPlusMaterials\Kod\Arrays&Functions
			// i plik functions.cpp i jeszcze w webinarium o wektorze
			// np:
	
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
			
	return 0;
}


human::human( string xname, string xsurname, string xnumber )
  : name( xname ), surname( xsurname ), number( xnumber )
  {
 }
