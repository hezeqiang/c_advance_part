#include <iostream>
#include<assert.h>

using namespace std;

class Box
{
public:
	double length;
	double breadth;
	double height;

	//function define out class
	void setlength(double len);
	void setbreadth(double bre);
	void setheigth(double hei);
	//give the object the charact, no return
	double getnum(void);

	//function define in class, have a return
	double getVolume() 
	{
		return length*breadth*height;
	}
	void setnum(double numset)
	{
		num = numset;
	}

private:
	double num;

};


//the private variables can be get by public function
double Box::getnum(void)
{
	return num;
}

void Box::setlength(double len)//function outside class
{
	length = len;
}

void Box::setbreadth(double bre)//function outside class
{
	breadth = bre;
}

void Box::setheigth(double hei)//function outside class
{
	height = hei;
}

//main function
int main()
{
	Box myBox;

	double volume = 0.0;

	//Box1.height = 5.0;
	//Box1.length = 6.0;
	//Box1.breadth = 7.0;
	myBox.setlength(5.0);
	myBox.setbreadth(6.0);
	myBox.setheigth(7.0);

	volume = myBox.height*myBox.length*myBox.breadth;
	cout << volume << endl;
	myBox.getVolume();
	myBox.setnum(20.0);
	cout << "the num of the myBox is " << myBox.getnum() << endl;
	//the num cannot be getten by using myBox.num
	//since it is a private variable

}