#include "BookShelf.h"
#include "Book.h"
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

//BookShelf
void BookShelf::AllList(std::vector<Yellow_Book> yellow_books, std::vector<Pink_Book> pink_books, std::vector<Horror_Book> horror_books, std::vector<Fantasy_Book> fantasy_books, std::vector<Adventure_Book> adventure_books)
{
	system("cls");
	std::vector<Yellow_Book>::iterator yellow_it;
	std::vector<Pink_Book>::iterator pink_it;
	std::vector<Horror_Book>::iterator horror_it;
	std::vector<Fantasy_Book>::iterator fantasy_it;
	std::vector<Adventure_Book>::iterator adventure_it;

	for (yellow_it = yellow_books.begin(); yellow_it != yellow_books.end(); yellow_it++) {
		std::cout << *yellow_it << std::endl;
	}
	for (pink_it = pink_books.begin(); pink_it != pink_books.end(); pink_it++) {
		std::cout << *pink_it << std::endl;
	}
	for (horror_it = horror_books.begin(); horror_it != horror_books.end(); horror_it++) {
		std::cout << *horror_it << std::endl;
	}
	for (fantasy_it = fantasy_books.begin(); fantasy_it != fantasy_books.end(); fantasy_it++) {
		std::cout << *fantasy_it << std::endl;
	}
	for (adventure_it = adventure_books.begin(); adventure_it != adventure_books.end(); adventure_it++) {
		std::cout << *adventure_it << std::endl;
	}


}

