#include <fstream>
#include <iostream>
using namespace std;

int main()
{

	char data[100];

	// ��дģʽ���ļ�
	ofstream outfile;
	outfile.open("C:\\Users\\HeZeqiang\\Desktopa\file.dat");

	cout << "Writing to the file" << endl;
	cout << "Enter your name: ";
	cin.getline(data, 100);

	// ���ļ�д���û����������
	outfile << data << endl;

	cout << "Enter your age: ";
	cin >> data;
	cin.ignore();

	// �ٴ����ļ�д���û����������
	outfile << data << endl;

	// �رմ򿪵��ļ�
	outfile.close();

	// �Զ�ģʽ���ļ�
	ifstream infile;
	infile.open("afile.dat");

	cout << "Reading from the file" << endl;
	infile >> data;

	// ����Ļ��д������
	cout << data << endl;

	// �ٴδ��ļ���ȡ���ݣ�����ʾ��
	infile >> data;
	cout << data << endl;

	// �رմ򿪵��ļ�
	infile.close();

	return 0;
}


/*
�������Ҫ��д��ģʽ���ļ�����ϣ���ض��ļ����Է��ļ��Ѵ��ڣ���ô������ʹ��������﷨��
ofstream outfile;
outfile.open("file.dat", ios::out | ios::trunc);

���Ƶأ��������Ҫ��һ���ļ����ڶ�д������ʹ��������﷨��
ifstream  afile;
afile.open("file.dat", ios::out | ios::in);

*/