#include <iostream>
using namespace std;

void lamda(void);
int global_x;

int sum(int a, int b = 20)//  the function have a default paramater.
{
	int result;

	result = a + b;

	return (result);
}

int main()
{
	// 局部变量声明
	int a = 100;
	int b = 200;
	int result;

	// 调用函数来添加值
	result = sum(a, b);
	cout << "Total value is :" << result << endl;

	// 再次调用函数
	result = sum(a);
	cout << "Total value is :" << result << endl;

	return 0;
}

// anonymous function
void lamda(void)
{
	[](int x, int y) { return x < y; };// a special function definition ,return False or True.
	
	[](int x) {++x; };  // 没有return语句 -> lambda 函数的返回类型是'void'
	
	[]() { ++global_x; };// 没有参数,仅访问某个全局变量
	[] { ++global_x; };   // 与上一个相同,省略了()
	
	[](int x, int y) -> int { int z = x + y; return z; }// return z.
/*
[]      // 沒有定义任何变量。使用未定义变量会引发错误。
[x, &y] // x以传值方式传入（默认），y以引用方式传入。
[&]     // 任何被使用到的外部变量都隐式地以引用方式加以引用。
[=]     // 任何被使用到的外部变量都隐式地以传值方式加以引用。
[&, x]  // x显式地以传值方式加以引用。其余变量以引用方式加以引用。
[=, &z] // z显式地以引用方式加以引用。其余变量以传值方式加以引用。
*/



}