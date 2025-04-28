#include<iostream>
#include"person.h"
#include"addressBook.h"
using namespace std;
#define FILE_NAME "addressBook.txt"

void showMenu() {
	cout << "***************************" << endl;
	cout << "*****  1�������ϵ��  *****" << endl;
	cout << "*****  2����ʾ��ϵ��  *****" << endl;
	cout << "*****  3��ɾ����ϵ��  *****" << endl;
	cout << "*****  4��������ϵ��  *****" << endl;
	cout << "*****  5���޸���ϵ��  *****" << endl;
	cout << "*****  6�������ϵ��  *****" << endl;
	cout << "*****  7�����浽�ļ�  *****" << endl;
	cout << "*****  8�����ļ�����  *****" << endl;
	cout << "*****  0���˳�ͨѶ¼  *****" << endl;
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
		cout << "����������ѡ��";
		cin >> select;	
		if (!validateInput(select)) {
			cout << "�����������������" << endl;
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
				cout << "��ӭ�´�ʹ��" << endl;
				return 0;
				break;
			default:
				cout << "�����������������" << endl;
		}
	}
	return 0;
}