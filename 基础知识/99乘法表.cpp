#include<iostream>
using namespace std;

int main2() {

	for(int i = 1; i <= 9; i++) {
		for(int j = 1; j <= i; j++) {
			cout << j << "*" << i << "=" << i*j << " ";
		}
		cout << endl;
	}

	return 0;
}