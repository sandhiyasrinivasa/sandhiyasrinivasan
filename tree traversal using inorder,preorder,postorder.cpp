#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node*left;
	struct Node*right;
};
struct Node*newNode(int data)
{
	struct Node*node=(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
void inordertraversal(struct Node*root)
{
	if(root==NULL)
	  return;
	inordertraversal(root->left);
	printf("%d",root->data);
	inordertraversal(root->right);  
}
void preordertraversal(struct Node*root)
{
	if(root==NULL)
	  return;
	printf("%d",root->data);
	preordertraversal(root->left);
	preordertraversal(root->right);  
}
void postordertraversal(struct Node*root)
{
	if(root==NULL)
	  return;
	postordertraversal(root->left);
	postordertraversal(root->right);
	printf("%d",root->data);  
}
int main()
{
	int inorder,preorder,postorder;
	struct Node*root=newNode(1);
	root->left=newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	printf("inorder traversal:");
	inordertraversal(root);
	printf("\n");
	printf("preorder traversal:");
	preordertraversal(root);
	printf("\n");
	printf("postorder traversal:");
	postordertraversal(root);
	printf("\n");
	return 0;
}
