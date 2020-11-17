#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
	char value;
	struct Node *next;
}LNode;

typedef struct {
	struct Node *top;
	int size;
}SqStack;

#define MAXSIZE 5

enum Status {TRUE,FALSE,OK,ERROR};

enum Status Push(SqStack *S, LNode *node);
enum Status Pop(SqStack *S);
enum Status Traverse(SqStack *S);

int main() 
{
	SqStack *stack = malloc(sizeof(SqStack));
	stack->top = NULL;
	stack->top->next = NULL;
	stack->size = 0;

	char ch;

	while(1){
		printf("Input:");
		ch = getchar();	

		if(ch == 'a'){
	//		Pop(stack);
	//		Traverse(stack);
		}
		else if(ch == 'b') {
			break;
		}
		else if(ch == '\n'){
			
		}
		else {
			printf("%lu, %c\n",sizeof(LNode),ch);

			LNode *node = (LNode *)malloc(sizeof(LNode));
			node->next = NULL;
			node->value = ch;
			//printf("%lu, %c",sizeof(LNode),ch);

			Push(stack,node);
			Traverse(stack);
		}
	}
	
	return 0;
}

enum Status Push(SqStack *S, LNode *node)
{
	node->next = S->top;
	S->top = node;

	return OK;
}

enum Status Pop(SqStack *S)
{
	LNode *node = S->top;
	S->top = S->top->next;

	//printf("%c",node->value);
	return OK;
}

enum Status Traverse(SqStack *S)
{
	LNode *node = S->top;
	printf("%d",node->value);
	while(node){
		node = node->next;
		printf("%d",node->value);
	}

	return OK;
}

