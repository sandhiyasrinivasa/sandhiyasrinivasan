#include<stdio.h>
#include<math.h>
void insertionsort(int a[],int n)
{
	int i,temp,j;
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&&a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=temp;
	}
}
void printArray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	  printf("%d",a[i]);
	printf("\n");  
}
int main()
{
	int a[]={12,11,14,15,6};
	int n=sizeof(a)/sizeof(a[0]);
	insertionsort(a,n);
	printArray(a,n);
	return 0;
}
