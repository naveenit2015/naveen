#include <stdio.h>
int main()
{
    int a=0,b=1,i,c;
    printf("%d%d",a,b);
    for(i=0;i<=6;i++)
    {
    c=a+b;
    a=b;
    b=c;
    printf("%d",c);
}
