#include <iostream>
using namespace std;

void showValue(const int& v) {
	//v = 1000; //�������ã������޸�ֵ
	cout << "v = " << v << endl;
}

int main6() {
	//int& ref = 10;  ���ñ�����Ҫһ���Ϸ����ڴ�ռ䣬������д���
	//����const�Ϳ����ˣ��������Ż����룬int temp = 10; const int& ref = temp
	const int& ref = 10;
	//ref = 100;  //����const�󲻿����޸ı���
	cout << "ref = " << ref << endl;

	//���������ó������÷�ֹ������޸�ʵ��
	int a = 10;
	showValue(a);

	system("pause");
	return 0;
}