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
	char name[20];  //姓名
	int num;  //学号
	struct AGE birthday;  /*用struct AGE结构体类型定义结构体变量birthday, 生日*/
	float score;  //分数
};
int main(void)
{
	struct STUDENT student1; /*用struct STUDENT结构体类型定义结构体变量student1*/
	struct STUDENT *p = NULL;  /*定义struct STUDENT结构体类型的指针变量p*/
	p = &student1;  /*p指向结构体变量student1的首地址, 即第一项的地址*/
	strcpy(p->name, "小明");
	//p->num 的含义是：指针变量 p 所指向的结构体变量中的 num 成员。p->num 最终代表的就是 num 这个成员中的内容。
	p->birthday.year = 1989;
	p->birthday.month = 3;
	p->birthday.day = 29;
	p->num = 1207041;
	p->score = 100;
	printf("name : %s\n", p->name);  //p->name不能写成p
	printf("birthday : %d-%d-%d\n", p->birthday.year, p->birthday.month, p->birthday.day);
	printf("num : %d\n", p->num);
	printf("score : %.1f\n", p->score);
	return 0;
}