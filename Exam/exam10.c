/*10. 输出字符串  */

#include <stdio.h>

int main()
{
	char www[] = "World\0Wide\0Web";
	printf("%s,%s,%s\n",www,www+6,www+11);

	return 0;
}
