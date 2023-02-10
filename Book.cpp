#include "Book.h"

Book::Book(int year, const std::string& author, const std::string& title, const std::string& content) :_year(year), _author(author), _title(title), _content(content) {}

Book::Book(int year, const std::string& author, const std::string& title) :_year(year), _author(author), _title(title) {}

const std::string& Book::GetAithor()const {
	return _author;
}

const std::string& Book::GetTitle()const {
	return _title;
}

const std::string& Book::GetContent()const {
	return _content;
}

int Book::GetYearIssue()const {
	return _year;
}

void Book::SetAuthor(const std::string& author) {
	_author = author;
}

void Book::SetTitle(const std::string& title) {
	_title = title;
}

void Book::SetContent(const std::string& content) {
	_content = content;
}

void Book::SetYear(int year) {
	_year = year;
}

