#pragma once
#include<iostream>
#include<string>
#include"person.h"
constexpr int MAX_CONTACTS = 1000;
//���ͨѶ¼�ṹ��
struct AddressBook {
	Person personArray[MAX_CONTACTS];
	int size = 0;
};

void addPersonToAbs(AddressBook* abs);
void showAbsPerson(const AddressBook* abs);
int isExist(const AddressBook* abs, const string& name);
void deletePerson(AddressBook* abs);
void searchPerson(const AddressBook* abs);
void modifyPerson(AddressBook* abs);
void cleanAbs(AddressBook* abs);

// ����ͨѶ¼���ı��ļ�
void saveToTextFile(const AddressBook* abs, const string& filename);

// ���ı��ļ�����ͨѶ¼ 
void loadFromTextFile(AddressBook* abs, const string& filename);
