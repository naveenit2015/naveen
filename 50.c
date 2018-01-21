#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
scanf("%d",&n);
while(n!=0)
{
n=n%2;
if(n==n/2)
{
n=n/2;
printf("yes",n);
}
else
{
printf("no",n);
}
}
}