//YellowBookShelf
void Yellow_BookShelf::List()
{
	std::vector<Yellow_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++)
		std::cout << (*it).ToString() << std::endl << std::endl;
}
void Yellow_BookShelf::EmptyList() {
	char opz;
	std::cout << "Confermare? (s/n): ";
	std::cin >> opz;
	if (opz == 's' || opz == 'S')
	{
		books.clear();
	}
}
void Yellow_BookShelf::Description()
{
	system("cls");
	std::cout << "Il giallo è un genere di successo di narrativa di consumo nato verso la metà del XIX secolo e sviluppatosi nel Novecento. Dalla letteratura di genere, il giallo si è esteso agli altri mezzi espressivi veicolati da diversi media di massa: prima ai prodotti destinati alla radio e al cinema, quindi ai fumetti e ai prodotti destinati al pubblico televisivo. L'oggetto principale del genere giallo è la descrizione di un crimine e dei personaggi coinvolti, siano essi criminali o vittime. Si parla in modo più specifico di poliziesco quando, assieme a questi elementi, ha un ruolo centrale la narrazione delle indagini che portano alla luce tutti gli elementi della vicenda criminale. Poiché il suo oggetto è molto vasto, spesso il genere giallo si sovrappone con altri generi letterari, come la fantascienza e il romanzo storico." << std::endl << std::endl;
}
void Yellow_BookShelf::Background() {
	system("COLOR 0E");
}
void Yellow_BookShelf::AddBook() {
	std::string titolo, autore, casaEd;
	int pagine, annoPub;
	std::cin.ignore();
	std::cout << "Inserire titolo: ";
	std::getline(std::cin, titolo);
	std::cout << "Inserire autore: ";
	std::getline(std::cin, autore);
	std::cout << "Inserire casa editrice: ";
	std::getline(std::cin, casaEd);
	std::cout << "Inserire n. pagine: ";
	std::cin >> pagine;
	std::cout << "Inserire anno di pubblicazione: ";
	std::cin >> annoPub;

	Yellow_Book A(titolo, autore, casaEd, pagine, annoPub);
	books.push_back(A);

}
void Yellow_BookShelf::Title_Search(std::string A)
{
	std::vector<Yellow_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getTitle()==A) {
			std::cout << *it << std::endl;
		}
	}
}
void Yellow_BookShelf::Author_Search(const std::string A)
{
	std::vector<Yellow_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getAuthor() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Yellow_BookShelf::PubHouse_Search(const std::string A)
{
	std::vector<Yellow_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPubHouse() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Yellow_BookShelf::Pages_Search(const int A)
{
	std::vector<Yellow_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPages() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Yellow_BookShelf::PubYear_Search(const int A)
{
	std::vector<Yellow_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPubYear() == A) {
			std::cout << *it << std::endl;
		}
	}
}

//PinkBookShelf
void Pink_BookShelf::List()
{
	std::vector<Pink_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++)
		std::cout << (*it).ToString() << std::endl << std::endl;
}
void Pink_BookShelf::EmptyList() {
	char opz;
	std::cout << "Confermare? (s/n): ";
	std::cin >> opz;
	if (opz == 's' || opz == 'S')
	{
		books.clear();
	}
}
void Pink_BookShelf::Description()
{
	system("cls");
	std::cout << "Il romanzo rosa (detto anche romance) è un genere letterario che narra di storie d'amore e del loro intreccio che si dipanano in genere in avventure e intrighi e terminano sempre con un lieto fine." << std::endl << std::endl;
}
void Pink_BookShelf::Background() {
	system("COLOR 0D");
}
void Pink_BookShelf::AddBook() {
	std::string titolo, autore, casaEd;
	int pagine, annoPub;
	std::cin.ignore();
	std::cout << "Inserire titolo: " << std::endl;
	std::getline(std::cin, titolo);
	std::cout << "Inserire autore: " << std::endl;
	std::getline(std::cin, autore);
	std::cout << "Inserire casa editrice: " << std::endl;
	std::getline(std::cin, casaEd);
	std::cout << "Inserire n. pagine: " << std::endl;
	std::cin >> pagine;
	std::cout << "Inserire anno di pubblicazione: " << std::endl;
	std::cin >> annoPub;

	Pink_Book A(titolo, autore, casaEd, pagine, annoPub);
	books.push_back(A);
}
void Pink_BookShelf::Title_Search(const std::string A)
{
	std::vector<Pink_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getTitle() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Pink_BookShelf::Author_Search(const std::string A)
{
	std::vector<Pink_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getAuthor() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Pink_BookShelf::PubHouse_Search(const std::string A)
{
	std::vector<Pink_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPubHouse() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Pink_BookShelf::Pages_Search(const int A)
{
	std::vector<Pink_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPages() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Pink_BookShelf::PubYear_Search(const int A)
{
	std::vector<Pink_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPubYear() == A) {
			std::cout << *it << std::endl;
		}
	}
}

//HorrorBookShelf
void Horror_BookShelf::List()
{
	std::vector<Horror_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++)
		std::cout << (*it).ToString() << std::endl << std::endl;
}
void Horror_BookShelf::EmptyList() {
	char opz;
	std::cout << "Confermare? (s/n): ";
	std::cin >> opz;
	if (opz == 's' || opz == 'S')
	{
		books.clear();
	}
}
void Horror_BookShelf::Description()
{
	system("cls");
	std::cout << "L'orrore, detto anche con il termine inglese horror (derivante dal latino horror che significa orrore, spavento), è un genere di racconti, film o altri tipi di opere che mira a suscitare nel lettore o spettatore sentimenti di spavento e orrore." << std::endl << std::endl;
}
void Horror_BookShelf::Background() {
	system("COLOR 0C");
}
void Horror_BookShelf::AddBook() {
	std::string titolo, autore, casaEd;
	int pagine, annoPub;
	std::cin.ignore();
	std::cout << "Inserire titolo: " << std::endl;
	std::getline(std::cin, titolo);
	std::cout << "Inserire autore: " << std::endl;
	std::getline(std::cin, autore);
	std::cout << "Inserire casa editrice: " << std::endl;
	std::getline(std::cin, casaEd);
	std::cout << "Inserire n. pagine: " << std::endl;
	std::cin >> pagine;
	std::cout << "Inserire anno di pubblicazione: " << std::endl;
	std::cin >> annoPub;

	Horror_Book A(titolo, autore, casaEd, pagine, annoPub);
	books.push_back(A);
}
void Horror_BookShelf::Title_Search(const std::string A)
{
	std::vector<Horror_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getTitle() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Horror_BookShelf::Author_Search(const std::string A)
{
	std::vector<Horror_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getAuthor() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Horror_BookShelf::PubHouse_Search(const std::string A)
{
	std::vector<Horror_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPubHouse() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Horror_BookShelf::Pages_Search(const int A)
{
	std::vector<Horror_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPages() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Horror_BookShelf::PubYear_Search(const int A)
{
	std::vector<Horror_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPubYear() == A) {
			std::cout << *it << std::endl;
		}
	}
}

//FantasyBookShelf
void Fantasy_BookShelf::List()
{
	std::vector<Fantasy_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++)
		std::cout << (*it).ToString() << std::endl << std::endl;
}
void Fantasy_BookShelf::EmptyList() {
	char opz;
	std::cout << "Confermare? (s/n): ";
	std::cin >> opz;
	if (opz == 's' || opz == 'S')
	{
		books.clear();
	}
}
void Fantasy_BookShelf::Description()
{
	system("cls");
	std::cout << "Il fantasy è un genere letterario sviluppatosi tra il XIX ed il XX secolo, i cui elementi dominanti sono il mito, il soprannaturale, l'immaginazione, l'allegoria, la metafora, il simbolo e il surreale. In questo filone rientrano quelle storie di letteratura fantastica dove gli elementi fantastici non vengono spiegati in maniera scientifica." << std::endl << std::endl;
}
void Fantasy_BookShelf::Background() {
	system("COLOR 02");
}
void Fantasy_BookShelf::AddBook() {
	std::string titolo, autore, casaEd;
	int pagine, annoPub;
	std::cin.ignore();
	std::cout << "Inserire titolo: " << std::endl;
	std::getline(std::cin, titolo);
	std::cout << "Inserire autore: " << std::endl;
	std::getline(std::cin, autore);
	std::cout << "Inserire casa editrice: " << std::endl;
	std::getline(std::cin, casaEd);
	std::cout << "Inserire n. pagine: " << std::endl;
	std::cin >> pagine;
	std::cout << "Inserire anno di pubblicazione: " << std::endl;
	std::cin >> annoPub;

	Fantasy_Book A(titolo, autore, casaEd, pagine, annoPub);
	books.push_back(A);
}
void Fantasy_BookShelf::Title_Search(const std::string A)
{
	std::vector<Fantasy_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getTitle() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Fantasy_BookShelf::Author_Search(const std::string A)
{
	std::vector<Fantasy_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getAuthor() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Fantasy_BookShelf::PubHouse_Search(const std::string A)
{
	std::vector<Fantasy_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPubHouse() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Fantasy_BookShelf::Pages_Search(const int A)
{
	std::vector<Fantasy_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPages() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Fantasy_BookShelf::PubYear_Search(const int A)
{
	std::vector<Fantasy_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPubYear() == A) {
			std::cout << *it << std::endl;
		}
	}
}

//AdventureBookShelf
void Adventure_BookShelf::List()
{
	std::vector<Adventure_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++)
		std::cout << (*it).ToString() << std::endl << std::endl;
}
void Adventure_BookShelf::EmptyList() {
	char opz;
	std::cout << "Confermare? (s/n): ";
	std::cin >> opz;
	if (opz == 's' || opz == 'S')
	{
		books.clear();
	}
}
void Adventure_BookShelf::Description()
{
	system("cls");
	std::cout << "Il romanzo di avventura è un genere letterario che nasce nel XVIII secolo e narra di viaggi in terre lontane e quindi celebra il coraggio e l'ingegno umano. L'incontro fra diverse culture offre uno spunto per criticare la società in cui l'autore vive, ma anche per esaltarne i valori." << std::endl << std::endl;
}
void Adventure_BookShelf::Background() {
	system("COLOR 0A");
}
void Adventure_BookShelf::AddBook() {
	std::string titolo, autore, casaEd;
	int pagine, annoPub;
	std::cin.ignore();
	std::cout << "Inserire titolo: " << std::endl;
	std::getline(std::cin, titolo);
	std::cout << "Inserire autore: " << std::endl;
	std::getline(std::cin, autore);
	std::cout << "Inserire casa editrice: " << std::endl;
	std::getline(std::cin, casaEd);
	std::cout << "Inserire n. pagine: " << std::endl;
	std::cin >> pagine;
	std::cout << "Inserire anno di pubblicazione: " << std::endl;
	std::cin >> annoPub;

	Adventure_Book A(titolo, autore, casaEd, pagine, annoPub);
	books.push_back(A);
}
void Adventure_BookShelf::Title_Search(const std::string A)
{
	std::vector<Adventure_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getTitle() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Adventure_BookShelf::Author_Search(const std::string A)
{
	std::vector<Adventure_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getAuthor() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Adventure_BookShelf::PubHouse_Search(const std::string A)
{
	std::vector<Adventure_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPubHouse() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Adventure_BookShelf::Pages_Search(const int A)
{
	std::vector<Adventure_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPages() == A) {
			std::cout << *it << std::endl;
		}
	}
}
void Adventure_BookShelf::PubYear_Search(const int A)
{
	std::vector<Adventure_Book>::iterator it;
	for (it = books.begin(); it != books.end(); it++) {
		if ((*it).getPubYear() == A) {
			std::cout << *it << std::endl;
		}
	}
}