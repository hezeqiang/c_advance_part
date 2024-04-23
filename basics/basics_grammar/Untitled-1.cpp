#include <iostream>
 
using namespace std;
 

int main()
{
	int i;
	double d;


	//define variables of invoker (not pointer)
	int& r = i;
	double& s = d;


	i = 5;
	d = 6;
	cout << "Value of i :" << i << endl;
	cout << "Value of i referance :" << r << endl;

	d = 11.7;
	cout << "Value of d" << d << endl;
	cout << "Value of d referance :" << s << endl;
	

	return 0;

}