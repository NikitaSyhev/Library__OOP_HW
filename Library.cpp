#include "Library.h"


Library::Library(const std::string& name) : _name(name){}

void Library::AddBook(const Book& book) {
	_books.insert({ _id_book ,book });
	_id_book++;
}

void Library::ModifyBook(int key) {
	std::string content;
	std::cout << "Ââåäèòå íîâîå îïèñàíèå\n";
	getline(std::cin, content);
	std::map<int, Book>::iterator _it = _books.find(key);//auto _it = _books.find(key);
	_it->second.SetContent(content);
}

void Library::removeBook(int key) {

}

void Library::RegistrationSubscriber(const Subscriber& user) {

}

void Library::Pop() {
	Subscriber& sub = _subsribers.front();
	std::string subWantedBook = sub.GetBook();
	for (auto it = _books.begin(); it != _books.end(); it++) {
		if (it->second.GetTitle() == subWantedBook) {
			_books.erase(it);
			_subsribers.pop();
			return;
		}
	}
	_subsribers.pop();
}