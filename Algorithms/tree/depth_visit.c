#include <stdio.h>
#include <stdlib.h>
#include "tree.c"

void preorder(BiNode *node)
{
	if(!node) return;

	printf("%d",node->val);
	preorder(node->left);
	preorder(node->right); 
}

void inorder(BiNode *node)
{
	if(!node) return;

	inorder(node->left);
	printf("%d",node->val);
	inorder(node->right);
}

void postorder(BiNode *node)
{
	if(!node) return;

	postorder(node->left);
	postorder(node->right);
	printf("%d",node->val);
}

int main() 
{
	BiTree tree;
	createTree(&tree);

	preorder(tree);
	printf("\n");
	inorder(tree);
	printf("\n");
	postorder(tree);

	return 1;
}

