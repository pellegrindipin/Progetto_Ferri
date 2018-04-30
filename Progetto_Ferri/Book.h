#pragma once
#include <string>
#include <cstdlib>

enum BookGenre {
	Yellow=1,
	Pink,
	Horror,
	Fantasy,
	Adventure
};

class Book
{
	//Attributi
protected:
	std::string _title;
	std::string _author;
	std::string _pubHouse;
	int _pages;
	int _pubYear;

	//Metodi GET e SET
public:
	void setTitle(std::string _title);
	void setAuthor(std::string _author);
	void setPubHouse(std::string _);
	void setPages(int _pages);
	void setPubYear(int _pubYear);
	std::string getTitle();
	std::string getAuthor();
	std::string getPubHouse();
	int getPages();
	int getPubYear();

	//Altri Metodi
	virtual std::string ToString() = 0;

	//Overload
	//friend std::istream& operator>> (std::istream& is, Book& A);
	friend std::ostream& operator<< (std::ostream& os, Book& A);
};

class Yellow_Book : public Book 
{
public:
	//Costruttore
	Yellow_Book();
	Yellow_Book(std::string _title, std::string _author, std::string _pubHouse, int pages, int _pubYear);

	//Metodi
	std::string ToString() override;
};

class Pink_Book : public Book
{
public:
	//Costruttore
	Pink_Book();
	Pink_Book(std::string _title, std::string _author, std::string _pubHouse, int pages, int _pubYear);

	//Metodi
	std::string ToString() override;
};

class Horror_Book : public Book
{
public:
	//Costruttore
	Horror_Book();
	Horror_Book(std::string _title, std::string _author, std::string _pubHouse, int pages, int _pubYear);

	//Metodi
	std::string ToString() override;
};

class Fantasy_Book : public Book
{
public:
	//Costruttore
	Fantasy_Book();
	Fantasy_Book(std::string _title, std::string _author, std::string _pubHouse, int pages, int _pubYear);

	//Metodi
	std::string ToString() override;
};

class Adventure_Book : public Book
{
public:
	//Costruttore
	Adventure_Book();
	Adventure_Book(std::string _title, std::string _author, std::string _pubHouse, int pages, int _pubYear);

	//Metodi
	std::string ToString() override;
};