#include <stdio.h>

struct person
{
	char name[10];
	int age;
	union {
		int p100;
		char pABC;
	}score;
};

# define N 3

int main()
{
	struct person per[N],*p;
	int i;

	for (i=0; i<N; i++) {
		scanf("%s%d",per[i].name,&per[i].age);
		if (per[i].age <= 35)
			scanf("%d",&per[i].score.p100);
		else 
			scanf("%c%c",&per[i].score.pABC,&per[i].score.pABC);
	}

	printf("姓名  年龄  成绩\n");
	for (p = per; p<per+N; p++)
		if (p->age <= 35) {
			if (p->score.p100>=60)
				printf("%-10s%-4d%5d\n",p->name,p->age,p->score.p100);
		}
		else if (p->score.pABC != 'C') {
			printf("%-10s%-4d%5c\n",p->name,p->age,p->score.pABC);
		}

	return 0;
}
	
