#include <stdio.h>
#include <stdlib.h>
#include "tree.c"

int main()
{
	BiTree tree;
	createTree(&tree);

	BiNode node[7];
	int i,len;
	node[0] = *tree;
	len = 1;

	for(i=0;i<7;i++){
		if(node[i].left){
			node[len] = *node[i].left;
			len += 1;
		}
		
		if(node[i].right){
			node[len] = *node[i].right;
			len += 1;
		}
	}

	printf("\n");

	for(int j=0;j<7;j++){
		printf("%d",node[j].val);
	}

	return 1;
}
