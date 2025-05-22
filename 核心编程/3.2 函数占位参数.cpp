#include <iostream>
using namespace std;
//函数占位参数 ，占位参数也可以有默认参数
void func2(int a, int) {
	cout << "this is func" << endl;
}
//在现阶段函数的占位参数存在意义不大，但是后面的课程中会用到该技术


int main8() {

	func2(10, 10); //占位参数必须填补

	system("pause");

	return 0;
}