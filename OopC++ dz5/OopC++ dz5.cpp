#include "Header.h"

int main()
{
	setlocale(0, "");
	House house;
	char* adress = new char[20];
	cout << "Введите адрес дома: ";
	cin >> adress;
	house.setAdress(adress);
	int kol_etaschej;
	cout << "Введите количество этажей: ";
	int kol_podjezdov;
	cout << "Введите количество подъездов: ";
	cin >> kol_etaschej;
	house.setKol_etaschej(kol_etaschej);
	int num_flats;
	cout << "Введите количество квартир: ";
	cin >> num_flats;
	house.setNum_flats(num_flats);
	house.House(char* adress, int kol_etaschej, int kol_podjezdov, int num_flats);
	house.addFlats();
	house.showFlats();
	house.showHouse();
}