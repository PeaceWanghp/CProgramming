/*13. 对下列分段函数，输入x的值后，计算并输出y的值（保留两位小数）*/

#include <stdio.h>
#include <math.h>

int main()
{
	float x,y;
	scanf("%f",&x);

	if (x<=0)
		y = x*x+x+1;//平方
	else if (x<10)
		y = cos(x);//余弦
	else 
		y = sqrt(x)+1;//根号

	printf("x=%.2f, y=%.2f\n",x,y);

	return 0;
}
