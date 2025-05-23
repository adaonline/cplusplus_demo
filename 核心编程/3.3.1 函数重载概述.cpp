#include <iostream>
using namespace std;

/*

作用：**函数名可以相同，提高复用性
**函数重载满足条件：**

* 同一个作用域下
* 函数名称相同
* 函数参数**类型不同**  或者 **个数不同** 或者 **顺序不同**
*/

//函数重载需要函数都在同一个作用域下
void func1()
{
	cout << "func 的调用！" << endl;
}
void func1(int a)
{
	cout << "func (int a) 的调用！" << endl;
}
void func1(double a)
{
	cout << "func (double a)的调用！" << endl;
}
void func1(int a, double b)
{
	cout << "func (int a ,double b) 的调用！" << endl;
}
void func1(double a, int b)
{
	cout << "func (double a ,int b)的调用！" << endl;
}
//函数返回值不可以作为函数重载条件
//int func(double a, int b)
//{
//	cout << "func (double a ,int b)的调用！" << endl;
//}


int main9() {

	func1();
	func1(10);
	func1(3.14);
	func1(10, 3.14);
	func1(3.14, 10);

	system("pause");

	return 0;
}