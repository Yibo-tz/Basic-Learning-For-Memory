#include<iostream>
//值传递
//定义函数，实现两个数字进行交换函数
//如果函数不需要返回值，声明时可以写void
void swap(int num1, int num2,int&a,int&b) {
	std::cout << "交换前：" << std::endl;
	std::cout << "num1=" << num1 << std::endl;
	std::cout << "num2=" << num2 << std::endl;

	int temp = num1;
	num1 = num2;
	num2 = temp;
	//return;//甚至你可以不写这一行
	std::cout << "交换后：" << std::endl;
	std::cout << "num1=" << num1 << std::endl;
	std::cout << "num2=" << num2 << std::endl;
	a = num1;
	b = num2;
}
int main() {
	int a = 10;
	int b = 20;
	swap(a, b,a,b);//前面函数定义好了后是不是可以这么认为后面交换两个数字就很容易了
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	//当我们做值传递的时候，函数的形参发生改变，并不会影响实参
	system("pause");
	return 0;
}//当然我后面魔改了一下，现在可以修改实参了