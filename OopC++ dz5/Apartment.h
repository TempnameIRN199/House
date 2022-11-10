#pragma once
#include "Header.h"
// ����� "��������" ������ ��������� ����� �ᒺ��� ����� �������
// ����������� ��������� ������������ ������
class Apartment
{
private:
	int number;
	int square;
	int num_room;
	int num_people;
	Human* people = nullptr;
public:
	// ������������
	Apartment();
	Apartment(int number, int square, int num_room, int num_people);
	Apartment(const Apartment& other); // ����������� �����������
	// ����������
	~Apartment();
	// �������
	void setNumber(int number);
	void setSquare(int square);
	void setNum_room(int num_room);
	void setNum_people(int num_people);
	// �������
	int getNumber() const;
	int getSquare() const;
	int getNum_room() const;
	int getNum_people() const;
	// ������
	void addPeople();
	void showPeople();
	void showApartment();
	// ���������� ����������
	Apartment& operator=(const Apartment& other); // �������� ������������
	// �������-�����
	void initApartment(); // �������������
	void deleteApartment(); // ��������
};