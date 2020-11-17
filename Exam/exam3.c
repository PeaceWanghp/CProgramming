/*3. 正序和反序打印英文字母*/

#include <stdio.h>

int main()
{
	char ch;

	for (ch='A'; ch <= 'Z'; ch++)
		printf("%c",ch);
	
	printf("\n");

	for (ch='Z'; ch >= 'A'; ch--)
		printf("%c",ch);

	printf("\n");	

	return 0;
}
