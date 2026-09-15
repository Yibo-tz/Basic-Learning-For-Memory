//实现两个数字进行交换的函数
#include<iostream>
#include"exchange.h"
//函数的定义
void exchange(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
	//std::cout << "a=" << a << std::endl;
	//std::cout << "b=" << b << std::endl;
}