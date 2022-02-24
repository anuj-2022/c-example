//WAP to find the largest number in the arrays
#include<stdio.h>

void main()
{
	int i=0,j=0,n=0;
	printf("enter the size of array\n");
	scanf("%d",&n);
	int arr[n],big=0;
	for(i=0;i<n;i++)
	{
		printf("Enter the data %d\n",i+1);
		scanf("%d",&arr[i]);
	}
	big=arr[0];
	for(i=0;i<n;i++)
	{
		if(arr[i]>big)
			big=arr[i];
	}
//	for(i=0;i<n;i++)
	printf("%d\t",big);
}
			
	

