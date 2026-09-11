#include<iostream>
//定义一个加法函数
int add(int num1, int num2) {//函数定义的时候，num1和num2并没有真实的数据，只是一个形式上的参数，简称形参
	int sum = num1 + num2;
	return sum;//返回值，这下总真正理解了
}
int main() {
	//main函数中调用add函数
	int a = 10;
	int b = 20;
	//函数调用语法：函数名称（参数）
	//a和b称为“实际参数”，简称实参
	//调用函数的值时，实参的值会传递给形参
	int c = add(a, b);//计算函数（懂了，y=f（x），代码更短了~~）
	std::cout << c<<"\n";
	a = 100;
	b = 500;
	c = add(a, b);
	std::cout << c << "\n";
	system("pause");
	return 0;
}