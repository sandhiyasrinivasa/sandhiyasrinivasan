#include<stdio.h>
int queue[5],n=5,front=-1,rear=-1,i;
void enqueue(){
	if(rear>=n-1){
		printf("queue empty");
	}
	else
	{   
		rear++;
		int val;
		printf("enter a data:");
		scanf("%d",&val);
		queue[rear]=val;
	}
		for(i=0;i<=rear;i++){
		printf("%d ",queue[i]);}
}
void dequeue(){
	front=0;
	if(front==rear)
	{
		printf("queue empty");
    }
	else
	{
		printf("deleted :%d\n",queue[front]);
		front++;
	}
	for(i=front;i<=rear;i++){
		printf("%d ",queue[i]);
		}
	
}
int main(){
	int i,m,n=5;
	printf("1.enqueue\n2.dequeue\n3.display");
	while(n>=0){
		printf("\nenter choice:");
		scanf("%d",&m);
		switch(m){
			case 1:{
				enqueue();
				break;
			}
			case 2:{
				dequeue();
				break;
			}
			case 3:{
				for(i=front;i<=rear;i++)
				{
					printf("%d",queue[i]);
				}
				break;
			}
			continue;
		}
	}

}
