#include<iostream>
#include<string>
using namespace std;

int main4() {
	
	int scores[3][3] = {
		{100,100,100},
		{20,20,20},
		{30,30,30}
	};
	string names[3] = {"����","����","����"};
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum += scores[i][j];
		}
		cout << names[i] << "ͬѧ���ܳɼ��ǣ�"<<sum <<endl;
	}

	return 0;
}