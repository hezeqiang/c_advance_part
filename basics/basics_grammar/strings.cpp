#include <iostream>
#include <string>
using namespace std;

int main()
{
	char greeting[6] = { 'H','e','l','l','o','\0' };//actually all the strings will end with '\0'
	
	cout << "Greeting message:";
	cout << greeting << endl;
/*
1	strcpy(s1, s2);   复制字符串 s2 到字符串 s1。
2	strcat(s1, s2);   连接字符串 s2 到字符串 s1 的末尾。
3	strlen(s1);       返回字符串 s1 的长度。
4	strcmp(s1, s2);   如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回值小于 0；如果 s1>s2 则返回值大于 0。
5	strchr(s1, ch);   返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
6	strstr(s1, s2);   返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。

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