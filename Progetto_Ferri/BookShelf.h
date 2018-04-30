#pragma once
#include "Book.h"
#include <vector>
#include <cstdlib>

class BookShelf
{
public:
	struct ShelfColor
	{
		std::string yellowColor = "Yellow";
		std::string pinkColor = "Pink";
		std::string horrorColor = "Black";
		std::string fantasyColor = "Purple";
		std::string adventureColor = "Green";
	};

	//Metodi
	virtual void Description() = 0;//La descrizione di ogni tipo di libro
	virtual void Background() = 0;//Cambia lo sfondo in base allo scaffale
	virtual void AddBook() = 0;//Aggiunge un libro
	virtual void List() = 0;//Stampa il vector di libri a schermo
	virtual void EmptyList() = 0;//Svuota uno scaffale
	virtual void Title_Search(const std::string A) = 0;//Ricerca per titolo
	virtual void Author_Search(const std::string A) = 0;//Ricerca per autore
	virtual void PubHouse_Search(const std::string A) = 0;//Ricerca per casa editrice
	virtual void Pages_Search(const int A) = 0;//Ricerca per n di pagine
	virtual void PubYear_Search(const int A) = 0;//Ricerca per anno di pubblicazione

	static void AllList(const std::vector<Yellow_Book> yellow_books, const std::vector<Pink_Book> pink_books, const std::vector<Horror_Book> horror_books, const std::vector<Fantasy_Book> fantasy_books, const std::vector<Adventure_Book> adventure_books);
};

class Yellow_BookShelf : public BookShelf
{
public:
	std::vector<Yellow_Book> books;
public:
	//Override
	void List() override;
	void EmptyList() override;
	void Description() override;
	void Background() override;
	void AddBook() override;
	void Title_Search(const std::string A) override;
	void Author_Search(const std::string A) override;
	void PubHouse_Search(const std::string A) override;
	void Pages_Search(const int A) override;
	void PubYear_Search(const int A) override;
};

class Pink_BookShelf : public BookShelf
{
public:
	std::vector<Pink_Book> books;
public:
	//Override
	void List() override;
	void EmptyList() override;
	void Description() override;
	void Background() override;
	void AddBook() override;
	void Title_Search(const std::string A) override;
	void Author_Search(const std::string A) override;
	void PubHouse_Search(const std::string A) override;
	void Pages_Search(const int A) override;
	void PubYear_Search(const int A) override;
};

class Horror_BookShelf : public BookShelf
{
public:
	std::vector<Horror_Book> books;
public:
	//Override
	void List() override;
	void EmptyList() override;
	void Description() override;
	void Background() override;
	void AddBook() override;
	void Title_Search(const std::string A) override;
	void Author_Search(const std::string A) override;
	void PubHouse_Search(const std::string A) override;
	void Pages_Search(const int A) override;
	void PubYear_Search(const int A) override;
};

class Fantasy_BookShelf : public BookShelf
{
public:
	std::vector<Fantasy_Book> books;
public:
	//Override
	void List() override;
	void EmptyList() override;
	void Description() override;
	void Background() override;
	void AddBook() override;
	void Title_Search(const std::string A) override;
	void Author_Search(const std::string A) override;
	void PubHouse_Search(const std::string A) override;
	void Pages_Search(const int A) override;
	void PubYear_Search(const int A) override;
};

class Adventure_BookShelf : public BookShelf
{
public:
	std::vector<Adventure_Book> books;
public:
	//Override
	void List() override;
	void EmptyList() override;
	void Description() override;
	void Background() override;
	void AddBook() override;
	void Title_Search(const std::string A) override;
	void Author_Search(const std::string A) override;
	void PubHouse_Search(const std::string A) override;
	void Pages_Search(const int A) override;
	void PubYear_Search(const int A) override;
};