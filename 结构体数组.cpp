#include<iostream>
#include<string>
//结构体数组
//作用：将自定义结构体放入到数组中方便维护
//语法：struct 结构体名 数组名[元素个数]={{},{},{},…{}};

	//1、定义结构体
struct Student {
	//姓名
	std::string name;
	//年龄
	int age;
	//分数
	int score;
};
int main() {
	//2、创建结构体数组
	struct Student stuArray[8] = {
		{"张三",18,100},
		{"李四",28,99},
		{"王五",38,66}
	};
	//3、给结构体数组中的元素赋值
	stuArray[2].name = "赵六";
	//4、遍历结构体数组
	//for遍历我就不多说了，图书馆要闭馆了，可恶
}