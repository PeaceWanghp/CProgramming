#include <stdio.h>
#include <stdlib.h>
#include "tree.c"
#include "../stack/stack_link.c"

//根左右
void preorder()
{
	BiTree tree;
    createTree(&tree);

	printf("1\n");
	if(!tree) return;

	printf("2\n");

	Stack stack;
	createStack(&stack);
	printf("3\n");

	BiNode node;
	printf("4 %d %d %d\n",tree->val,tree->left->val,tree->right->val);
	node = *tree;
	printf("--------\n");
	printf("---- %d ",node.val);
	while(node || (stack.size != 0)) {
		printf("++++%d",node.val);
		if(node != NULL) {
	//		printf(" %d ",node->val);
			push(&stack,&node);
			node = node.left;
		}
		else {
			node = pop(&stack);
			node = node.right;
		}
	}
}
/*
//左根右
void inorder(BiTree tree)
{
	if(!tree) return;

	Stack stack;
	createStack(&stack);

	BiNode *node = tree;
	while(node || stack.size != 0) {
		if(node) {
			push(&stack,node);
			node = node->left;
		}
		else {
			node = pop(&stack);
			printf("%d ",node->val);
			node = node->right;
		}
	}
}

//左右根
void postOrder(BiTree tree)
{

}
*/

int main()
{
	printf("PreOrder:\n");
	preorder();

//	printf("InOrder:\n");
//	inorder(tree);

//	printf("PostOrder:\n");
//	postOrder(tree);

//	printf("\n");

	return 1;
}

 /*
 __attribute__((constructor(101))) void foo()
 {
     printf("in constructor of foo\n");
 }
 __attribute__((constructor(102))) void foo1()
 {
     printf("in constructor of foo1\n");
 }
 __attribute__((destructor)) void bar()
 {
     printf("\nin destructor of bar\n");
 }
 */
