#pragma once
#include "Header.h"
// Клас «Дім» містить масив об’єктів класу «Квартира»
// обязательно выделение динамической памяти
class House
{
private:
    char* adress = nullptr;
    int kol_etaschej;
    int kol_podjezdov;
    int num_flats;
    Apartment* flats = nullptr;
public:
	// конструкторы
	House();
	House(char* adress, int kol_etaschej, int kol_podjezdov, int num_flats);
	House(const House& other);
	// деструктор
	~House();
	// сеттеры
	void setAdress(char* adress);
	void setKol_etaschej(int kol_etaschej);
	void setKol_podjezdov(int kol_podjezdov);
	void setNum_flats(int num_flats);
	// геттеры
	char* getAdress() const;
	int getKol_etaschej() const;
	int getKol_podjezdov() const;
	int getNum_flats() const;
	// методы
	void addFlats();
	void showFlats();
	void showHouse();
	// перегрузка операторов
	House& operator=(const House& other); // оператор присваивания
	// функции-члены
	void initHouse(); // инициализация
	void deleteHouse(); // удаление
};