#include <iostream>

using namespace std;

class Box
{
public:
	// 构造函数定义
	Box(double l = 2.0, double b = 2.0, double h = 2.0)
	{
		cout << "Constructor called." << endl;
		length = l;
		breadth = b;
		height = h;
	}
	double Volume()
	{
		return length * breadth * height;
	}
private:
	double length;     // Length of a box
	double breadth;    // Breadth of a box
	double height;     // Height of a box
};


int main()
{
	Box Box1(3.3, 1.2, 1.5);
	Box Box2(8.5, 6.0, 2.0);
	Box *ptrBox;    
	// Declare pointer to a class.
	//every class can have a pointer

	//pointer define
	ptrBox = &Box1;
	//call the property of the oriented object
	cout << "The volume of the box is " << ptrBox->Volume() << endl;

	ptrBox = &Box2;
	cout << "The volume of the box is " << ptrBox->Volume() << endl;

	return 0;
}