#include"addressBook.h"
#include <fstream>
#include <vector>
void addPersonToAbs(AddressBook* abs) {
	if (abs->size >= MAX_CONTACTS) {
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	Person person = addPerson();
	abs->personArray[abs->size] = person;
	abs->size++;
	system("cls");
	cout << "添加成功" << endl;
}

void showAbsPerson(const AddressBook* abs) {
	if (abs->size == 0) {
		cout << "通讯录为空" << endl;
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
	cout << "请输入要删除的联系人姓名：";
	string name;
	cin >> name;
	int index = isExist(abs, name);
	if (index == -1) {
		cout << "通讯录中不存在该联系人" << endl;
		return;
	}
	for (int i = index; i < abs->size - 1; i++) {
		abs->personArray[i] = abs->personArray[i + 1];
	}
	abs->size--;
	cout << "删除成功" << endl;
}

void searchPerson(const AddressBook* abs) {
	cout << "请输入要查找的联系人姓名：";
	string name;
	cin >> name;
	int index = isExist(abs, name);
	if (index == -1) {
		cout << "通讯录中不存在该联系人" << endl;
		return;
	}
	showPerson(abs->personArray[index]);
}

void modifyPerson(AddressBook* abs) {
	cout << "请输入要修改的联系人姓名：";
	string name;
	cin >> name;
	int index = isExist(abs, name);
	if (index == -1) {
		cout << "通讯录中不存在该联系人" << endl;
		return;
	}
	Person person = abs->personArray[index];
	person = changePerson(person);
	abs->personArray[index] = person;
	cout << "修改成功" << endl;
}

void cleanAbs(AddressBook* abs) {
	for (int i = 0; i < abs->size; ++i) {
		memset(&(abs->personArray[i]), 0, sizeof(Person));
	}
	abs->size = 0;
	cout << "清空成功" << endl;
}

void saveToTextFile(const AddressBook* abs, const string& filename) {
	ofstream outFile(filename);
	if (!outFile) {
		cerr << "打开文件失败" << endl;
		return;
	}
	//第一行写联系人总数
	outFile << abs->size << endl;
	//每个联系人一行，用特定分割符分开
	for (int i = 0; i < abs->size; ++i) {
		outFile << abs->personArray[i].name 
			<< "|" << abs->personArray[i].age 
			<< "|" << abs->personArray[i].sex 
			<< "|" << abs->personArray[i].phone 
			<< "|" << abs->personArray[i].address << endl;
	}
	outFile.close();
	cout << "保存文件成功" << endl;
}
//这里的abs需要可修改
void loadFromTextFile(AddressBook* abs, const string& filename) {
	ifstream inFile(filename);
	if (!inFile) {
		cerr << "打开文件失败" << endl;
		return;
	}
	inFile >> abs->size;
	inFile.ignore();
	//读取每行联系人信息
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
	cout << "加载文件成功" << endl;
}
