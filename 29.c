#include<stdio.h>
#include<conio.h>
int main()
{
int hours,minutes,n;
printf("enter the n values");
scanf("%d",&n);
if(n%n==0)
{
hours=n/60;
minutes=n%60;
printf("%d%d",&hours,&minutes);
}
return 0;
}
