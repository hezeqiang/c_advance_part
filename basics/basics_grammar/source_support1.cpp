#include <iostream>
using namespace std;

extern int count1;

// ��������
void func(void)
{
	static int i = 5; // �ֲ���̬����,һ����ֵ�󣬸�ֵ��䲻��ִ��
	i++;
	cout << "���� i Ϊ " << i;
	cout << " , ���� count Ϊ " << count1 << endl;
}

// g++ source.cpp source_support1.cpp -o source_combined