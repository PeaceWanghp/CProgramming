/*2. 任意输入三条边(a,b,c)，若能构成三角形计算其面积，判断是否为等腰、等边、直角或任意,否则输出“不能构成三角形”。*/

#include <stdio.h>
#include <math.h>

int main()
{
	float a,b,c,t,area;
	scanf("%f%f%f",&a,&b,&c);
	printf("a=%.2f,b=%.2f,c=%.2f\n",a,b,c);
	if (a+b>c && b+c>a && a+c>b) {
		t = (a+b+c)/2.0;
		area = sqrt(t*(t-a)*(t-b)*(t-c));
		printf("area=%.4f",area);
		
		if (a==b && b==c)
			printf("等边\n");
		else if (a==b || b==c || a==c)
			printf("等腰\n");
		else if (a*b + b*c == c*c || a*a + c*b == b*b || b*b + c*c == a*a)
			printf("直角\n");
		else 
			printf("任意\n");
	}
	else
		printf("不能构成三角形！\n");

	return 0;
}
