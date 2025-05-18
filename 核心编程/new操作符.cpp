#include<iostream>
using namespace std;
int* func1()
{	
	//指针本质也是局部变量，存在栈区，指针保存的数据在堆
	int* a = new int(10);
	return a;
}

int main() {

	int* p = func1();

	cout << *p << endl;
	cout << *p << endl;

	//利用delete释放堆区数据
	delete p;

	cout << *p << endl; //报错，释放的空间不可访问

	system("pause");

	return 0;
}