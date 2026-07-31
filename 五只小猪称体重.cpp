#include<iostream>
int main() {
	//五只小猪称体重

	//1、创建五只小猪的体重
	int pigs[5] = { 0,0,0,0,0 };
	std::cout << "欢迎来到 澄闪TM 牌猪猪体重比较程序\n由于该项目标题的限制，故支持且只支持5只猪猪的体重比较，敬请谅解" << std::endl;
	for (; pigs[0] <= 0 || pigs[1] <= 0 || pigs[2] <= 0 ||pigs[3] <= 0 || pigs[4] <= 0;) {
		for (int i = 0; i < 5; i++) {
			std::cout << "\n请输入第 " << i+1 << " 只猪猪的体重（kg）：" << std::endl;
			std::cin >> pigs[i];
		}
		if (pigs[0] <= 0 || pigs[1] <= 0 || pigs[2] <= 0 || pigs[3] <= 0 || pigs[4] <= 0) {
			std::cout << "输入数据不符合实际，请重新输入！\n" << std::endl;
			continue;
		}
		else {
			std::cout << "\n请确认您输入的数据：" << std::endl;
			for (int i = 0; i < 5; i++) {
				std::cout <<"第 "<<i+1<<" 只猪猪的体重为"<< pigs[i]<<"\t千克；" << std::endl;
			}
			//确认程序
			std::cout << "\n输入y确认结果，输入其它任意按键以重新输入：" << std::endl;
			std::string review = "none";
			std::cin >> review;
			if (review == "y") {
			}
			else {
				for (int i = 0; i < 5; i++) {
					pigs[i] = 0;
				}
				continue;
			}
		}
	}
	
	//2、从数组中找出一个最大值
	int max = 0;//认定一个最大值为0
	int i = 0;
	for (; i < 5; i++) {
		//如果访问的数组元素比我认定的最大值还要大，更新最大值
		if (pigs[i] > max) {
			max = pigs[i];
		}
	}
	std::cout << "五只小猪中，体重最大的小猪体重为 "<<max<<" 千克" << std::endl;
	system("pause");
	return 0;
}