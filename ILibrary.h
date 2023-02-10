#pragma once
#include "Book.h"
#include "Subscriber.h"
class ILibrary
{
public:
	virtual void AddBook(const Book& book) = 0;
	virtual void ModifyBook(int key) = 0;
	virtual void removeBook(int key) = 0;
	virtual void RegistrationSubscriber(const Subscriber& user) = 0;
	virtual ~ILibrary() {}

};

