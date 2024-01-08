#include<stdio.h>
#include<stdlib.h>
#define size 10
struct node
{
	int data;
	struct node*next;
};
struct node*chain[size];
void init()
{
	int i;
	for(i=0;i<size;i++)
	  chain[i]=NULL;
}
void insert(int value)
{
	struct node*newnode=malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=NULL;
	int key=value%size;
	if(chain[key]==NULL)
	   chain[key]=newnode;
	else
	{
		struct node*temp=chain[key];
		while(temp->next)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	   }   
}
void print()
{
	int i;
	for(i=0;i<size;i++)
	{
		struct node*temp=chain[i];
		printf("chain[%d]--->",i);
		while(temp)
		{
			printf("%d--->",temp->data);
			temp=temp->next;
		}
		printf("NULL\n");
	}
}
int main()
{
	init();
	insert(10);
	insert(11);
	insert(81);
	insert(10);
	insert(7);
	insert(34);
	insert(94);
	insert(17);
	print();
	return 0;
}
	   
