#include <iostream>
using namespace std;

class Shape
{
public :
	void setwidth(int w)
	{
		width = w;
	}
	void setheight(int h)
	{
		height = h;
	}

protected:
	int width;
	int height;
};

class PaintCost
{
public:
	int getCost(int area)
	{
		return area * 70;
	}
};

//derivative class
class Rectangle :public Shape, public PaintCost
{
public:
	int getArea()
	{
		return  (width*height);
	}
};


int main(void)
{
	Rectangle Rect;
	int area;

	Rect.setheight(5);
	Rect.setwidth(7);
	area = Rect.getArea();


	//show the area of the object
	cout << "the area of the object is " << Rect.getArea() << endl;

	// show the total cost
	cout << "the total cost is " << Rect.getCost(area) << endl;

	return 0;

}