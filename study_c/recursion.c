#include <stdio.h>

int plus(int a, int b) 
{
	int count = 0;
	
	if(a<=b){
		count = a + plus(a+1,b);
	}

	return count;
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("\n%d\n",plus(a,b));

	return 0;
}

