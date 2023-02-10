#include "Subscriber.h"

Subscriber::Subscriber(const std::string& name, const std::string& BookWanted) :_name(name), _BookWanted(BookWanted), _id(ID_SUBSCRIBERS) {
	ID_SUBSCRIBERS++;
}

const std::string& Subscriber::GetName()const {
	return _name;
}

const std::string& Subscriber::GetBook()const {
	return _BookWanted;
}

int Subscriber::GetID()const {
	return _id;
}