#include <iostream>
using namespace std;

int main7()
{
    int a = 10;
    int* p;
    p = &a; // 取地址
    cout << "a的值为：" << &a << endl;
    cout << "a的地址为：" << p << endl;
    cout << "a的值为：" << *p << endl;

    cout << "修改a的值为20" << endl;
    *p = 20;
    cout << "a的值为：" << *p << endl;

    cout << sizeof(p) << endl; // 指针占用多少字节的内存
    cout << sizeof(char*) << endl; // 指针占用多少字节的内存
    cout << sizeof(float*) << endl; // 指针占用多少字节的内存
    cout << sizeof(double*) << endl; // 指针占用多少字节的内存

    int *d = nullptr; // 空指针，指向未分配的内存
    cout << d << endl; // 空指针访问会导致程序崩溃 内存编号

    //int* m = (int*)0x1100;
    //cout << *m << endl; // 指针访问未分配的内存会导致程序崩溃
    return 0;
}