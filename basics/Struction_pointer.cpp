# include <stdio.h>
# include <string.h>

struct AGE
{
	int year;
	int month;
	int day;
};
struct STUDENT
{
	char name[20];  //����
	int num;  //ѧ��
	struct AGE birthday;  /*��struct AGE�ṹ�����Ͷ���ṹ�����birthday, ����*/
	float score;  //����
};
int main(void)
{
	struct STUDENT student1; /*��struct STUDENT�ṹ�����Ͷ���ṹ�����student1*/
	struct STUDENT *p = NULL;  /*����struct STUDENT�ṹ�����͵�ָ�����p*/
	p = &student1;  /*pָ��ṹ�����student1���׵�ַ, ����һ��ĵ�ַ*/
	strcpy(p->name, "С��");
	//p->num �ĺ����ǣ�ָ����� p ��ָ��Ľṹ������е� num ��Ա��p->num ���մ���ľ��� num �����Ա�е����ݡ�
	p->birthday.year = 1989;
	p->birthday.month = 3;
	p->birthday.day = 29;
	p->num = 1207041;
	p->score = 100;
	printf("name : %s\n", p->name);  //p->name����д��p
	printf("birthday : %d-%d-%d\n", p->birthday.year, p->birthday.month, p->birthday.day);
	printf("num : %d\n", p->num);
	printf("score : %.1f\n", p->score);
	return 0;
}