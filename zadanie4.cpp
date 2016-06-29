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

//mimo najszczerszych chêci, ale nie uda³o mi siê z argumentem funkcji i referencj¹ - poddajê siê - wczytuje wszystko osobno poni¿ej



/*void funkcja_open () // ta funkja dzia³a tylko po³owicznie - nie wypisuje danych z pliku tylko podaje komunikat z else
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
}*/
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
					ifstream uchwyt ("dane.txt");
					if (uchwyt.is_open()) //otwieramy plik
						{
						while (getline(uchwyt,linia))
							{
								cout<< linia << endl;
							}
					uchwyt.close (); 						}                                         
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
vector < human > osoby;
    cout << "Baza Osob\n1.-Lista osob\n2.-Dodaj osobe\n3.-Wyjscie";
    char odp;
    do
    {
        odp = getch();
        switch( odp )
        {
        case '1':
        
			{
				cout << "\n\n\nLista osob:\n";				// wypisuje tylko wpisane dane , po zamkniêciu i otworzeniu programu dane ulegaj¹ zniszczeniu
            fstream katalog;
            string linia;
            katalog.open("ja.txt", ios::in); // otwarcie pliku
			if(katalog.good()) // sprawdzamy czy plik istnieje
			{
			while(!katalog.eof())
			{
			getline(katalog, linia);
			cout<< linia<< '\n';
			}
			}
		
			for( int i = 0; i < osoby.size(); i++ )
            {
                cout << endl;
                cout << "Name: " << osoby[ i ].name << endl;
                cout << "Surname: " << osoby[ i ].surname << endl;
                cout << "Number library card: " << osoby[ i ].number << endl;
            } 
            katalog.close();
			break;
			}
        case '2': 			// nie wiem, jak zapisaæ do pliku - czy tutaj trzeba otworzyæ nowy plik?
		{
			cout << "\n\n\n|----DODAWANIE_OSOBY_DO_LISTY-----|";
			fstream katalog;   
			katalog.open ("ja.txt", ios::out|ios_base::app);
			string odp_name;
			getline (cin, odp_name); 	
			cout << "\nName: ";
            cin >> odp_name;
			katalog<<odp_name << '\n'; 
            cout << "Surname: ";
            string odp_surname;
            cin >> odp_surname;
            cout << "Number library card: ";
            string odp_number;
            cin >> odp_number;
            osoby.push_back( human( odp_name, odp_surname, odp_number ) );
            cout << "\n<***ZAKONCZONO_Z_SUKCESEM***>";
            katalog.close ();
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


/* tu wklejam moje próby z tworzeniem pliku i wprowadzaniem 1 danej*/
 cout<< "napisz imiê" << endl;
// cin>>name;     - to z kolei nie dopisuje do pliku            
	fstream katalog;
	katalog.open ("ja.txt", ios::out|ios_base::app);
	getline (cin, name);
	cin>>name;
	katalog<<name << '\n';  
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
 if(katalog==NULL)   // nie wiem dlaczego to te¿ siê wykonuje na ekranie
 {
 	cout<<"plik jest pusty"; 	
	katalog.close();
 }
}
}
else cout<<"plik nie istnieje";
}
getch();
 
	return 0;
}


human::human( string xname, string xsurname, string xnumber )
  : name( xname ), surname( xsurname ), number( xnumber )
  {
 }
