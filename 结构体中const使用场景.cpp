#include<iostream>
#include<string>
//const的使用场景
struct student {
	//姓名
	std::string name;
	//年龄
	int age;
	//分数
	int score;
};
//将函数中的形参改为指针，可以减少内存空间，而且不会复制新的副本出来
void printstudents(const struct student *s) {//锁住后满满的安全感
	std::cout << "姓名：" << s->name << "\t年龄：" << s->age << "\t成绩：" << s->score << std::endl;
}
int main() {
	student s= {"张三",15,70};
	printstudents(&s);
	system("pause");
	return 0;
} 