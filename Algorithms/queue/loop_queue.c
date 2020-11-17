#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#define MAXSIZE 5

typedef struct {
	char data[MAXSIZE];
	int front;
	int rear;
}cQueue;

cQueue* createQueue()
{
	printf("%lu\n",sizeof(cQueue));
	cQueue *q = malloc(sizeof(cQueue));
	assert(q != NULL);

	q->front = 0;
	q->rear = 0;
	printf("%lu%lu%lu,%lu,%lu\n",sizeof(q->front),sizeof(q->rear),sizeof(q->data),sizeof(q),sizeof(cQueue));

	return q;
}

void queueLength(cQueue *q)
{
	printf("front = %d, rear = %d, length = %d\n",q->front,q->rear,(q->rear-q->front+MAXSIZE)%MAXSIZE);
}

void inQueue(cQueue *q, char e)
{
	if((q->rear+1)%MAXSIZE == q->front){
		printf("Queue is full!\n");

		return;
	}

	q->data[q->rear] = e;
	q->rear = (q->rear + 1)%MAXSIZE;
	
	printf("in: %c\n",e);
	queueLength(q);
}

void outQueue(cQueue *q)
{
	if(q->rear == q->front) {
		printf("Queue is empty!\n");
		return;
	}

	char e = q->data[q->front];
	q->front = (q->front+1)%MAXSIZE;

	printf("out: %c\n",e);
	queueLength(q);
}

int main()
{
	cQueue *q = createQueue();
	
	char ch;

	while(1) {
		printf("Input:");
		ch = getchar();
		
		if(ch == '\n')
			continue;

		if(ch == '0'){
			printf("exit!\n");
			break;
		}

		if(ch == 'e')
			outQueue(q);
		else
			inQueue(q,ch);
	}

	return 0;
}
