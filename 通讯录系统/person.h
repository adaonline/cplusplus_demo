#pragma once
#include<iostream>
#include<string>
using namespace std;

//�����ϵ�˽ṹ��
struct Person {
	string name;
	int age;
	int sex; //1��ʾ�У�2��ʾŮ
	string phone;
	string address;
};

Person addPerson();

void showPerson(const Person& p);
Person changePerson(Person& p);