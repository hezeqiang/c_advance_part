# include <stdio.h>
struct STU
{
	char name[20];
	int age;
	char sex;
	char num[20];
};
int main(void)
{
	struct STU stu[5] = { { "小红", 22, 'F', "Z1207031" },{ "小明", 21, 'M', "Z1207035" },{ "小七", 23, 'F', "Z1207022" } };
	struct STU *p = stu;
	//此时指针变量 p 就指向了结构体数组的第一个元素，即指向 stu[0]。
	//我们知道，当一个指针指向一个数组后，指针就可以通过移动的方式指向数组的其他元素。
	return 0;
}