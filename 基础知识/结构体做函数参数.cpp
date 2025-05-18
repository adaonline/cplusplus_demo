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
////值传递不会修改主函数数据
//void printStudent(struct student stu) {
//	stu.age = 28;
//	cout << "子函数中， 姓名：" << stu.name <<"年龄："<<stu.age <<"分数："<< stu.score << endl;
//}
////地址传递会修改主函数数据
//void printStudent2(struct student *stu) {
//	stu->age = 28;
//	cout << "子函数中， 姓名：" << stu->name << "年龄：" << stu->age << "分数：" << stu->score << endl;
//}
//
//
//
//int main() {
//	student stu = {"李四", 20, 100};
//	printStudent(stu);
//	cout << "主函数中， 姓名：" << stu.name << "年龄：" << stu.age << "分数：" << stu.score << endl;
//
//	printStudent2(&stu);
//	cout << "主函数中， 姓名：" << stu.name << "年龄：" << stu.age << "分数：" << stu.score << endl;
//	
//
//	return 0;
//}