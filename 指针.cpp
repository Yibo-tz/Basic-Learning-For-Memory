//噔！噔！咚！
#include<iostream>
#include"exchange.h"
#include"冒泡函数.h"
int main() {
	//1、定义指针
	int a = 10;
	//指针定义的语法：数据类型*指针变量名
	int * p;
	//让指针记录变量a的地址
	p = &a;

	//2、使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加*号代表解引用，找到指针指向的内存中的数据
	*p = 1000;
	std::cout << "a=" << a << std::endl;
	std::cout << "*p=" << *p << std::endl;

	//指针所占的内存空间
	std::cout << "sizeof(int*)=" << sizeof(p) << std::endl;
	
	
	//空指针和野指针
	/*指针变量指向内存中编号为0的空间
	用途：初始化指针变量
	注意：空指针指向的内存是不可以访问的*/

	//1、空指针用于给指针变量进行初始化
	int* pempty = NULL;

	//2、空指针是不可以进行访问的
	//*pempty = 100;//要是访问了直接炸了
	//0~255之间的内存编号是系统占用的，因此不可以访问

	//野指针:指针变量指向非法的内存空间
	// 	int * pwild = (int *)0x1100;
	//总之，空指针和野指针都是非法的，不要访问（那我学它是避雷的？）


	//const修饰指针
	/*一共有三种情况：
	1.const修饰指针——常量指针
	2.const修饰常量——指针常量
	3.const既修饰指针，又修饰常量（？？？我语文没学好？？？）*/
	//const int * p=&a;
	//常量指针的特点：指针的指向可以修改，但是指针指向的值不可以修改
	int ac = 10;
	int bc = 10;

	const int* pc = &ac;
	//指针指向的值不能改，指针的指向可以改
	// *pc=20，错误
	pc = &bc;//正确

	//指针常量的特点：指针的指向不可以改，指针指向的值可以改
	int* const pc2 = &ac;
	*pc2 = 100;//正确 
	//pc2 = &bc;错误
	//既修饰指针，又修饰常量：指针的指向和指针指向的值都不可以改
	//这能干啥？哦可以只读，那确实干不了什么

	//指针和数组：利用指针访问数组中的元素
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	std::cout << "第一个元素为：" << arr[0] << std::endl;
	int* psz = arr;//arr就是数组首地址
	std::cout << "利用指针访问第一个元素：" << *psz << std::endl;
	//psz++;//指针向后偏移四个字节
	//std::cout << "利用指针访问第二个元素：" << *psz << std::endl;

	std::cout << "利用指针遍历数组" << std::endl;
	for (int i = 0; i < 10; i++) {
		std::cout << *psz << std::endl;
		psz++;
	}



	//危————危————指针和函数————危

	//作用：利用指针作为函数参数，可以修改实参的值
	//值传递：见之前相关的cpp文件
	//地址传递：真神降临
	int ah = 10;
	int bh = 20;
	std::cout << "交换前" << ah << "和" << bh << std::endl;
	int* pah = &ah;
	int* pbh = &bh;

	exchange(pah, pbh);
	std::cout << "地址层面两个值在函数中交换后为" << ah << "和" << bh << std::endl;

	//指针，数组，函数
	//封装一个函数，利用冒泡排序，实现对整型数组的升序排序
	int arrnb[10] = { 4,3,6,9,1,2,10,8,7,5 };
	std::cout << "冒泡排序前的数组顺序：\n";

	//数组的长度
	int len = sizeof(arrnb) / sizeof(arrnb[0]);
	for (int i = 0; i < len; i++) {
		std::cout << arrnb[i];
	}

	 
	//创建函数，实现冒泡排序
	bubblesort(arrnb,len);
	//打印排序后的数组
	std::cout << "冒泡排序后的数组顺序：\n";
	for (int i = 0; i < len; i++) {
		std::cout << arrnb[i];
	}
	system("pause");
	return 0;
}