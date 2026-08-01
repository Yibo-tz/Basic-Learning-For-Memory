#include<iostream>
int main() {
	//实现数组元素逆置

	//1、创建数组
	int arr[5] = { 1,3,2,5,4 };
	std::cout << "数组逆置前：" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << std::endl;
	}
	//2、实现逆置
	
	//2.1、记录起始下标位置；
	int start = 0;//起始下标

	// 2.2、记录结束下标位置；
	int end = sizeof(arr) / sizeof(arr[0]) - 1;//结束下标

	// 2.4、起始位置++，结束位置--
	while (start < end) {
		// 2.3、起始下标与结束下标互换
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;//交换了元素
		//下标更新
		start++;
		end--;
		// 2.5、循环执行2.1，直到起始位置已经>=结束位置
	}

	//3、打印逆置后的数组
	std::cout << "数组逆置后：" << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << arr[i] << std::endl;
	}
	system("pause");
	return 0;
}