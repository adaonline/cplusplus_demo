#include <iostream>
using namespace std;

int main7()
{
    int a = 10;
    int* p;
    p = &a; // ȡ��ַ
    cout << "a��ֵΪ��" << &a << endl;
    cout << "a�ĵ�ַΪ��" << p << endl;
    cout << "a��ֵΪ��" << *p << endl;

    cout << "�޸�a��ֵΪ20" << endl;
    *p = 20;
    cout << "a��ֵΪ��" << *p << endl;

    cout << sizeof(p) << endl; // ָ��ռ�ö����ֽڵ��ڴ�
    cout << sizeof(char*) << endl; // ָ��ռ�ö����ֽڵ��ڴ�
    cout << sizeof(float*) << endl; // ָ��ռ�ö����ֽڵ��ڴ�
    cout << sizeof(double*) << endl; // ָ��ռ�ö����ֽڵ��ڴ�

    int *d = nullptr; // ��ָ�룬ָ��δ������ڴ�
    cout << d << endl; // ��ָ����ʻᵼ�³������ �ڴ���

    //int* m = (int*)0x1100;
    //cout << *m << endl; // ָ�����δ������ڴ�ᵼ�³������
    return 0;
}