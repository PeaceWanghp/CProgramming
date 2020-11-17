/*16.选择排序（升序）注意会识别降序*/

#include <stdio.h>

#define N 10

int main()
{
	int i,j,t,a[N];
	for (i=0; i<N; i++)
		scanf("%d",&a[i]);

	for (i=0; i<N-1; i++)
		for (j=i+1; j<N; j++)
			if (a[i]<a[j]) {
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}

	for (i=0; i<N; i++)
		printf("%5d",a[i]);
	printf("\n");

	return 0;
}
