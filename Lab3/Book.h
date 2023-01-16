#pragma once

#ifndef _BOOK_H_
#define _BOOK_H_

#include <string>

class Book
{
public:
	void SetTitle(std::string title);
	void SetYearIssue(const int yearIssue);
	void SetPageCount(const int pageCount);
	void SetAuthorCount(const int authorCount);
	void SetAuthors(std::string* authors);

	std::string GetTitle();
	int GetYearIssue();
	int GetPageCount();
	int GetAuthorCount();
	std::string* GetAuthors();
private:
	std::string _titile = "";
	int _yearIssue = 0;
	int _pageCount = 0;
	int _authorCount = 0;
	std::string* _authors = nullptr; //Будет ли рабоать string a[10];
};

void DemoBook();
void ReadBookFromConsole(Book& book);
void WriteBookToConsole(Book& book);
void IsCorrect(Book& book);
int FindBookByAuthor(Book* books, const int booksCount, std::string author);


#endif // !_BOOK_H_
