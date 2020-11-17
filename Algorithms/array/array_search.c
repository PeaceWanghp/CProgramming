#include <stdio.h>
#include <stdlib.h>

void eachSearch();
void halfSearch();
void indexSearch();

int main()
{
	eachSearch();
	
	halfSearch();

	indexSearch();	

	return 0;
}

void eachSearch()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int key = rand()%10;
	printf("key = %d",key);
	for(int i=0; i<10; i++){
		if(key == a[i])
			printf("search index = %d\n",i);
	}
}

void halfSearch()
{
	const int len = 10;
	int a[len] = {0,1,2,3,4,5,6,7,8,9};
	int left = 0,right = len-1;
	
	int x;
	scanf("%d",&x);
	printf("serach %d\n",x);

	while(left <= right){
		int mid = (left+right)/2;
		if(x == a[mid]){
			printf("'%d' index = %d\n",x,mid);
			return;
		}

		if(x > a[mid]){
			left = mid+1;
		}
		else {
			right = mid-1;
		}
	}
}

void indexSearch()
{
	int a[100] = {100,110,111,120,0,0,0,0,0,0,
				  200,201,203,204,0,0,0,0,0,0,
				  301,304,307,310,0,0,0,0,0,0};
	
}

