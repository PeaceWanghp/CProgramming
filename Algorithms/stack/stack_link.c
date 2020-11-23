typedef struct SNode {
	BiNode *value;
	struct SNode *next;
}LNode;

typedef struct {
	LNode *top;
	int size;
}Stack;

void createStack(Stack *stack)
{
	stack = malloc(sizeof(Stack));
	stack->top = NULL;
	stack->size = 0;
}

void push(Stack *stack, BiNode *node)
{
	printf(" %d ",node->val);

	LNode *lNode = (LNode *)malloc(sizeof(LNode));
	lNode->value = node;
	lNode->next = NULL;

	lNode->next = stack->top;
	stack->top = lNode;
	stack->size += 1;
}

BiNode * pop(Stack *stack)
{
	LNode *lNode = stack->top;
	stack->top = stack->top->next;
	stack->size -= 1;

	return lNode->value;
}

void traverse(Stack *stack)
{
	LNode *lNode = stack->top;
	while(lNode) {
		printf("%d",lNode->value->val);
		lNode = lNode->next;
	}
}
