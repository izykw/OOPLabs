#include "Book.h"
#include <iostream>

using namespace std;

void DemoBook()
{
	const int COUNT = 3;
	Book book[COUNT];

	for (int i = 0; i < COUNT; i++)
	{
		cout << "#" << i + 1;
		ReadBookFromConsole(book[i]);
	}
	system("cls");
	for (int i = 0; i < COUNT; i++)
	{
		cout << "#" << i + 1 << " ";
		WriteBookToConsole(book[i]);
	}

	//3.2.5
	const int AMOUNT = 3;
	string author = "";
	Book books[AMOUNT];

	cout << endl;

	for (int i = 0; i < AMOUNT; i++)
	{
		cout << "#" << i + 1;
		ReadBookFromConsole(books[i]);
	}
	system("cls");
	cout << "Enter the author ";
	cin >> author;
	for (int i = 0; i < AMOUNT; i++)
	{
		cout << "#" << i + 1 << " ";
		WriteBookToConsole(books[i]);
	}

	int check = FindBookByAuthor(books, AMOUNT, author);
	if (check != -1)
	{
		cout << "--------------Founded book--------------" << endl;
		WriteBookToConsole(books[check]);
	}
	else
	{
		cout << "Book not founded" << endl;
	}
}

void ReadBookFromConsole(Book& book)
{
	int yearIssue = 0, pageCount = 0, authorCount = 0; //TODO: Сделать проверку ввода. И для route;
	std::string title;
	cout << "\nEnter the title of the book: ";
	cin >> title;
	cout << "\nEnter the year of publicaion: ";
	cin >> yearIssue;
	cout << "\nEnter the number of pages: ";
	cin >> pageCount;
	cout << "\nEnter the number of authors: ";
	cin >> authorCount;

	book.SetTitle(title);
	book.SetYearIssue(yearIssue);
	book.SetPageCount(pageCount);
	book.SetAuthorCount(authorCount);

	IsCorrect(book);

	std::string* authors = new string[book.GetAuthorCount()];

	for (int i = 0; i < book.GetAuthorCount(); i++)
	{
		cout << "\nEnter the author of the book №" << (i+1) << " ";
		cin >> authors[i];
	}
	book.SetAuthors(authors);
}

void WriteBookToConsole(Book& book)
{
	for (int i = 0; i < (book.GetAuthorCount() - 1); i++)
	{
		cout << book.GetAuthors()[i] << ", ";
	}
	cout << book.GetAuthors()[(book.GetAuthorCount()) - 1] << ". ";
	cout << book.GetTitle() << ". ";
	cout << book.GetYearIssue() << ". - ";
	cout << book.GetPageCount() << "p." << endl;
}

void IsCorrect(Book& book)
{
	if (book.GetPageCount() <= 0)
	{
		throw exception("\nThe number of pages cant be less or equal to 0, please enter values again\n");
	}
	if (book.GetAuthorCount() <= 0 || book.GetAuthorCount() > 10)
	{
		throw exception("\nThe number of authors cant be less or equal to 0 and more than 10, please enter values again\n");
	}
	if (book.GetYearIssue() <= 0 || book.GetYearIssue() > 2021)
	{
		throw exception("\nThe publication year cant be less or equal to 0 and more than this year, please enter values again\n");
	}
}

int FindBookByAuthor(Book* books, const int booksCount, string author)
{
	for (int i = 0; i < booksCount; i++)
	{
		for (int j = 0; j < books[j].GetAuthorCount(); j++) //Работает ли.
		{
			if (books[i].GetAuthors()[j] == author)
			{
				return i;
			}
		}

	}
	return -1;
}

void Book::SetTitle(std::string title)
{
	this->_titile = title;
}

void Book::SetYearIssue(const int yearIssue)
{
	if (yearIssue <= 0 || yearIssue > 2021)
	{
		throw exception("\nThe publication year cant be less or equal to 0 and more than this year, please enter values again\n");
	}
	this->_yearIssue = yearIssue;
}

void Book::SetPageCount(const int pageCount)
{
	if (pageCount <= 0)
	{
		throw exception("\nThe number of pages cant be less or equal to 0, please enter values again\n");
	}
	this->_pageCount = pageCount;
}

void Book::SetAuthorCount(const int authorCount)
{
	if (authorCount <= 0 || authorCount > 10)
	{
		throw exception("\nThe number of authors cant be less or equal to 0 and more than 10, please enter values again\n");
	}
	this->_authorCount = authorCount;
}

void Book::SetAuthors(std::string* authors)
{
	this->_authors = authors;
}

std::string Book::GetTitle()
{
	return this->_titile;
}

int Book::GetYearIssue()
{
	return this->_yearIssue;
}

int Book::GetPageCount()
{
	return this->_pageCount;
}

int Book::GetAuthorCount()
{
	return this->_authorCount;
}

std::string* Book::GetAuthors()
{
	return this->_authors;
}
