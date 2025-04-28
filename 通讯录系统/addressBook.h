#pragma once
#include<iostream>
#include<string>
#include"person.h"
constexpr int MAX_CONTACTS = 1000;
//设计通讯录结构体
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

// 保存通讯录到文本文件
void saveToTextFile(const AddressBook* abs, const string& filename);

// 从文本文件加载通讯录 
void loadFromTextFile(AddressBook* abs, const string& filename);
