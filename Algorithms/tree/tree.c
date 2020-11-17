
typedef struct Node {
	int val;
	struct Node *left,*right;
}BiNode,*BiTree;

void createTree(BiTree *tree)
{	
	*tree = (BiNode *)malloc(sizeof(BiNode));
	(*tree)->val = 1;
	(*tree)->left = (BiNode*)malloc(sizeof(BiNode));
	(*tree)->right = (BiNode*)malloc(sizeof(BiNode));
	
	(*tree)->left->val = 2;
	(*tree)->left->left = (BiNode*)malloc(sizeof(BiNode));
	(*tree)->left->right = (BiNode*)malloc(sizeof(BiNode));

	(*tree)->right->val = 3;
	(*tree)->right->left = (BiNode*)malloc(sizeof(BiNode));
	(*tree)->right->right = (BiNode*)malloc(sizeof(BiNode));

	(*tree)->left->left->val = 4;
	(*tree)->left->left->left = NULL;
	(*tree)->left->left->right = NULL;

	(*tree)->left->right->val = 5;
	(*tree)->left->right->left = NULL;
	(*tree)->left->right->right =NULL;

	(*tree)->right->left->val = 6;
	(*tree)->right->left->left = NULL;
	(*tree)->right->left->right = NULL;

	(*tree)->right->right->val = 7;
	(*tree)->right->right->left = NULL;
	(*tree)->right->right->right = NULL;
}

