/*9. 分别用一维和二维数组输出杨辉三角形*/

#include <stdio.h>

#define N 10

void triangle1()
{
	int i,j,yh[N];
	for (i=0; i<N; i++) {
		yh[i] = 1;
		for (j=i-1; j>0; j--) 
			yh[j] += yh[j-1];
		for (j=1; j<=15-i; j++)
			printf("  ");
		for (j=0; j<=i; j++)
			printf("%4d",yh[j]);
		printf("\n");
	}
}

void triangle2()
{
	int i,j,yh[N][N];
	for (i=0; i<N; i++) {
		yh[i][0] = yh[i][i] = 1;
		for (j=1; j<i; j++)
			yh[i][j] = yh[i-1][j-1] + yh[i-1][j];
	}

	for (i=0; i<N; i++) {
		for (j=1; j<=15-i; j++)
			printf("  ");
		for (j=0; j<=i; j++)
			printf("%4d",yh[i][j]);
		printf("\n");
	}

	printf("\n");
}

int main()
{
	triangle1();
	printf("\n\n");
	triangle2();

	return 0;
}
