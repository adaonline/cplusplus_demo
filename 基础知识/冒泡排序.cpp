#include<iostream>
using namespace std;

int main3() {
	int arr[9] = { 4,2,5,8,0,1,3,9,6 };
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8-i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < 9; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}