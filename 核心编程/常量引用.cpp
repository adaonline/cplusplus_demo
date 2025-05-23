#include <iostream>
using namespace std;

void showValue(const int& v) {
	//v = 1000; //常量引用，不能修改值
	cout << "v = " << v << endl;
}

int main6() {
	//int& ref = 10;  引用本身需要一个合法的内存空间，因此这行错误
	//加入const就可以了，编译器优化代码，int temp = 10; const int& ref = temp
	const int& ref = 10;
	//ref = 100;  //加入const后不可以修改变量
	cout << "ref = " << ref << endl;

	//函数中利用常量引用防止误操作修改实参
	int a = 10;
	showValue(a);

	system("pause");
	return 0;
}