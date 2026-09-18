#include<iostream>
#include<string>
//定义学生结构体
struct student {
	std::string name;
	int age;
	int score;
};
//定义老师结构体
struct teacher {
	int id;//教师编号
	std::string name;//姓名
	int age;//年龄
	struct student stu;//带的学生
};
int main() {
	//创建老师和学生
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;
	std::cout << "老师姓名：" << t.name << "\t老师编号：" << t.age << "\t老师辅导的学生姓名：" << t.stu.name << "\t学生年龄：" << t.stu.age << "\t学生考试分数为：" << t.stu.score << std::endl;
}