#include <stdio.h>

#define FORMAT "学号:%d，姓名:%s，性别:%c，分数:%.1f,生日:%d-%d-%d\n"

struct student
{
	int num;
	char name[10];
	char sex;
	float score;
	struct date
	{
		int year,month,day;
	} birthday;
}stu1 = {10,"Tom",'M',78.5,{1995,4,23}};

typedef struct teacher
{
	char name[10];
	int num;
}Teacher;

int main()
{
	printf(FORMAT,stu1.num,stu1.name,stu1.sex,stu1.score,stu1.birthday.year,stu1.birthday.month,stu1.birthday.day);

	struct student stu2 = {10,"Tom",'M',95.5,{194,5,5}};
	printf(FORMAT,stu2.num,stu2.name,stu2.sex,stu2.score,stu2.birthday.year,stu2.birthday.month,stu2.birthday.day);

	int count;
	Teacher tch[3] = {{"Han",3},{"Liu",7},{"Tony",8}};
	for (int i=0; i<3; i++) {
		count += tch[i].num;
	}
	printf("count = %d\n",count);

	return 0;
}
