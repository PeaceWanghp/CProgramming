#include <stdio.h>

void intPointer(void);
void arrayPointer(void);

int main(int argc, char *argv[])
{
	intPointer();
	arrayPointer();
}

void intPointer(void) 
{
	
}

void arrayPointer(void) 
{
	//int array
	int ages[] = {23,43,55,33,3};
	int count = sizeof(ages)/sizeof(int);
	printf("sizeof(ages)=%lu,sizeof(int) = %lu\n",sizeof(ages),sizeof(int));

	for (int i=0; i<count; i++) {
		printf("%d\n",ages[i]);
	}

	//char array
	char *names[] = {"Alan","Frank","Mary","John","Lisa"};
	printf("sizeof(names) = %lu\n",sizeof(names));
}


