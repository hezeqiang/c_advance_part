#include <iostream>
#include <string>
using namespace std;

int main()
{
	char greeting[6] = { 'H','e','l','l','o','\0' };//actually all the strings will end with '\0'
	
	cout << "Greeting message:";
	cout << greeting << endl;
/*
1	strcpy(s1, s2);   �����ַ��� s2 ���ַ��� s1��
2	strcat(s1, s2);   �����ַ��� s2 ���ַ��� s1 ��ĩβ��
3	strlen(s1);       �����ַ��� s1 �ĳ��ȡ�
4	strcmp(s1, s2);   ��� s1 �� s2 ����ͬ�ģ��򷵻� 0����� s1<s2 �򷵻�ֵС�� 0����� s1>s2 �򷵻�ֵ���� 0��
5	strchr(s1, ch);   ����һ��ָ�룬ָ���ַ��� s1 ���ַ� ch �ĵ�һ�γ��ֵ�λ�á�
6	strstr(s1, s2);   ����һ��ָ�룬ָ���ַ��� s1 ���ַ��� s2 �ĵ�һ�γ��ֵ�λ�á�

just like python function
*/

	char str1[11] = "Hello";
	char str2[11] = "World";
	char str3[11];
	int len;

	//copy str1 to str3
	strcpy_s(str3, str1);
	cout << str3 << endl;

	//connect str1 with str2
	strcat_s(str1, str2);
	cout << str1 << endl;

	//get the length of bonded strings
	len = strlen(str1);

//utilize the <stirng> package
	string str4 = "Hello";
	string str5 = "World";
	string str6;

	str6 = str4;

	str6 = str4 + str5;

	len = str6.size();

	return 0;
}