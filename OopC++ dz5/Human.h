#pragma once
#include "Header.h"
// ����������� ��������� ������������ ������

class Human
{
private:
	char* name;
	char* surname;
	char* patronymic;
	int age;
public:
	// ������������
	Human();
	Human(char* name, char* surname, char* patronymic, int age);
	Human(const Human& other); // ����������� �����������
	// ����������
	~Human();
	// �������
	void setName(char* name);
	void setSurname(char* surname);
	void setPatronymic(char* patronymic);
	void setAge(int age);
	// �������
	char* getName() const;
	char* getSurname() const;
	char* getPatronymic() const;
	int getAge() const;
	// ������
	void showHuman();
	// ���������� ���������� 
	Human& operator=(const Human& other); // �������� ������������
	// �������-�����
	void initHuman();
	void deleteHuman();
};