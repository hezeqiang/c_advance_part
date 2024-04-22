#include <fstream>
#include <iostream>
using namespace std;

int main()
{

	char data[100];

	// 以写模式打开文件
	ofstream outfile;
	outfile.open("C:\\Users\\HeZeqiang\\Desktopa\file.dat");

	cout << "Writing to the file" << endl;
	cout << "Enter your name: ";
	cin.getline(data, 100);

	// 向文件写入用户输入的数据
	outfile << data << endl;

	cout << "Enter your age: ";
	cin >> data;
	cin.ignore();

	// 再次向文件写入用户输入的数据
	outfile << data << endl;

	// 关闭打开的文件
	outfile.close();

	// 以读模式打开文件
	ifstream infile;
	infile.open("afile.dat");

	cout << "Reading from the file" << endl;
	infile >> data;

	// 在屏幕上写入数据
	cout << data << endl;

	// 再次从文件读取数据，并显示它
	infile >> data;
	cout << data << endl;

	// 关闭打开的文件
	infile.close();

	return 0;
}


/*
如果您想要以写入模式打开文件，并希望截断文件，以防文件已存在，那么您可以使用下面的语法：
ofstream outfile;
outfile.open("file.dat", ios::out | ios::trunc);

类似地，您如果想要打开一个文件用于读写，可以使用下面的语法：
ifstream  afile;
afile.open("file.dat", ios::out | ios::in);

*/