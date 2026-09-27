#include<iostream>
#include<string>
//定义“学生”结构体
struct student {
	std::string name;
	int age;
	int score;
};
//打印学生信息的函数
	//1、值传递
void printStudent1(struct student s) {
	std::cout << "子函数1中\t姓名：" << s.name << "\t年龄：" << s.age << "\t分数：" << s.score << std::endl;
}
//2、地址传递
void printStudent2(struct student* p){
	std::cout << "子函数2中\t姓名：" << p->name << "\t年龄：" << p->age << "\t分数：" << p->score << std::endl;
}
int main() {
	//将结构体作为参数象函数中传递
	// 创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;
	std::cout << "main函数中打印\t姓名：" << s.name << "\t年龄：" <<s.age<< "\t分数：" << s.score << std::endl;
	printStudent1(s);
	printStudent2(&s);
	system("pause");
	return 0;
}