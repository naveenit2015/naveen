#include<stdio.h>
void main()
{
int n,b=0,i;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
 b++;
 }        
}
if(b==2)
{
printf("prime number");
}
