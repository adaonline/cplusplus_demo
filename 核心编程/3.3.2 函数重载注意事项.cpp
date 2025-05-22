#include <iostream>
using namespace std;


//函数重载注意事项
//1、引用作为重载条件

void func_ref(int& a)
{
	cout << "func (int &a) 调用 " << endl;
}

void func_ref(const int& a)
{
	cout << "func (const int &a) 调用 " << endl;
}

//2、函数重载碰到函数默认参数

void func_ref2(int a, int b = 10)
{
	cout << "func2(int a, int b = 10) 调用" << endl;
}

void func_ref2(int a)
{
	cout << "func2(int a) 调用" << endl;
}


int main() {

	int a = 10;
	func_ref(a); //调用无const
	func_ref(10);//调用有const


	//func_ref2(10); //碰到默认参数产生歧义，需要避免

	system("pause");

	return 0;
}