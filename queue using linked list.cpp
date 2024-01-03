#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node*next;
}*front=NULL,*rear=NULL;
void insert(int value)
{
	struct Node*newNode;
	newNode=(struct Node*)malloc(sizeof(struct Node));
	newNode->data=value;
	newNode->next=NULL;
	if(front==NULL)
	  front=rear=newNode;
	else
	{
		rear->next=newNode;
		newNode=rear;
	}
	printf("Insertion is success");
}
void del()
{
	if(front==NULL)
	  printf("Queue is empty");
	else
	{
		struct Node*temp=front;
		front=front->next;
		printf("Deleted element:%d",temp->data);
		free(temp);
	  }  
}
int main()
{
	int choice,n=1,a;
	while(n>0){
	printf("\n******Queue operations using linked list");
	printf("\n1.insert\n2.delete\n3.Exit");
	printf("Enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		{
			insert(a);
			break;
	   }
	   case 2:
	   	{
	   		del();
	   		break;
    	}
    	case 3:
    	{
		    exit(0);
		    break;
	   }
    }

	   continue;  
}
}
