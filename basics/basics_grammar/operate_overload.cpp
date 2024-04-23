#include <iostream>
using namespace std;

class  Box
{
public :
	double getVolume(void)
	{
		return length *breadth*height;
	}
	void setLength(double l)
	{
		length = l;
	}
	void setBreadth(double b)
	{
		breadth = b;
	}
	void setHeight(double h)
	{
		height = h;
	}

	//the operator overload of the + 2 input and return one
	Box operator+(const Box & b )
	{
		Box box;
		box.length = this->length + b.length;
		box.breadth = this->breadth + b.breadth;
		box.height = this->height + b.breadth;
		return box;
	}
	//only one input,objective is Box
	Box operator-(const Box)
	{
		Box box;
		box.length = -this->length;
		box.breadth = -this->breadth;
		box.height = -this->height;
		return box;
	}

private:
	double length;
	double breadth;
	double height;
};

int main()
{
	Box Box1;
	Box Box2;
	Box Box3;
	double volume;
	
	// Box1
	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(5.0);

	// Box2
	Box2.setLength(12.0);
	Box2.setBreadth(13.0);
	Box2.setHeight(10.0);

	volume = Box1.getVolume();
	cout << "the volume of the Box1 is " << volume << endl;

	Box3 = Box1 + Box2;
	volume = Box3.getVolume();
	cout << "the volume of the Box3 is " << volume << endl;


}

/*
下面是可重载的运算符列表：

双目算术运算符	+ (加)，-(减)，*(乘)，/(除)，% (取模)
关系运算符	==(等于)，!= (不等于)，< (小于)，> (大于>，<=(小于等于)，>=(大于等于)
赋值运算符	=, +=, -=, *=, /= , % = , &=, |=, ^=, <<=, >>=
*/

//and the following code is also available
/*
#include <iostream>
using namespace std;

class Box
{
	double length;      // 长度
	double breadth;     // 宽度
	double height;      // 高度
public:

	double getVolume(void)
	{
		return length * breadth * height;
	}
	void setLength(double len)
	{
		length = len;
	}

	void setBreadth(double bre)
	{
		breadth = bre;
	}

	void setHeight(double hei)
	{
		height = hei;
	}

	
	// 改写部分 2018.09.05
	// 重载 + 运算符，用于把两个 Box 对象相加
	// 因为其是全局函数，对应的参数个数为2。
	// 当重载的运算符函数是全局函数时，需要在类中将该函数声明为友员。
	
	friend Box operator+(const Box& a, const Box& b);

};

Box operator+(const Box& a, const Box& b)
{
	Box box;
	box.length = a.length + b.length;
	box.breadth = a.breadth + b.breadth;
	box.height = a.height + b.height;
	// cout << box.length << "--" << box.breadth << "--" << box.height << endl; 
	return box;
}

// 程序的主函数
int main()
{
	Box Box1;                // 声明 Box1，类型为 Box
	Box Box2;                // 声明 Box2，类型为 Box
	Box Box3;                // 声明 Box3，类型为 Box
	double volume = 0.0;     // 把体积存储在该变量中

							 // Box1 详述
	Box1.setLength(6.0);
	Box1.setBreadth(7.0);
	Box1.setHeight(5.0);

	// Box2 详述
	Box2.setLength(12.0);
	Box2.setBreadth(13.0);
	Box2.setHeight(10.0);

	// Box1 的体积
	volume = Box1.getVolume();
	cout << "Volume of Box1 : " << volume << endl;

	// Box2 的体积
	volume = Box2.getVolume();
	cout << "Volume of Box2 : " << volume << endl;

	// 把两个对象相加，得到 Box3
	Box3 = Box1 + Box2;

	// Box3 的体积
	volume = Box3.getVolume();
	cout << "Volume of Box3 : " << volume << endl;

	return 0;
}

*/