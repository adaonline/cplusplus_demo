#include <iostream>
using namespace std;

int func(int a = 10, int b = 10, int c = 10) {
	return a + b + c;
}
//1. ���ĳ��λ�ò�����Ĭ��ֵ����ô�����λ�����󣬴������ң����붼Ҫ��Ĭ��ֵ
//2. �������������Ĭ��ֵ������ʵ�ֵ�ʱ��Ͳ�����Ĭ�ϲ���
int func2(int a = 10, int b = 10);
int func2(int a, int b) {
	return a + b;
}

int main7() {
	cout << func() << endl;
	cout << func(10, 20) << endl;
	cout << func(10, 20, 30) << endl;
	return 0;
}