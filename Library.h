#pragma once
#include <iostream>
#include "ILibrary.h"
#include "string"
#include <map>
#include <queue>
class Library : public ILibrary {
public:
	Library(const std::string& name);
	void AddBook(const Book& book) override;
	void ModifyBook(int key) override;
	void removeBook(int key) override;
	void RegistrationSubscriber(const Subscriber& user) override;
	void Pop();
private:
	std::string _name;
	std::map<int, Book> _books;
	std::queue<Subscriber> _subsribers;
	unsigned int _id_book;
};