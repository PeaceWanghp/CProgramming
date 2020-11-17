#include <stdio.h>

#define FORMAT "学号:%d,姓名:%s,性别:%c,年龄:%d,成绩:%.1f\n"

typedef struct student
{
	int num;
	char name[10];
	char sex;
	int age;
	float score;
}ST;

ST stu1 = {10,"Tom",'M',20,95.5}, stu2 = {20,"Mary",'W',23,88.0};

int main()
{
	ST *p = &stu1,*q = &stu2;

	printf("Tom:\n");
	printf(FORMAT,stu1.num,stu1.name,stu1.sex,stu1.age,stu1.score);
	printf(FORMAT,(*p).num,(*p).name,(*p).sex,(*p).age,(*p).score);
	printf(FORMAT,p->num,p->name,p->sex,p->age,p->score);
	//printf(FORMAT,*p.num,*p.name,*p.sex,*p.age,*p.score);
	//printf(FORMAT,p.num,p.name,p.sex,p.age,p.score);

	printf("Mary:\n");
	printf(FORMAT,stu2.num,stu2.name,stu2.sex,stu2.age,stu2.score);
    printf(FORMAT,(*q).num,(*q).name,(*q).sex,(*q).age,(*q).score);
    printf(FORMAT,q->num,q->name,q->sex,q->age,q->score);
    //printf(FORMAT,*q.num,*q.name,*q.sex,*q.age,*q.score);
    //printf(FORMAT,q.num,q.name,q.sex,q.age,q.score);

	return 0;
}
