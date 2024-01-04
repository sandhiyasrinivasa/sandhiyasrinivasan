#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 6
int CQ[MAX];
int front=0;
int rear=0;
int count=0;
void insertCQ()
{
	int data;
	if(count==MAX)
	{
		printf("\nCircular queue is full");
	}
	else
	{
		printf("enter data:");
		scanf("%d",&data);
		CQ[rear]=data;
		rear=(rear+1)%MAX;
		count++;
		printf("Data Inserted in the circular Queue");
	}
}
	void deleteCQ()
	{
		if(count==0)
		{
			printf("\nCircular Queue is Empty");
		}
		else
		{
			printf("Deleted element from Circular Queue");
			front=(front+1)%MAX;
			count--;
		}
	}
		void displayCQ()
        {
        	int i,j;
        	if(count==0)
        	{
        		printf("\nElements in the circular Queue:");
        		j=count;
        	}
        	else{
			for(j=front;j>=0;j--)
        		{
        			printf("%d",CQ[j]);
        			j=(j+1)%MAX;
				}
				
			}
	}
			int main()
			{
				int choice,a,n=1;
				printf("\n*********circular queue operations are*****\n");
				printf("\n1.insert\n2.delete\n3.display\n4.Exit");
				while(n>0)
				{
				printf("Enter your choice:");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
				    {
				    	insertCQ();
				    	break;
					}
					case 2:
					{
						deleteCQ();
						break;
					}
					case 3:
					{
						displayCQ();
						break;
					}
					case 4:
					{
						exit(0);
						break;
					}
		   }
		   
		     continue;
			}
			
			return 0;
		}   
