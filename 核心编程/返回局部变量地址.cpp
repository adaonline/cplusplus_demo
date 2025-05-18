#include<iostream>
using namespace std;
int* func()
{
	int a = 10;
	return &a;
}
void dummy() { int x = 100; }
int main2() {

	int* p = func();

	cout << *p << endl;
	dummy();
	cout << *p << endl;
	cout << *p << endl;
	system("pause");

	return 0;
}