#include <iostream> 
using namespace std;


class Shape
{
protected:
	int width, height;
public:
	//construction function
	Shape(int a, int b)
	{
		width = a;
		height = b;
	}
	// in  order to avoid the distort ,it is nonated as virtual function
	virtual int area()
	{
		cout << "the area of the parent class is " << endl;
		return (width *height);
	}
};

class Triangle :public Shape
{
public:
	Triangle(int a = 0, int b = 0) :Shape(a, b) {}
	//same name funciton as the parent class
	int area()
	{
		cout << "the Triangle area is " << endl;
		return (width *height);
	}
};


class Rectangle : public Shape {
public:
	Rectangle(int a = 0, int b = 0) :Shape(a, b) { }
	int area()
	{
		cout << "Rectangle class area :" << endl;
		return (width * height);
	}
};

int main()
{
	Shape *shape1;
	Rectangle rec(10, 7);
	Triangle tri(10, 5);

	shape1 = &rec;
	//invoke the pointed class function
	//by the -> pointer
	shape1->area();
	//instead of the 
	//shape1.area(), without output

	shape1 = &tri;
	shape1->area();

	return 0;

}