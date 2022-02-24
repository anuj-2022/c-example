#include<stdio.h>

void main()
{
int i=0,j=0,k=0;
printf("Enter the array size\n");
scanf("%d",&k);
int arr[k];
for(i=0;i<k;i++)
{
printf("Enter the data %d\n",i+1);
scanf("%d",&arr[i]);
}
for(i=0;i<k;i++)
j+=arr[i];

printf("Result of all array element is %d\n",j);
}
