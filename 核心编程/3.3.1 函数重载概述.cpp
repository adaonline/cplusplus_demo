#include <iostream>
using namespace std;

/*

���ã�**������������ͬ����߸�����
**������������������**

* ͬһ����������
* ����������ͬ
* ��������**���Ͳ�ͬ**  ���� **������ͬ** ���� **˳��ͬ**
*/

//����������Ҫ��������ͬһ����������
void func1()
{
	cout << "func �ĵ��ã�" << endl;
}
void func1(int a)
{
	cout << "func (int a) �ĵ��ã�" << endl;
}
void func1(double a)
{
	cout << "func (double a)�ĵ��ã�" << endl;
}
void func1(int a, double b)
{
	cout << "func (int a ,double b) �ĵ��ã�" << endl;
}
void func1(double a, int b)
{
	cout << "func (double a ,int b)�ĵ��ã�" << endl;
}
//��������ֵ��������Ϊ������������
//int func(double a, int b)
//{
//	cout << "func (double a ,int b)�ĵ��ã�" << endl;
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