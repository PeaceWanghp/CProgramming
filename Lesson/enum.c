#include <stdio.h>

enum color {
	red,
	yellow,
	blue,
	white,
	black
};

void ball(enum color pri)
{
	switch(pri)
	{
		case red:	 	printf("%-10s","红"); return;
		case yellow:	printf("%-10s","黄"); return;
		case blue: 		printf("%-10s","蓝"); return;
		case white: 	printf("%-10s","白"); return;
		case black:		printf("%-10s","黑"); return;
	}
}

int main()
{
	int n = 0;
	enum color i,j,k;
	for (i=red; i<=black; i++) {
		for (j=red; j<=black; j++) {
			if (i!=j)
				for (k=red; k<=black; k++)
					if (k != i && k!=j) {
						printf("%-4d",++n);
						ball(i);
						ball(j);
						ball(k);
						printf("\n");
					}
		}
	}

	printf("\nTotal = %5d\n",n);

	return 0;
}
