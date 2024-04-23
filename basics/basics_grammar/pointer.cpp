#include <iostream>
using namespace std;






#include <iostream>
using namespace std;

/*

Pointer:

* get vaule
& get address

for the list of dictionary, tulpe, the declear of the variables is always a pointer
which is pointed to the first element of element

include 

double variable[];
int variable[];
---- not include the char and string
char variable[];      x
string variable[];    x

Ex.1

#include <iostream>
using namespace std;
int main ()
{
   char site[7] = {'R', 'U', 'N', 'O', 'O', 'B', '\0'};
   int k[7] = {1, 2, 3};
   
   cout << site << endl;
   cout <<  k <<"  \t"<< k[1] << endl;
   return 0;
}

it returns:
RUNOOB
0x61fdf0        2


*/


int main()
{
	int var1;
	char var2[10];

	cout << "the momery adress of var1 is " ;
	cout << &var1 << endl;

	cout << "the momery adress of var2 is ";
	cout << &var2 << endl;

/*
int    *ip;    一个整型的指针 
double *dp;    一个 double 型的指针
float  *fp;    一个浮点型的指针
char   *ch;    一个字符型的指针
*/

	int var = 20;
	int *ip;

	ip = &var;//set the ip as a pointer of variable of var;
	//ip equals the adress ; *ip is the value of the variable

	cout << "Value of the var variable is ";
	cout << var << endl;

	cout << "Value of the *p variable is ";
	cout << *ip << endl;//the value of the pointer,
	cout << ip << endl;//th momery adress of the ip

	return 0;

}


/*
// invoker  and poniter

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
*/