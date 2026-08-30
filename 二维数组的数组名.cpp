#include<iostream>
int main() {
	//二维数组的名称用途
	
	//1.查看二维数组所占内存空间
	int arr[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	std::cout << "二维数组占用的内存空间为：" << sizeof arr <<"字节"<< std::endl;
	
	//2.获取二维数组的首地址
	double arr1[2][3] = {
		{1,2,3},
		{4,5,6}
	};
	std::cout << "大伯版二维数组的占用空间为：" << sizeof(arr1) <<"字节"<< std::endl;
	std::cout << "大伯版二维数组中第一行占用内存为：" << sizeof(arr1[0]) <<"字节" << std::endl;
	std::cout << "二维数组第一个元素占用内存为：" << sizeof(arr[0][0]) <<"字节"<< std::endl;

	std::cout << "二维数组的行数为：" << sizeof(arr) / sizeof(arr[0])<<"\n";
	std::cout << "二维数组的列数为：" << sizeof(arr[0]) / sizeof(arr[0][0]) << std::endl;
	std::cout << "二维数组的第一行首地址为：" << (int)arr[0] << std::endl;
	std::cout << "二维数组的第二行首地址为：" << (int)&arr[1] << std::endl;

	std::cout << "二维数组第一个元素的首地址为：" << (int)&arr[0][0] << std::endl;
	system("pause");
	return 0;
}