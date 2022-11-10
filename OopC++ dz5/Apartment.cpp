#include "Header.h"

Apartment::Apartment()
{
	initApartment();
}
Apartment::Apartment(int number, int square, int num_room, int num_people)
{
	initApartment();
	setNumber(number);
	setSquare(square);
	setNum_room(num_room);
	setNum_people(num_people);
}
Apartment::Apartment(const Apartment& other)
{
	initApartment();
	setNumber(other.number);
	setSquare(other.square);
	setNum_room(other.num_room);
	setNum_people(other.num_people);
}
Apartment::~Apartment()
{
	deleteApartment();
}
void Apartment::setNumber(int number)
{
	this->number = number;
}
void Apartment::setSquare(int square)
{
	this->square = square;
}
void Apartment::setNum_room(int num_room)
{
	this->num_room = num_room;
}
void Apartment::setNum_people(int num_people)
{
	this->num_people = num_people;
}
int Apartment::getNumber() const
{
	return number;
}
int Apartment::getSquare() const
{
	return square;
}
int Apartment::getNum_room() const
{
	return num_room;
}
int Apartment::getNum_people() const
{
	return num_people;
}
void Apartment::addPeople()
{
	Human* temp = new Human[num_people];
	for (int i = 0; i < num_people; i++)
	{
		temp[i] = people[i];
	}
	delete[] people;
	people = new Human[num_people + 1];
	for (int i = 0; i < num_people; i++)
	{
		people[i] = temp[i];
	}
	delete[] temp;
	people[num_people].initHuman();
	num_people++;
}
void Apartment::showPeople()
{
	for (int i = 0; i < num_people; i++)
	{
		people[i].showHuman();
	}
}
void Apartment::showApartment()
{
	cout << "Number: " << number << endl;
	cout << "Square: " << square << endl;
	cout << "Number of rooms: " << num_room << endl;
	cout << "Number of people: " << num_people << endl;
	showPeople();
}
Apartment& Apartment::operator=(const Apartment& other)
{
	if (this == &other)
	{
		return *this;
	}
	deleteApartment();
	initApartment();
	setNumber(other.number);
	setSquare(other.square);
	setNum_room(other.num_room);
	setNum_people(other.num_people);
	return *this;
}
void Apartment::initApartment()
{
	number = 0;
	square = 0;
	num_room = 0;
	num_people = 0;
	people = nullptr;
}
void Apartment::deleteApartment()
{
	delete[] people;
}