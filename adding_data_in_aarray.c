#include<stdio.h>


void adding(int x[],int a,int b,int c);
void main()
{
int i=0,j=0,loc,n,d;
printf("Enter the array size location and location data\n");
scanf("%d %d %d",&n,&loc,&d);
int arr[n+1];
for(i=0;i<n;i++)
{
printf("Enter the data %d\n",i+1);
scanf("%d",&arr[i]);
}
printf("Before adding the data\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);

adding(arr,loc,d,n);
printf("After adding the data\n");
for(i=0;i<=n;i++)
printf("%d\t",arr[i]);
}

void adding(int x[],int a,int b,int c)
{
	int i=0;
	for(i=c-1;i>=a;i--)
	{
		x[i+1]=x[i];
	}
	x[a-1]=b;
}
		
		 
	
