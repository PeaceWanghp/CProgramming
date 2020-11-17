/*19. 输入实数x，按下列公式计算并输出x和y的值（小数点后保留3位）*/

#include <stdio.h>
#include <math.h>

int main()
{
	float x,y;
	scanf("%f",&x);

	if(x<=10)
		y = sin(x);//正弦
	else if (x<-10) 
		y = sqrt(x*x+1);//根号
	else 
		y = exp(x);//方

	printf("x=%.2f, y=%.2f\n",x,y);

	return 0;
}
