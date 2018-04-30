#include <iostream>
#include "Book.h"
#include "BookShelf.h"
#include <string>
#include <vector>
#include <cstdlib>
#include <exception>

using namespace std;



class ExceptionOpz :public exception
{
	virtual const char* what() const throw () {
		return "Inserimento opzione non valida!";
	}
}ExOpz;

void main() {
	//VARIABILI
	Yellow_BookShelf YBs;
	Pink_BookShelf PBs;
	Horror_BookShelf HBs;
	Fantasy_BookShelf FBs;
	Adventure_BookShelf ABs;
	int opz, opzRicerca, opzAggiungi, Pagine, Anno_Pub;
	string PassWord, Titolo, Autore, Casa_Ed;
	BookShelf* Shelf = NULL;

	//static_casting
	Horror_Book* hb= NULL;
	Book* b2 = static_cast<Book*>(hb);
	
	//dynamic_casting
	BookShelf* base = new Pink_BookShelf;
	Pink_BookShelf* der = dynamic_cast<Pink_BookShelf*>(base);


	/*->Immissione libri di ESEMPIO<-*/ {
		Yellow_Book Y1("Sherlock Holmes", "Arthur Conan Doyle", "Zanichelli", 346, 2006);
		Yellow_Book Y2("La Signora in Giallo", "Peter S. Fischer", "Mondadori", 567, 1994);
		YBs.books.push_back(Y1); YBs.books.push_back(Y2);

		Pink_Book P1("Un Meraviglioso Disastro", "Jamie McGuire", "Garzanti", 341, 2007);
		Pink_Book P2("Sono sempre io", "Jojo Moyes", "Mondadori", 444, 2018);
		PBs.books.push_back(P1); PBs.books.push_back(P2);

		Horror_Book H1("Dracula", "Bram Stoker", "Mondadori", 765, 1934);
		Horror_Book H2("Venerdì 13", "Anonymous", "Garzanti", 111, 2010);
		HBs.books.push_back(H1); HBs.books.push_back(H2);

		Fantasy_Book F1("Harry Potter", "J. K. Rowling", "Mondandori", 576, 2014);
		Fantasy_Book F2("Il Signore degli Anelli", "J. R. R. Tolkien", "Mondadori", 653, 2008);
		FBs.books.push_back(F1); FBs.books.push_back(F2);

		Adventure_Book A1("Game of Thrones", "R. R. Martin", "2011", 355, 2004);
		Adventure_Book A2("Il GGG", "Melissa Mathison", "Zanichelli", 646, 1999);
		ABs.books.push_back(A1); ABs.books.push_back(A2);
	}
	
	do{
		system("color 0f");
		cout << "LIBRERIA COMMERCIALE MANFREDINI-PELLEGRINO" << endl << endl;
		cout << "1 : Stampa tutti i libri;" << endl;
		cout << "2 : Stampa Scaffale GIALLO;" << endl;
		cout << "3 : Stampa Scaffale ROSA;" << endl;
		cout << "4 : Stampa Scaffale HORROR;" << endl;
		cout << "5 : Stampa Scaffale FANTASY;" << endl;
		cout << "6 : Stampa Scaffale AVVENTURA;" << endl;
		cout << "7 : Ricerca Libro;" << endl;
		cout << "8 : Svuota Libreria Giallo;" << endl;
		cout << "9 : Svuota Libreria Rosa;" << endl;
		cout << "10 : Svuota Libreria Horror;" << endl;
		cout << "11 : Svuota Libreria Fantasy;" << endl;
		cout << "12 : Svuota Libreria Avventura;" << endl;
		cout << "13 : Aggiungi un Libro;" << endl;
		cout << "0 : ESCI;" << endl << endl;
		cout << "-->";
		try {
			cin >> opz;

			switch (opz) {
			case 1:
				BookShelf::AllList(YBs.books,PBs.books,HBs.books,FBs.books,ABs.books);
				break;
			case 2:
				YBs.Description();
				YBs.Background();
				YBs.List();
				break;
			case 3:
				PBs.Description();
				PBs.Background();
				PBs.List();
				break;
			case 4:
				HBs.Description();
				HBs.Background();
				HBs.List();
				break;
			case 5:
				FBs.Description();
				FBs.Background();
				FBs.List();
				break;
			case 6:
				ABs.Description();
				ABs.Background();
				ABs.List();
				break;
			case 7:
				system("cls");
				cout << "RICERCA" << endl << endl;
				cout << "1 : Titolo;" << endl;
				cout << "2 : Autore;" << endl;
				cout << "3 : Casa Editrice;" << endl;
				cout << "4 : Pagine;" << endl;
				cout << "5 : Anno di Pubblicazione." << endl;
				cout << "0 : ESCI;" << endl << endl;
				cout << "-->";
				cin >> opzRicerca;
				try {
					switch (opzRicerca) {
					case 1:
						cout << "Dimmi il titolo" << endl;
						getchar();
						getline(cin, Titolo);
						cout << endl << endl;
						YBs.Title_Search(Titolo);
						PBs.Title_Search(Titolo);
						HBs.Title_Search(Titolo);
						FBs.Title_Search(Titolo);
						ABs.Title_Search(Titolo);
						break;
					case 2:
						cout << "Dimmi l'autore" << endl;
						getchar();
						getline(cin, Autore);
						cout << endl << endl;
						YBs.Author_Search(Autore);
						PBs.Author_Search(Autore);
						HBs.Author_Search(Autore);
						FBs.Author_Search(Autore);
						ABs.Author_Search(Autore);
						break;
					case 3:
						cout << "Dimmi la casa editrice" << endl;
						cin >> Casa_Ed;
						cout << endl << endl;
						YBs.PubHouse_Search(Casa_Ed);
						PBs.PubHouse_Search(Casa_Ed);
						HBs.PubHouse_Search(Casa_Ed);
						FBs.PubHouse_Search(Casa_Ed);
						ABs.PubHouse_Search(Casa_Ed);
						break;
					case 4:
						cout << "Dimmi il numero di pagine" << endl;
						cin >> Pagine;
						cout << endl << endl;
						YBs.Pages_Search(Pagine);
						PBs.Pages_Search(Pagine);
						HBs.Pages_Search(Pagine);
						FBs.Pages_Search(Pagine);
						ABs.Pages_Search(Pagine);
						break;
					case 5:
						cout << "Dimmi l'anno di pubblicazione" << endl;
						cin >> Anno_Pub;
						cout << endl << endl;
						YBs.PubYear_Search(Anno_Pub);
						PBs.PubYear_Search(Anno_Pub);
						HBs.PubYear_Search(Anno_Pub);
						FBs.PubYear_Search(Anno_Pub);
						ABs.PubYear_Search(Anno_Pub);
						break;
					case 0:
						break;
					}
				}
				catch (exception& e) {
					cout << e.what() << endl << endl;
				}
				break;
			case 8:
				YBs.EmptyList();
				break;
			case 9:
				PBs.EmptyList();
				break;
			case 10:
				HBs.EmptyList();
				break;
			case 11:
				FBs.EmptyList();
				break;
			case 12:
				ABs.EmptyList();
				break;
			case 13:
				system("cls");
				cout << "Dove?" << endl;
				cout << "1 -> Giallo;" << endl;
				cout << "2 -> Rosa;" << endl;
				cout << "3 -> Horror;" << endl;
				cout << "4 -> Fantasy;" << endl;
				cout << "5 -> Avventura;" << endl << endl;
				cout << "-->";
				cin >> opzAggiungi;
			
				switch (opzAggiungi) {
				case (int)Yellow:
					Shelf = &YBs;
					break;
				case (int)Pink:
					Shelf = &PBs;
					break;								//what a great way to use an enum!
				case (int)Horror:
					Shelf = &HBs;
					break;
				case (int)Fantasy:
					Shelf = &FBs;
					break;
				case (int)Adventure:
					Shelf = &ABs;
					break;
				}
				
				Shelf->AddBook();
				cout << "" << endl;
				cout << "LIBRO REGISTRATO CON SUCCESSO." << endl;
				break;
			case 0:
				system("cls");
				cout << "Arrivederci!" << endl;
				break;
			default:
				throw ExOpz;
				break;
			}
		}
		catch(exception& e){
			cout << e.what() << endl << endl;
		}
		system("pause");
		system("cls");
	} while (opz != 0);
};
