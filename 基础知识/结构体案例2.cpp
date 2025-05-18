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
		cout << "ÐÕÃû£º" << arr[i].name << "ÄêÁä£º" << arr[i].age << "ÐÔ±ð£º" << arr[i].sex << endl;
	}
}

int main() {
	hero arr[5] = {
		{"Áõ±¸",23,"ÄÐ"},
		{"¹ØÓð",22,"ÄÐ"},
		{"ÕÅ·É",20,"ÄÐ"},
		{"ÕÔÔÆ",21,"ÄÐ"},
		{"õõ²õ",19,"Å®"},
	};
	int len = 5;
	bubleSort(arr, len);
	printHero(arr, len);
	return 0;

}