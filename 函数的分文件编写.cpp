//来了来了！
#include<iostream>
//函数的分文件编写
#include"exchange.h"
int main() {
	int a = 10;
	int b = 20;
	exchange(a, b);
	system("pause");
	return 0;
}
//1、创建,h后缀名的头文件
//2、创建.cpp后缀名的源文件
//3、在头文件中写函数的声明
//4、在源文件中写函数的定义