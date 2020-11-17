#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

typedef struct Node{
	int data;
	struct Node *next;
}LNode;

void hash(int a[], int value,int len);
void hash_link(LNode nodes[],int value, int len);

int main()
{
	int c[MAXSIZE] = {4,8,20,19,44,55,34,12,17,89};

	//开发定地址法
	int a[MAXSIZE]={0,0,0,0,0,0,0,0,0,0};
	for(int i = 0; i < MAXSIZE; i ++) {
		hash(a,c[i],MAXSIZE);
	}		

	for(int i = 0; i < MAXSIZE; i++) {
		printf("%d  ",a[i]);
	}

	printf("\n---------------------------\n");
	//链地址法
	LNode nodes[MAXSIZE]={{},{},{},{},{},{},{},{},{},{}};
	printf("+++++++");
	for (int i = 0; i <MAXSIZE; i ++) {
		hash_link(nodes,c[i],MAXSIZE);
	}

	for(int i = 0; i < MAXSIZE; i ++) {
		LNode *lnode = &nodes[i];
		while(lnode && lnode->data > 0) {
			printf("-%d  ",lnode->data);
			lnode = lnode->next;
			if(lnode)
				printf("+");
		}
	}

	return 0;
}

void hash(int a[],int value,int len) 
{
	int index = value % len;//开放定址法/除法散列发
	//int index = (value*value) >> 28;//平方散列法
	printf("index = %d\n",index);
	while(a[index] > 0) {
		if(index >= len-1) {
			index = 0;
			continue;
		}
		index ++;
	}
	printf("--index = %d\n",index);
	a[index] = value;
}

void hash_link(LNode nodes[],int value, int len) 
{
	LNode *valueNode = malloc(sizeof(LNode));
	valueNode->data = value;

	int index = value % len;
	LNode *node = &nodes[index];
	if(node->data > 0){
		while(node->next){
			node = node->next;
		}
		node->next = valueNode;
		printf("index = %d +++\n",index);
	}
	else { 
		nodes[index] = *valueNode;	
		printf("index = %d\n",index);
	}
}

