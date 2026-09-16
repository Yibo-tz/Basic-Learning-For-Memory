#include<iostream>
#include<string>
//结构体：属于用户自定义的数据类型，允许用户存储不同的数据类型
/*结构体的定义和使用：
语法：struct 结构体名{结构体成员列表};
1、struct 结构体名 变量名
2、struct 结构体名 变量名 ={成员1值，成员2值……}
3、定义结构体时顺便创建变量*/


//创建一个学生的数据类型：学生包括（姓名，年龄，分数）
//自定义的数据类型，一些类型集合组成了一个类型

struct student {
	//成员列表
	//姓名
	std::string name;
	//年龄
	int age = 0;
	//考试分数
	int score = 0;
}s3;//写这里基本上很难看到，为了代码的可读性建议不要选这个方法
//2、通过学生类型创建具体学生
int main() {
	//struct的关键字可以省略，但是定义时不可以省略（或许仅限C++？） 
	struct student s1;
	//给s1属性赋值，通过.访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	std::cout << "姓名：" << s1.name << "\t年龄：" << s1.age << "\t分数：" << s1.score << std::endl;
	
	//struct student s2={……}
	struct student s2 = { "李四",19,80 };
	std::cout << "姓名：" << s2.name << "\t年龄：" << s2.age << "\t分数：" << s2.score << std::endl;

	//在定义结构体时顺便创建结构体变量
	s3.name = "王五";
	s3.age = 20;
	s3.score = 60;
	std::cout << "姓名：" << s3.name << "\t年龄：" << s3.age << "\t分数：" << s3.score << std::endl;
}