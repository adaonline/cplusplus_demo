//#include <iostream>
//#include <string>
//using namespace std;
///*
//学校正在做毕设项目，每名老师带领5个学生，总共有3名老师，需求如下
//设计学生和老师的结构体，其中在老师的结构体中，有老师姓名和一个存放5名学生的数组作为成员
//学生的成员有姓名、考试分数，创建数组存放3名老师，通过函数给每个老师及所带的学生赋值
//最终打印出老师数据以及老师所带的学生数据。
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
////分配数据
//void allocateStudent(teacher t[], int len) {
//	string name = "教师";
//	string sname = "学生";
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
//		cout << "老师姓名：" << t[i].name << endl;
//		for (int j = 0; j < 5; j++) {
//			cout << "学生姓名：" << t[i].stu[j].name << "分数：" << t[i].stu[j].score << endl;
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