#include<iostream>
#include<string>
//定义学生的结构体
struct Student {
	std::string name;
	int age;
	int score;
};
int main(){
	//1、创建学生的结构体变量
	struct Student s1 { "张三", 18, 100 };
	//2、通过指针指向结构体变量
	struct Student * p = &s1;
	//3、通过指针访问结构体变量中的数据
	std::cout << "姓名：" << p->name << "\t年龄：" << p->age << "\t分数：" << p->score << std::endl;
	//通过结构体指针访问结构体中的属性，需要利用“->”
	system("pause");
	return 0;
}