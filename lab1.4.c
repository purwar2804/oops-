#include<stdio.h>
int f=1;
int fact(int n)
{
if(n==0)
return f;
 else
{
f=n*fact(n-1);
return f;
}
}
int main()
{
int a;
printf("enter the number");
scanf("%d",&a);
fact(a);
printf("%d",f);
}
