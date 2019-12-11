#include <iostream>
#include <string>

using namespace std;


template <typename T>// typename �� class ����һ����ʹ�ú��������ж�������Ĳ������ͣ�int��dounle��char��
//T ��һ�����Ըı�� �� class

//inline��һ�����������ڽ϶̵ĺ�������ͨ�����ã������ڵ��õ�λ��ֱ���滻������ɾ��������Ӱ��
inline T const& Max(T const& a, T const& b)//const ��ʾֻ�ܵ��ò����޸�
	//�����������һ��T��Ľ������abһ��
{
	//T ��class����������ab����� �Զ� �ı�
	return a < b ? b : a;
}
int main()
{

	int i = 39;
	int j = 20;
	cout << "Max(i, j): " << Max(i, j) << endl;

	double f1 = 13.5;
	double f2 = 20.7;
	cout << "Max(f1, f2): " << Max(f1, f2) << endl;

	string s1 = "Hello";
	string s2 = "World";
	cout << "Max(s1, s2): " << Max(s1, s2) << endl;

	return 0;
}