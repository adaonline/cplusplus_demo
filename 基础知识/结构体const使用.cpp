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
////加了const防止成员变量被修改，但是可以修改成员变量指向的内容
//void printStudent(const student *stu)
//{
//	// stu.name = "张三"; // 不能修改
//	// stu.age = 18; // 不能修改
//	//stu.score = 99; // 可以修改
//	cout << "函数中， 姓名：" << stu->name << "年龄：" << stu->age << "分数：" << stu->score << endl;
//}
//
//
//
//int main() {
//	student stu = {"李四", 20, 100};
//	printStudent(&stu);
//	cout << "主函数中， 姓名：" << stu.name << "年龄：" << stu.age << "分数：" << stu.score << endl;
//
//	return 0;
//}