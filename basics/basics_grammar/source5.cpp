#include <iostream>
using namespace std;

#include <iomanip>
using std::setw;//using the package of normalize the output chart form

int main()
{
	int n[10];//define a list of number;

	//initialize the list
	for (int i = 0; i < 10; i++)
	{
		n[i] = i + 100;
		
	}
	cout << "Element" << setw(13) << "Value" << endl;// the setw(13) is a special function
	
	for (int j = 0; j < 10; j++)
	{
		cout << setw(7) << j << setw(13) << n[j] << endl;
	}

	return 0;

}
