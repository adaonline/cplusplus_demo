#include "person.h"

Person addPerson() {
	Person person;
	string name;
	cout << "请输入姓名：";
	cin >> name;
	person.name = name;
	cout << "请输入年龄：";
	cin >> person.age;
	cout << "请输入性别(1-男，2-女)：";
	int sex;
	while (true)
	{
		cin >> sex;
		if (sex != 1 && sex != 2) {
			cout << "输入错误，请重新输入" << endl;
			continue;
		}
		person.sex = sex;
		break;
	}

	cout << "请输入电话：";
	cin >> person.phone;
	cout << "请输入地址：";
	cin >> person.address;
	return person;
}

void showPerson(const Person& person) {
	cout << "姓名：" << person.name << "\t";
	cout << "年龄：" << person.age << "\t";
	cout << "性别：" << (person.sex == 1 ? "男" : "女") << "\t";
	cout << "电话：" << person.phone << "\t";
	cout << "地址：" << person.address << endl;
}

Person changePerson(Person& person) {
	cout << "请输入姓名：";
	string name;
	cin >> name;
	person.name = name;
	cout << "请输入年龄：";
	cin >> person.age;
	cout << "请输入性别(1-男，2-女)：";
	int sex;
	while (true)
	{
		cin >> sex;
		if (sex != 1 && sex != 2) {
			cout << "输入错误，请重新输入" << endl;
			continue;
		}
		person.sex = sex;
		break;
	}
	cout << "请输入电话：";
	cin >> person.phone;
	cout << "请输入地址：";
	cin >> person.address;
	return person;
}
