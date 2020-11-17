/*编写主函数从键盘输入摄氏温度的值，调用上述函数输出摄氏及华氏温度的值（小数点后保留两位）。*/

#include <stdio.h>

float temp(float c)
{
	return 9.0/5.0*c+32;
}

int main()
{
	float f;
	scanf("%f",&f);

	printf("F=%.2f,C=%.2f\n",f,temp(f));

	return 0;
}

