#include<stdio.h>
#include<string.h>

void main()
{
int l=0,i=0,j=0;
char str[10],str1[30];
printf("enter the string data\n");
scanf("%s",str1);
scanf("%s",str);
l=strlen(str);
j=strlen(str1);
for(i=0;i<l;i++)
str1[j+i]=str[i];

printf("\n%s",str1);
}

