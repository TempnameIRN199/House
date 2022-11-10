#include "Header.h"

Human::Human()
{
	initHuman();
}
Human::Human(char* name, char* surname, char* patronymic, int age)
{
	initHuman();
	setName(name);
	setSurname(surname);
	setPatronymic(patronymic);
	setAge(age);
}
Human::Human(const Human& other)
{
	initHuman();
	setName(other.name);
	setSurname(other.surname);
	setPatronymic(other.patronymic);
	setAge(other.age);
}
Human::~Human()
{
	deleteHuman();
}
void Human::setName(char* name)
{
	this->name = name;
}
void Human::setSurname(char* surname)
{
	this->surname = surname;
}
void Human::setPatronymic(char* patronymic)
{
	this->patronymic = patronymic;
}
void Human::setAge(int age)
{
	this->age = age;
}
char* Human::getName() const
{
	return name;
}
char* Human::getSurname() const
{
	return surname;
}
char* Human::getPatronymic() const
{
	return patronymic;
}
int Human::getAge() const
{
	return age;
}
void Human::showHuman()
{
	cout << "Name: " << getName() << endl;
	cout << "Surname: " << getSurname() << endl;
	cout << "Patronymic: " << getPatronymic() << endl;
	cout << "Age: " << getAge() << endl;
}
Human& Human::operator=(const Human& other)
{
	if (this == &other)
	{
		return *this;	
	}
	deleteHuman();
	initHuman();
	setName(other.name);
	setSurname(other.surname);
	setPatronymic(other.patronymic);
	setAge(other.age);
	return *this;
}
void Human::initHuman()
{
	name = new char[20];
	surname = new char[20];
	patronymic = new char[20];
	age = 0;
}
void Human::deleteHuman()
{
	delete[] name;
	delete[] surname;
	delete[] patronymic;
	age = 0;
}