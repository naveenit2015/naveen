#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int l,i;
gets(a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]=='a'&&a[i]=='e'&&a[i]=='i'&&a[i]=='o'&&a[i]=='u')
{
puts(yes);
}
