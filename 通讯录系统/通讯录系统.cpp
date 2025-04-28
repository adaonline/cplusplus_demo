#include<iostream>
#include"person.h"
#include"addressBook.h"
using namespace std;
#define FILE_NAME "addressBook.txt"

void showMenu() {
	cout << "***************************" << endl;
	cout << "*****  1、添加联系人  *****" << endl;
	cout << "*****  2、显示联系人  *****" << endl;
	cout << "*****  3、删除联系人  *****" << endl;
	cout << "*****  4、查找联系人  *****" << endl;
	cout << "*****  5、修改联系人  *****" << endl;
	cout << "*****  6、清空联系人  *****" << endl;
	cout << "*****  7、保存到文件  *****" << endl;
	cout << "*****  8、从文件加载  *****" << endl;
	cout << "*****  0、退出通讯录  *****" << endl;
	cout << "***************************" << endl;
}
bool validateInput(int& select) {
	if (cin.fail()) {
		cin.clear();
		cin.ignore(1024, '\n');
		return false;
	}
	return true;
}

int main() {
	int select = 0;
	AddressBook abs;
	while (true) {
		showMenu();
		cout << "请输入您的选择：";
		cin >> select;	
		if (!validateInput(select)) {
			cout << "输入错误，请输入数字" << endl;
			continue;
		}
		switch (select) {
			case 1:
				addPersonToAbs(&abs);
				break;
			case 2:
				showAbsPerson(&abs);
				break;
			case 3:
				deletePerson(&abs);
				break;
			case 4:
				searchPerson(&abs);
				break;
			case 5:
				modifyPerson(&abs);
				break;
			case 6:
				cleanAbs(&abs);
				break;
			case 7:
				saveToTextFile(&abs, FILE_NAME);
				break;
			case 8:
				loadFromTextFile(&abs, FILE_NAME);
				break;
			case 0:
				cout << "欢迎下次使用" << endl;
				return 0;
				break;
			default:
				cout << "输入错误，请重新输入" << endl;
		}
	}
	return 0;
}