#include<iostream>
using namespace std;
int* func1()
{	
	//ָ�뱾��Ҳ�Ǿֲ�����������ջ����ָ�뱣��������ڶ�
	int* a = new int(10);
	return a;
}

int main() {

	int* p = func1();

	cout << *p << endl;
	cout << *p << endl;

	//����delete�ͷŶ�������
	delete p;

	cout << *p << endl; //�����ͷŵĿռ䲻�ɷ���

	system("pause");

	return 0;
}