/*4. 输入一串字符（换行作为结束）统计元音字母（a,A;e,E;i,I;o,O;u,U）各自出现的次数  */

#include <stdio.h>

int main()
{
	char ch;
	int a = 0, e = 0, i = 0, o = 0, u = 0;

	printf("输入一串字符，换行作为结束：");
	
	while((ch = getchar()) != '\n')
		switch(ch) {
			case 'a':
			case 'A': a++; printf("a++"); break;
			case 'e':
			case 'E': e++; printf("e++"); break;
			case 'i': 
			case 'I': i++; printf("i++"); break;
			case 'o': 
			case 'O': o++; printf("o++"); break;
			case 'u': 
			case 'U': u++; printf("u++"); break;
		}
	printf("a,A = %d\ne,E = %d\ni,I = %d\no,O = %d\nu,U = %d\n",a,e,i,o,u);

	return 0;
}
