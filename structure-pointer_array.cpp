# include <stdio.h>
struct STU
{
	char name[20];
	int age;
	char sex;
	char num[20];
};
int main(void)
{
	struct STU stu[5] = { { "С��", 22, 'F', "Z1207031" },{ "С��", 21, 'M', "Z1207035" },{ "С��", 23, 'F', "Z1207022" } };
	struct STU *p = stu;
	//��ʱָ����� p ��ָ���˽ṹ������ĵ�һ��Ԫ�أ���ָ�� stu[0]��
	//����֪������һ��ָ��ָ��һ�������ָ��Ϳ���ͨ���ƶ��ķ�ʽָ�����������Ԫ�ء�
	return 0;
}