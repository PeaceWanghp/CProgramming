#include <stdio.h>
#include <stdlib.h>
 
typedef int datatype;
typedef struct node
{
    datatype data;
    struct node *next;
}Lnode;
 
Lnode *creat()
{
    int x;
    Lnode *head,*p=NULL;
    scanf("%d",&x);
    printf("输入的数据:%5d",x);

    while(x!=0) {
        head = (Lnode *)malloc(sizeof(Lnode));
        head -> data = x;
        head -> next = p;
        p = head;
        scanf("%d",&x);
        printf("%5d",x);
    }
 
    return head;
}
 
void visit(Lnode *head)
{
    Lnode *p = head;
    if (head != NULL)
        do {
            printf("%5d",p->data);
            p = p-> next;
        }while(p!=NULL);
}
 
int main()
{
    Lnode *head;
    printf("输入原始数据，0作为结束：");
    head = creat();
    printf("\n遍历单链表:");
    visit(head);
    printf("\n");

    return 0;
}
