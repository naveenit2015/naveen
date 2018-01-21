#include <stdio.h>
 int main(void) {
	int n,i,count=0;
  printf("Enter the number");
  scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}
	if(count<3)
	{
		printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}
