#include "Header.h"

House::House()
{
	initHouse();
}
House::House(char* adress, int kol_etaschej, int kol_podjezdov, int num_flats)
{
	initHouse();
	setAdress(adress);
	setKol_etaschej(kol_etaschej);
	setKol_podjezdov(kol_podjezdov);
	setNum_flats(num_flats);
}
House::House(const House& other)
{
	initHouse();
	setAdress(other.adress);
	setKol_etaschej(other.kol_etaschej);
	setKol_podjezdov(other.kol_podjezdov);
	setNum_flats(other.num_flats);
}
House::~House()
{
	deleteHouse();
}
void House::setAdress(char* adress)
{
	this->adress = adress;
}
void House::setKol_etaschej(int kol_etaschej)
{
	this->kol_etaschej = kol_etaschej;
}
void House::setKol_podjezdov(int kol_podjezdov)
{
	this->kol_podjezdov = kol_podjezdov;
}
void House::setNum_flats(int num_flats)
{
	this->num_flats = num_flats;
}
char* House::getAdress() const
{
	return adress;
}
int House::getKol_etaschej() const
{
	return kol_etaschej;
}
int House::getKol_podjezdov() const
{
	return kol_podjezdov;
}
int House::getNum_flats() const
{
	return num_flats;
}
void House::addFlats()
{
	flats = new Apartment[num_flats];
	for (int i = 0; i < num_flats; i++)
	{
		flats[i].initApartment();
	}
}
void House::showFlats()
{
	for (int i = 0; i < num_flats; i++)
	{
		flats[i].showApartment();
	}
}
void House::showHouse()
{
	cout << "Adress: " << adress << endl;
	cout << "Kol_etaschej: " << kol_etaschej << endl;
	cout << "Kol_podjezdov: " << kol_podjezdov << endl;
	cout << "Num_flats: " << num_flats << endl;
}
House& House::operator=(const House& other)
{
	if (this == &other)
	{
		return *this;
	}
	deleteHouse();
	setAdress(other.adress);
	setKol_etaschej(other.kol_etaschej);
	setKol_podjezdov(other.kol_podjezdov);
	setNum_flats(other.num_flats);
	return *this;
}
void House::initHouse()
{
	adress = nullptr;
	kol_etaschej = 0;
	kol_podjezdov = 0;
	num_flats = 0;
	flats = nullptr;
}
void House::deleteHouse()
{
	delete[] adress;
	delete[] flats;
}