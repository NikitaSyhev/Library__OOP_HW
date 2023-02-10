#pragma once
#include <string>
static int ID_SUBSCRIBERS = 0;
class Subscriber
{
public:
	Subscriber(const std::string& name, const std::string& BookWanted);
	const std::string& GetName()const;
	const std::string& GetBook()const;
	int GetID()const;
private:
	std::string _name;
	std::string _BookWanted;
	int _id;

};

