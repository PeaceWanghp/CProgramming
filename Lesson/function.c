#include <stdio.h>

int main()
{
	int a;
	for (int i=0; i<5; i++) {
		printf("%d%%2=%d,",i,i%2);
		printf("%d%%3=%d\n",i,i%3);
	}
	
	return 0;
}
