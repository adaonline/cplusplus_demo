#include <iostream>
#include <string>
using namespace std;
struct hero {
	string name;
	int age;
	string sex;
};
void bubleSort(hero arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j].age > arr[j + 1].age) {
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void printHero(hero arr[], int len) {
	for (int i = 0; i < len; i++) {
		cout << "������" << arr[i].name << "���䣺" << arr[i].age << "�Ա�" << arr[i].sex << endl;
	}
}

int main() {
	hero arr[5] = {
		{"����",23,"��"},
		{"����",22,"��"},
		{"�ŷ�",20,"��"},
		{"����",21,"��"},
		{"����",19,"Ů"},
	};
	int len = 5;
	bubleSort(arr, len);
	printHero(arr, len);
	return 0;

}