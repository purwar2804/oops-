#include<stdio.h>
int main()

{
char s[100];
int i,k=0;
printf("enter the string");
scanf("%s",&s);
for(i=0;s[i]!='\0';i++)
{
k++;
}
printf("%d",k);
}
