
#include <iostream>

using namespace std;

class Line
{
public:
	void setLenght(double len);
	double getLength(void);
	Line(double len);//this is a construction
	~Line(void);  

private:
	double length;

};


Line::Line(double len)
{
	cout << "Object is being created ,length=" << len << endl;
	length = len;
}

//equals to the defination below
//Line::Line( double len): length(len)
//{
//	cout << "Object is being created, length = " << len << endl;
//}

Line::~Line(void)
{
	cout << "Object is being deleted" << endl;
	//will implemented at the end;
}

double Line::getLength(void)
{
	return length;
}

void Line::setLenght(double len)
{
	length = len;
}

int main()
{
	Line line(10.0);//initialize a object with a construction
	//if without a construction function, it also be OK

	cout << "the initial length is " << line.getLength() << endl;
	//change the length 
	line.setLenght(30.0);
	cout << "the changed length is " << line.getLength() << endl;

	return 0;
}