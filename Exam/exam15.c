/*5. 输入学生的成绩后，输出其字母等级*/

#include <stdio.h>

int main()
{
	float score;
	scanf("%f",&score);
	printf("score=%.1f",score);

	switch((int)(score/10))
	{
		case 10:
		case 9: printf("A\n"); break;
		case 8: printf("B\n"); break;
		case 7: printf("C\n"); break;
		case 6: printf("D\n"); break;
		default: printf("E\n");
	}

	return 0;
}
