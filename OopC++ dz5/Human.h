#pragma once
#include "Header.h"
// обязательно выделение динамической памяти

class Human
{
private:
	char* name;
	char* surname;
	char* patronymic;
	int age;
public:
	// конструкторы
	Human();
	Human(char* name, char* surname, char* patronymic, int age);
	Human(const Human& other); // конструктор копирования
	// деструктор
	~Human();
	// сеттеры
	void setName(char* name);
	void setSurname(char* surname);
	void setPatronymic(char* patronymic);
	void setAge(int age);
	// геттеры
	char* getName() const;
	char* getSurname() const;
	char* getPatronymic() const;
	int getAge() const;
	// методы
	void showHuman();
	// перегрузка операторов 
	Human& operator=(const Human& other); // оператор присваивания
	// функции-члены
	void initHuman();
	void deleteHuman();
};