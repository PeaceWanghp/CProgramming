/*17. 值传递和地址传递*/

#include <stdio.h>

void swap1(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
}

void swap2(int *x, int *y)
{
	int t;
	t = *x;
	*x = *y;
	*y = t;
}

#define PR printf("a=%d, b=%d\n",a,b);

int main()
{
	int a=10,b=20;
	PR
	swap1(a,b); 
	PR
	swap2(&a,&b);
	PR

	return 0;
}
