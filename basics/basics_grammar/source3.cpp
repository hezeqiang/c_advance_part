#include <iostream>
using namespace std;

void lamda(void);
int global_x;

int sum(int a, int b = 20)//  the function have a default paramater.
{
	int result;

	result = a + b;

	return (result);
}

int main()
{
	// �ֲ���������
	int a = 100;
	int b = 200;
	int result;

	// ���ú��������ֵ
	result = sum(a, b);
	cout << "Total value is :" << result << endl;

	// �ٴε��ú���
	result = sum(a);
	cout << "Total value is :" << result << endl;

	return 0;
}

// anonymous function
void lamda(void)
{
	[](int x, int y) { return x < y; };// a special function definition ,return False or True.
	
	[](int x) {++x; };  // û��return��� -> lambda �����ķ���������'void'
	
	[]() { ++global_x; };// û�в���,������ĳ��ȫ�ֱ���
	[] { ++global_x; };   // ����һ����ͬ,ʡ����()
	
	[](int x, int y) -> int { int z = x + y; return z; }// return z.
/*
[]      // �]�ж����κα�����ʹ��δ�����������������
[x, &y] // x�Դ�ֵ��ʽ���루Ĭ�ϣ���y�����÷�ʽ���롣
[&]     // �κα�ʹ�õ����ⲿ��������ʽ�������÷�ʽ�������á�
[=]     // �κα�ʹ�õ����ⲿ��������ʽ���Դ�ֵ��ʽ�������á�
[&, x]  // x��ʽ���Դ�ֵ��ʽ�������á�������������÷�ʽ�������á�
[=, &z] // z��ʽ�������÷�ʽ�������á���������Դ�ֵ��ʽ�������á�
*/



}