#include <stdio.h>
#include <stdlib.h>

typedef struct QNode {
	int data;
    struct QNode *next;
} Node;

typedef struct {
	Node *front;
	Node *rear;
	int length;
} LinkQueue;

LinkQueue *createQueue();
void enQueue(LinkQueue *q,Node *node);
void deQueue(LinkQueue *q);
void displayQueue(LinkQueue *q);

Node *createNode(int value);

int main() 
{
	LinkQueue *queue = createQueue();

	int value;
	Node *node;

	while(1) {
		printf("Input:");
		scanf("%d",&value);
		
		if(value == 0) {
			break;
		}

		if (value < 0) {
			deQueue(queue);
			displayQueue(queue);
		}
		else {
			node = createNode(value);
			enQueue(queue,node);
			displayQueue(queue);
		}
	}

	return 1;
}

LinkQueue *createQueue() 
{
	LinkQueue *q = malloc(sizeof(LinkQueue));
	q->length = 0;
	q->front = NULL;
	q->rear = NULL;	

	return q;
}

void enQueue(LinkQueue *q,Node *node)
{
	if(q->length == 0) {
		q->front = node;
		q->rear = node;
	}
	else {
		q->rear->next = node;
		q->rear = node;
	}

	q->length ++;
}

void deQueue(LinkQueue *q)
{
	if(q->length == 0){
		printf("Queue is empty!");
		return;
	}

	q->length == 1 ? q->rear = NULL:NULL;
	q->front = q->front->next;
	q->length --;
}

void displayQueue(LinkQueue *q) 
{
	if(q->length == 0){
		printf("Display Null!");
		return;
	}

	printf("Output:");
	Node *node = q->front;
	while(node) {
		printf("%d  ",node->data);
		node = node->next;
	}
	printf("\n");
}

Node *createNode(int value) 
{
	Node *node = malloc(sizeof(Node));
	node->data = value;
	node->next = NULL;

	return node;
}

