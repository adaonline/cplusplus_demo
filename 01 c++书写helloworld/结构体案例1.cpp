//#include <iostream>
//#include <string>
//using namespace std;
///*
//ѧУ������������Ŀ��ÿ����ʦ����5��ѧ�����ܹ���3����ʦ����������
//���ѧ������ʦ�Ľṹ�壬��������ʦ�Ľṹ���У�����ʦ������һ�����5��ѧ����������Ϊ��Ա
//ѧ���ĳ�Ա�����������Է���������������3����ʦ��ͨ��������ÿ����ʦ��������ѧ����ֵ
//���մ�ӡ����ʦ�����Լ���ʦ������ѧ�����ݡ�
//*/
//struct student
//{
//	string name;
//	int score;
//};
//
//struct teacher
//{
//	string name;
//	student stu[5];
//};
////��������
//void allocateStudent(teacher t[], int len) {
//	string name = "��ʦ";
//	string sname = "ѧ��";
//	string nameseed = "ABCDE";
//	for (int i = 0; i < len; i++) {
//		t[i].name = name + nameseed[i];
//		for (int j = 0; j < 5; j++) {
//			t[i].stu[j].name = sname + nameseed[j];
//			t[i].stu[j].score = rand() % 61 + 40;
//		}
//	}
//}
//void printTeacher(teacher t[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << "��ʦ������" << t[i].name << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "ѧ��������" << t[i].stu[j].name << "������" << t[i].stu[j].score << endl;
//		}
//	}
//}
//
//int main() {
//	teacher t[3];
//	allocateStudent(t, 3);
//	printTeacher(t, 3);
//
//}