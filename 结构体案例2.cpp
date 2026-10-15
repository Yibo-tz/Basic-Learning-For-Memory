#include<iostream>
#include<string>
struct hero {
	std::string name;
	int age;
	std::string gender;
};
void bubblesort(hero* arr, int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j].age > arr[j + 1].age) {
				hero temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] =temp;
			}
		}
	}
}
int main() {
	struct hero heroArray[5] = {
		{"刘备",23,"男"},
		{"关羽",22,"男"},
		{"张飞",20,"男"},
		{"赵云",21,"男"},
		{"貂蝉",19,"女"},
	};
	int len = sizeof(heroArray) / sizeof(heroArray[0]);
	bubblesort(heroArray,len);
	
	for (int i = 0; i < len; i++) {
		std::cout << "姓名：" << heroArray[i].name << "\t年龄：" << heroArray[i].age << "\t性别：" << heroArray[i].gender << std::endl;
	}
	system("pause");
	return 0;
}	