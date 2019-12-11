#include <iostream>
#include <string>

using namespace std;


template <typename T>// typename 与 class 作用一样，使得函数可以有多种输入的参数类型，int、dounle、char等
//T 是一个可以改变的 类 class

//inline是一个申明，用于较短的函数，不通过调用，而是在调用的位置直接替换，可以删掉不产生影响
inline T const& Max(T const& a, T const& b)//const 表示只能调用不能修改
	//这个函数返回一个T类的结果，与ab一致
{
	//T 的class会随着输入ab的类而 自动 改变
	return a < b ? b : a;
}
int main()
{

	int i = 39;
	int j = 20;
	cout << "Max(i, j): " << Max(i, j) << endl;

	double f1 = 13.5;
	double f2 = 20.7;
	cout << "Max(f1, f2): " << Max(f1, f2) << endl;

	string s1 = "Hello";
	string s2 = "World";
	cout << "Max(s1, s2): " << Max(s1, s2) << endl;

	return 0;
}