#include <iostream>

using namespace std;

//inline function is used to save time by great 
//large momery space
inline int Max(int a, int b)
{
	return(a > b) ? a : b;
}

int main()
{
	cout << "Max(10,20) is " << Max(10, 20) << endl;
	
	return 0;

}