#include<stdio.h>
#include<stdlib.h>
int main()
{
int i=0,j=0,n;
printf("Enter the array size\n");
scanf("%d",&n);
char arr[n];
scanf("%s",arr);

for(i=0;i<n;i++)
{
if(arr[i]>96 && arr[i]<123)
arr[i]=arr[i]-32;
}
printf("\n%s",arr);
return 0;
}

