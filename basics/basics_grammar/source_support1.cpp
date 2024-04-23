#include <iostream>
using namespace std;

extern int count1;

// 函数定义
void func(void)
{
	static int i = 5; // 局部静态变量,一旦赋值后，赋值语句不再执行
	i++;
	cout << "变量 i 为 " << i;
	cout << " , 变量 count 为 " << count1 << endl;
}

// g++ source.cpp source_support1.cpp -o source_combined