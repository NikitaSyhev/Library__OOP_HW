#pragma once
#include <string>
class Book
{
public:
	Book(int year, const std::string& author, const std::string& title, const std::string& content);
	Book(int year, const std::string& author, const std::string& title);
	const std::string& GetAithor()const;
	const std::string& GetTitle()const;
	const std::string& GetContent()const;
	int GetYearIssue()const;
	void SetAuthor(const std::string& author);
	void SetTitle(const std::string& title);
	void SetContent(const std::string& content);
	void SetYear(int year);
private:
	int _year;
	std::string _author;
	std::string _title;
	std::string _content;

};

