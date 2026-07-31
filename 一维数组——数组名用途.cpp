#include<iostream>
int main() {
	//差点看成一堆数组有没有懂的
	
	/*一维数组名称用途：
	1、可以统计整个数组在内存中的长度
	2、可以获取数组在内存中的首地址*/
	int arr[] = { 1,2,3,4,5 };
	std::cout <<"整个数组占用内存空间为："<< sizeof(arr) <<"字节"<< std::endl;
	std::cout <<"每个元素占用内存空间为："<< sizeof(arr[0]) <<"字节"<< std::endl;
	std::cout << "数组里面的元素个数为：" << sizeof(arr) / sizeof(arr[0]) << std::endl;
	
	//2、可以通过数组名查看数组首地址
	std::cout << "数组首地址为" <<(int) arr << std::endl;
	std::cout << "数组中第一个元素的地址为：" << (int)&arr[0] << std::endl;
	std::cout << "数组中第二个元素的地址为：" << (int)&arr[1] << std::endl;
	
	//★数组名是个常量，不可以进行赋值操作
	system("pause");
	return 0;
}