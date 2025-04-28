#include"addressBook.h"
#include <fstream>
#include <vector>
void addPersonToAbs(AddressBook* abs) {
	if (abs->size >= MAX_CONTACTS) {
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	Person person = addPerson();
	abs->personArray[abs->size] = person;
	abs->size++;
	system("cls");
	cout << "��ӳɹ�" << endl;
}

void showAbsPerson(const AddressBook* abs) {
	if (abs->size == 0) {
		cout << "ͨѶ¼Ϊ��" << endl;
		return;
	}
	for (int i = 0; i < abs->size; i++) {
		showPerson(abs->personArray[i]);
	}
}

int isExist(const AddressBook* abs, const string& name) {
	for (int i = 0; i < abs->size; i++) {
		if (abs->personArray[i].name == name) {
			return i;
		}
	}
	return -1;
}

void deletePerson(AddressBook* abs) {
	cout << "������Ҫɾ������ϵ��������";
	string name;
	cin >> name;
	int index = isExist(abs, name);
	if (index == -1) {
		cout << "ͨѶ¼�в����ڸ���ϵ��" << endl;
		return;
	}
	for (int i = index; i < abs->size - 1; i++) {
		abs->personArray[i] = abs->personArray[i + 1];
	}
	abs->size--;
	cout << "ɾ���ɹ�" << endl;
}

void searchPerson(const AddressBook* abs) {
	cout << "������Ҫ���ҵ���ϵ��������";
	string name;
	cin >> name;
	int index = isExist(abs, name);
	if (index == -1) {
		cout << "ͨѶ¼�в����ڸ���ϵ��" << endl;
		return;
	}
	showPerson(abs->personArray[index]);
}

void modifyPerson(AddressBook* abs) {
	cout << "������Ҫ�޸ĵ���ϵ��������";
	string name;
	cin >> name;
	int index = isExist(abs, name);
	if (index == -1) {
		cout << "ͨѶ¼�в����ڸ���ϵ��" << endl;
		return;
	}
	Person person = abs->personArray[index];
	person = changePerson(person);
	abs->personArray[index] = person;
	cout << "�޸ĳɹ�" << endl;
}

void cleanAbs(AddressBook* abs) {
	for (int i = 0; i < abs->size; ++i) {
		memset(&(abs->personArray[i]), 0, sizeof(Person));
	}
	abs->size = 0;
	cout << "��ճɹ�" << endl;
}

void saveToTextFile(const AddressBook* abs, const string& filename) {
	ofstream outFile(filename);
	if (!outFile) {
		cerr << "���ļ�ʧ��" << endl;
		return;
	}
	//��һ��д��ϵ������
	outFile << abs->size << endl;
	//ÿ����ϵ��һ�У����ض��ָ���ֿ�
	for (int i = 0; i < abs->size; ++i) {
		outFile << abs->personArray[i].name 
			<< "|" << abs->personArray[i].age 
			<< "|" << abs->personArray[i].sex 
			<< "|" << abs->personArray[i].phone 
			<< "|" << abs->personArray[i].address << endl;
	}
	outFile.close();
	cout << "�����ļ��ɹ�" << endl;
}
//�����abs��Ҫ���޸�
void loadFromTextFile(AddressBook* abs, const string& filename) {
	ifstream inFile(filename);
	if (!inFile) {
		cerr << "���ļ�ʧ��" << endl;
		return;
	}
	inFile >> abs->size;
	inFile.ignore();
	//��ȡÿ����ϵ����Ϣ
	for (int i = 0; i < abs->size; ++i) {
		string line;

		getline(inFile, line);
		
		int pos1 = line.find('|');
		int pos2 = line.find('|',pos1+1);
		int pos3 = line.find('|', pos2 + 1);
		int pos4 = line.find('|', pos3 + 1);
		Person person;
		person.name = line.substr(0, pos1);
		person.age = stoi(line.substr(pos1+1, pos2-pos1-1));
		person.sex = stoi(line.substr(pos2+1, pos3 - pos2 - 1));
		person.phone = line.substr(pos3 + 1, pos4 - pos3 - 1);
		person.address = line.substr(pos4 + 1);
		abs->personArray[i] = person;
	}
	inFile.close();
	cout << "�����ļ��ɹ�" << endl;
}
