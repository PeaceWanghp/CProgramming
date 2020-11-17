/*5. 将一个三位数输入后反向输出（如123，输出为321）*/

#include <stdio.h>

int main()
{
	int num, down, a, b, c;
	printf("输入一个三位数(100-999):");
	scanf("%d",&num);
	
	a = num%10;		//个位
	b = num/10%10; 	//十位
	c = num/100; 	//百位
	down = 100*a + 10*b + c;	//三位数倒过来
	printf("%d-->%d\n",num,down);

	return 0;
}
