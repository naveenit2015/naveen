#include<stdio.h>
#include<string.h>
int main()
{
char s[10];
int a=1,l,i;
scanf("%s",s);
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]==s[l-1-i])
{
a=0;
}}
if(a==0)
{
printf("yes");
}
else
{
printf("no");
}
