# Library__OOP_HW
Создать библиотеку, которая предназначена для того, чтобы хранить книги. Библиотека
наследуется от интерфейса с чисто виртуальными методами.
Книга состоит из полей: автор, год выпуска, название, id, содержание книги (можно
оставить пустой строкой)
В библиотеку можно добавлять/изменять/удалять книги,
регистрировать пользователей (каждый пользователь - это как минимум имя и
уникальный id и запрашиваемые книги).
Подумайте, какие методы следует содержать в интерфейсе библиотеки, а какие могут
быть только у вашей конкретной библиотеки
(специфические методы могут и не существовать - на ваше усмотрение)
Пользователь - это тоже класс.
В библиотеку пользователи регистририуются и попадают в очередь, кто первый
записался - тот и первый получит книгу.
Пользователь должен уйти либо с книгой, либо с сообщением о том, что книги нет в
наличии.
Подумайте, в какую структуру лучше поместить книги, а в какую - пользователей.
Самый важный критерий оценки - программа не крашится, код читаемый, выводит
понятные пользователю данные.
40 минут.
ILibrary {
virtual void addSubscriber();
}
Library : public ILibrary {
..//
}
Subscriber {
private:
_name
_booksWanted
}
