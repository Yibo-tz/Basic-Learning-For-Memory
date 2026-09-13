#include<iostream>
#include<chrono>
#include<thread>
//无参无返函数
void test01() {
	std::cout << "这只是个空壳子函数，好的恭喜目前函数走进了死胡同\n";
}

//有参无返函数
void test02(int a){
	std::cout << "这是一个单向接收信息的过程，我只能听见你，但你听不见我，我听到你说的a=" << a <<"，但是我说了什么，你（主程序）听不到"<< std::endl;
}

//无参有返函数
int test03() {
	int a;
	int b;
	std::cout << "欸，你（主程序）啥也不给我啊，算了我和用户搓一个参数输出吧！\n屏幕前的你，请随便输入一个数字：";
	std::cin >> a;
	std::cout << "再输入一个数字：";
	std::cin >> b;
	std::cout << "好的，我来说吧，两个数字之和为" << a + b << "厉不厉……哎疼疼疼！……\n";
	return a + b;
}

//有参有反函数
int test04(int a) {
	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << "我是03的哥哥04，目前就由我来判断弟弟是否足够幸运能吃到冰淇淋\n";
	std::this_thread::sleep_for(std::chrono::seconds(2));
	std::cout << "用户输入了数字 " << a << "\n";
	std::this_thread::sleep_for(std::chrono::seconds(1));
	std::cout << "我的判断是，如果是偶数，那么弟弟吃得到冰淇淋，如果是奇数，那么就吃不到咯~\n正在判断中……\n";
	std::this_thread::sleep_for(std::chrono::seconds(3));
	int icecream=0;
	if (a % 2 == 1) {
		icecream = 0;
	}
	else {
		icecream = 1;
	}
	return icecream;
}


int main() {
	//无参无返的函数调用
	test01();

	//有参无返的函数调用
	int input0;
	std::cout << "请输入一个数："; 
	std::cin >> input0;
	test02(input0);
	std::this_thread::sleep_for(std::chrono::seconds(2));

	//无参有返函数的调用
	int heard = test03();
	std::cout << "我是主程序，抱歉，这个调皮的函数让你受烦扰了，我看看啊……\n";
	std::this_thread::sleep_for(std::chrono::seconds(6));
	std::cout << "那家伙给你把两个数相加了，还挺得瑟的啊~\n";
	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << "那两个数相加就是" <<heard<< "，别以为我听不到，我只是不说而已\n";

	//有参有返函数的调用
	std::this_thread::sleep_for(std::chrono::seconds(3));
	std::cout << "这样吧，你（那个调皮的函数的哥哥），帮我教训一下你弟弟\n";
	int input_user;
	std::cout << "屏幕前的用户，请随便输入一个数，他哥哥会用一种算法来算出弟弟今天吃不吃得到冰淇淋\n";
	std::cin >> input_user;
	int command = test04(input_user);
	if (command == 1) {
		std::cout << "哟！弟弟运气可以啊，能吃上冰淇淋了\n";
	}
	else if(command == 0){
		std::cout << "可惜了，吃不到咯~弟弟下次得吃一堑长一智啊，不要乱炫耀了~\n";
	}
	system("pause");
	return 0;
}