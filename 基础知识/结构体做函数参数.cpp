//#include <iostream>
//#include <string>
//using namespace std;
//
//struct student
//{
//	string name;
//	int age;
//	int score;
//};
////ֵ���ݲ����޸�����������
//void printStudent(struct student stu) {
//	stu.age = 28;
//	cout << "�Ӻ����У� ������" << stu.name <<"���䣺"<<stu.age <<"������"<< stu.score << endl;
//}
////��ַ���ݻ��޸�����������
//void printStudent2(struct student *stu) {
//	stu->age = 28;
//	cout << "�Ӻ����У� ������" << stu->name << "���䣺" << stu->age << "������" << stu->score << endl;
//}
//
//
//
//int main() {
//	student stu = {"����", 20, 100};
//	printStudent(stu);
//	cout << "�������У� ������" << stu.name << "���䣺" << stu.age << "������" << stu.score << endl;
//
//	printStudent2(&stu);
//	cout << "�������У� ������" << stu.name << "���䣺" << stu.age << "������" << stu.score << endl;
//	
//
//	return 0;
//}