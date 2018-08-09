#include<stdio.h>
#include<math.h>
int main()
{
int a,p,i,j;
for(i=1;i<9;i++)
for(j=0;j<9;j++)
{
if(i!=j)
{
a=i*1000+i*100+j*10+j*1;
p=sqrt(a);
if(p*p==a)
printf("%d",a);
}}}
