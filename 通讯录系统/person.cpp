#include "person.h"

Person addPerson() {
	Person person;
	string name;
	cout << "������������";
	cin >> name;
	person.name = name;
	cout << "���������䣺";
	cin >> person.age;
	cout << "�������Ա�(1-�У�2-Ů)��";
	int sex;
	while (true)
	{
		cin >> sex;
		if (sex != 1 && sex != 2) {
			cout << "�����������������" << endl;
			continue;
		}
		person.sex = sex;
		break;
	}

	cout << "������绰��";
	cin >> person.phone;
	cout << "�������ַ��";
	cin >> person.address;
	return person;
}

void showPerson(const Person& person) {
	cout << "������" << person.name << "\t";
	cout << "���䣺" << person.age << "\t";
	cout << "�Ա�" << (person.sex == 1 ? "��" : "Ů") << "\t";
	cout << "�绰��" << person.phone << "\t";
	cout << "��ַ��" << person.address << endl;
}

Person changePerson(Person& person) {
	cout << "������������";
	string name;
	cin >> name;
	person.name = name;
	cout << "���������䣺";
	cin >> person.age;
	cout << "�������Ա�(1-�У�2-Ů)��";
	int sex;
	while (true)
	{
		cin >> sex;
		if (sex != 1 && sex != 2) {
			cout << "�����������������" << endl;
			continue;
		}
		person.sex = sex;
		break;
	}
	cout << "������绰��";
	cin >> person.phone;
	cout << "�������ַ��";
	cin >> person.address;
	return person;
}
