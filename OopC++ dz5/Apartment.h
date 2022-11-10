#pragma once
#include "Header.h"
// класс "Квартира" містить динамічний масив об’єктів класу «Людина»
// обязательно выделение динамической памяти
class Apartment
{
private:
	int number;
	int square;
	int num_room;
	int num_people;
	Human* people = nullptr;
public:
	// конструкторы
	Apartment();
	Apartment(int number, int square, int num_room, int num_people);
	Apartment(const Apartment& other); // конструктор копирования
	// деструктор
	~Apartment();
	// сеттеры
	void setNumber(int number);
	void setSquare(int square);
	void setNum_room(int num_room);
	void setNum_people(int num_people);
	// геттеры
	int getNumber() const;
	int getSquare() const;
	int getNum_room() const;
	int getNum_people() const;
	// методы
	void addPeople();
	void showPeople();
	void showApartment();
	// перегрузка операторов
	Apartment& operator=(const Apartment& other); // оператор присваивания
	// функции-члены
	void initApartment(); // инициализация
	void deleteApartment(); // удаление
};