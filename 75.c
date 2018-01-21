#include<stdio.h>
#include<string.h>
void main()
{
  char str[50];
  int a,l;
  printf("Enter the string");
  gets(str);
  a=strlen(str);
  if(a%2==0)
  {
    l=a/2;
    str[l]='*';
    str[l-1]='*';
    puts(str);
     }
