#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *next;
}LinkList;

void display(LinkList l);

int main()
{
	int n = 0;
	LinkList p,k;

	k = (LinkList)malloc(sizeof(struct node));
	k->next = NULL;

	while(n<5){
		p=(LinkList)malloc(sizeof(struct node));
   		p->data = 2*n+1;
  		p->next = k->next;
  		k->next = p;
  		n++;
		//printf("p->data = %d,p->next->data = %d,k->data = %d,k->next->data = %d \n",p->data,p->next->data,k->data,k->next->data);
	}
	k->data = n;

	//display(k);
	display(&p);

	return 1;
}

void display(LinkList l)
{
	LinkList tempL; 
    tempL = l;
    while(tempL){
        printf("%d",tempL->data);
        tempL = l->next;
    }
}

