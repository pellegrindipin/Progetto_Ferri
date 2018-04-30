#include "Book.h"
#include <iostream>
#include <cstdlib>

//Book
void Book::setTitle(std::string _title)
{
	this->_title = _title;
}
void Book::setAuthor(std::string _author)
{
	this->_author = _author;
}
void Book::setPubHouse(std::string _pubHouse) 
{
	this->_pubHouse = _pubHouse;
}
void Book::setPages(int _pages)
{
	this->_pages = _pages;
}
void Book::setPubYear(int _pubYear)
{
	this->_pubYear = _pubYear;
}
std::string Book::getTitle()
{
	return _title;
}
std::string Book::getAuthor()
{
	return _author;
}
std::string Book::getPubHouse() 
{
	return _pubHouse;
}
int Book::getPages()
{
	return _pages;
}
int Book::getPubYear()
{
	return _pubYear;
}

std::ostream & operator<<(std::ostream& os, Book& A) {
	return os << A.ToString() << std::endl;
}

//Yellow_Book
Yellow_Book::Yellow_Book(std::string _title, std::string _author, std::string _pubHouse, int _pages, int _pubYear)
{
	this->_title = _title;
	this->_author = _author;
	this->_pubHouse = _pubHouse;
	this->_pages = _pages;
	this->_pubYear = _pubYear;
}
Yellow_Book::Yellow_Book()
{
}
std::string Yellow_Book::ToString()
{
	return (_title + " // " + _author + " // " + _pubHouse + " // " + std::to_string(_pages) + " // " + std::to_string(_pubYear) + " // " + "GIALLO");
}

//Pink_Book
Pink_Book::Pink_Book(std::string _title, std::string _author, std::string _pubHouse, int _pages, int _pubYear)
{
	this->_title = _title;
	this->_author = _author;
	this->_pubHouse = _pubHouse;
	this->_pages = _pages;
	this->_pubYear = _pubYear;
}
Pink_Book::Pink_Book()
{
}
std::string Pink_Book::ToString()
{
	return (_title + " // " + _author + " // " + _pubHouse + " // " + std::to_string(_pages) + " // " + std::to_string(_pubYear) + " // " + "ROSA");
}

//Horror_Book
Horror_Book::Horror_Book(std::string _title, std::string _author, std::string _pubHouse, int _pages, int _pubYear)
{
	this->_title = _title;
	this->_author = _author;
	this->_pubHouse = _pubHouse;
	this->_pages = _pages;
	this->_pubYear = _pubYear;
}
Horror_Book::Horror_Book()
{
}
std::string Horror_Book::ToString()
{
	return (_title + " // " + _author + " // " + _pubHouse + " // " + std::to_string(_pages) + " // " + std::to_string(_pubYear) + " // " + "HORROR");
}

//Fantasy_Book
Fantasy_Book::Fantasy_Book(std::string _title, std::string _author, std::string _pubHouse, int _pages, int _pubYear)
{
	this->_title = _title;
	this->_author = _author;
	this->_pubHouse = _pubHouse;
	this->_pages = _pages;
	this->_pubYear = _pubYear;
}
Fantasy_Book::Fantasy_Book()
{
}
std::string Fantasy_Book::ToString()
{
	return (_title + " // " + _author + " // " + _pubHouse + " // " + std::to_string(_pages) + " // " + std::to_string(_pubYear) + " // " + "FANTASY");
}

//Adventure_Book
Adventure_Book::Adventure_Book(std::string _title, std::string _author, std::string _pubHouse, int _pages, int _pubYear)
{
	this->_title = _title;
	this->_author = _author;
	this->_pubHouse = _pubHouse;
	this->_pages = _pages;
	this->_pubYear = _pubYear;
}
Adventure_Book::Adventure_Book()
{
}
std::string Adventure_Book::ToString()
{
	return (_title + " // " + _author + " // " + _pubHouse + " // " + std::to_string(_pages) + " // " + std::to_string(_pubYear) + " // " + "AVVENTURA");
}