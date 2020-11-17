/*14. ++,--的理解和使用*/

#include <stdio.h>

int main()
{
	int i=8,j=10,m,n;
	m = ++i;
	n = j++;

	printf("i=%d,j=%d,m=%d,n=%d\n",i,j,m,n);

	for (int w=0; w<5; w++)
		printf("w=%d",w);

	for (int m=0; m<5; ++m)
		printf("m=%d",m);

	return 0;
}
