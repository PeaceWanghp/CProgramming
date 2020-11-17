/*18. 有一个磁盘文件，第一次将它的内容显示在屏幕上，
第二次把它复制到另一文件上。*/

#include <stdio.h>

int main()
{
	FILE *fp1,*fp2;
	fp1 = fopen("file1.c","r");
	fp2 = fopen("file2.c","w");
	while((!feof(fp1)))
		putchar(fgetc(fp1));

	rewind(fp1);

	while(!feof(fp1))
		fputc(fgetc(fp1),fp2);
	
	fclose(fp1);
	fclose(fp2);

	return 0;
}
