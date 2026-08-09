//似乎是一个很神奇的东西
#include<iostream>;
int main() {
	int group[9] = { 4,2,8,0,5,7,1,3,9 };
	//利用冒泡排序实现升序排列
	std::cout << "排序前：" << std::endl;
	for (int i = 0; i < 9; i++) {
		std::cout << group[i] << " ";
	}
	std::cout << std::endl;

	//开始冒泡排序
	//总共排序轮数为 元素个数 - 1
	for (int i = 0; i < 9 - 1; i++){
		//内层循环对比  次数=元素个数-当前轮数-1
		for (int j = 0; j < 9 - 1; j++) {
			//如果第一个数字比第二个大，交换两个数字
			if (group[j] > group[j + 1]) {
				int temp = group[j];
				group[j] = group[j + 1];
				group[j + 1] = temp;
			}
		}
	}
	//排序后结果
	for (int i = 0; i < 9; i++) {
		std::cout << group[i] << " ";
	}
	std::cout << "\n";
	std::cout << "冒泡排序的思路确实好啊，大的数字就跟泡泡一样冒上来了，当然还可以做自定义输入，\n今天心情不好就不搞了，反正挺简单的，后面有时间在搞自定义输入吧，\n就一个cin和sizeof (group)/sizeof (group[1])的事情。\n";
	system("pause");
	return 0;
}