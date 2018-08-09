#include<stdio.h>
int main()
{
int k=0,n;
printf("enter the no");
scanf("%d",&n);

while(n!=0)
{
n=n/10;
k++;
}
printf("%d",k);
}
