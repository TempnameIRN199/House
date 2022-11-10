#pragma once
#include "Header.h"
// ���� �ĳ� ������ ����� �ᒺ��� ����� ���������
// ����������� ��������� ������������ ������
class House
{
private:
    char* adress = nullptr;
    int kol_etaschej;
    int kol_podjezdov;
    int num_flats;
    Apartment* flats = nullptr;
public:
	// ������������
	House();
	House(char* adress, int kol_etaschej, int kol_podjezdov, int num_flats);
	House(const House& other);
	// ����������
	~House();
	// �������
	void setAdress(char* adress);
	void setKol_etaschej(int kol_etaschej);
	void setKol_podjezdov(int kol_podjezdov);
	void setNum_flats(int num_flats);
	// �������
	char* getAdress() const;
	int getKol_etaschej() const;
	int getKol_podjezdov() const;
	int getNum_flats() const;
	// ������
	void addFlats();
	void showFlats();
	void showHouse();
	// ���������� ����������
	House& operator=(const House& other); // �������� ������������
	// �������-�����
	void initHouse(); // �������������
	void deleteHouse(); // ��������
};