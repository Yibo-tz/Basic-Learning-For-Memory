#include<iostream>
//函数的声明↓
int max(int a, int b);
//声明可以写多次，但是定义只能有一次
//比较函数，实现两个整形数字的比较，并且返回较大的值

//定义
int max(int a, int b) {
	return a > b ? a : b;//我去，三目运算符！爷青回！
}