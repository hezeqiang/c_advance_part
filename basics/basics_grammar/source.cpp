#include <iostream>
#include <string>
#include <limits>

using namespace std;

// variable define
#define LENGTH 10 

//type def 
typedef int feet;
feet distance;//equals to int distance


//function declarrations, which is def later.
int func(void);//int since the output is the int type.
void vape(void);

enum color { red, green, blue = 5, black };

// variable  declarations
extern int a, b;//the extern variable can be utilized out of the program.
extern char c;
extern float f;


// above shoulb be put in the  .h file


/*this is annotation
even you change a row, ti still remain as annotation.
*/

int main()//main() begin
{
	//variable define
	int a = 5, b;
	char c;
	float f;
	color col;
	col=blue;
	//output
	cout << "\"Hello\t\nWorld!\"\n" << endl ;
	//output the word and then change a row
	// it should be remanded that the /n/t can be used in "".
	cout << red << endl;
	//invoking function
	b = func();
	cout << b << endl;
	
	vape();

	cout << col <<endl;
	return 0;
}


//function defination
int func(void)
{
	return true;//0 is the result of the output of function.
				//there is no input and only one output.
				//return can be any type like int,char,etc. 
}

void vape(void)
{
	short int i;
	short unsigned int j;

	j = 10000;
	i = j;

	cout << i << " " << j<<"\n";

}