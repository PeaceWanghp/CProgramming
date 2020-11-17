#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 5

typedef struct {
	int data[MAXSIZE];
	int topIndex;
}aStack;

aStack *create();
void push(aStack *stack, int value);
int pop(aStack *stack);
void clear(aStack *stack);

int main()
{
	char ch;

	aStack *stack = create();

	while(1){
		ch = getchar();

		if(ch == 'a')
			push(stack,1);
		else if (ch == 'b')
			pop(stack);
		else if(ch == 'e'){
			clear(stack);
			break;
		}
	}

	return 0;
}

aStack* create()
{   
    aStack *stack = malloc(sizeof(aStack));
  	stack->topIndex = 0;
	return stack;
}

void push(aStack *stack, int value)
{   
    if(stack->topIndex == MAXSIZE){
        printf("stack is full!\n");
		return;
	}
    
    stack->data[stack->topIndex++] = value;
	printf("in:%d\n",value);
}

int pop(aStack *stack)
{   
    if(stack->topIndex == 0){
        printf("stack is empty!\n");
		return 0;
    }

	int value = stack->data[stack->topIndex-1];
	stack->data[--(stack->topIndex)] = 0;
	printf("out:%d\n",value);
	return value;
}

void clear(aStack *stack)
{   
   	while(pop(stack));
}

