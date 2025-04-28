#pragma once
#include<iostream>
#include<string>
using namespace std;

//设计联系人结构体
struct Person {
	string name;
	int age;
	int sex; //1表示男，2表示女
	string phone;
	string address;
};

Person addPerson();

void showPerson(const Person& p);
Person changePerson(Person& p);