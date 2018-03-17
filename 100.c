#include <stdio.h>
int main()
{
	int a,b,remain,mul=1;
	scanf("%d",&a);
	b=a;
	while(b!=0)
	{
		remain=b%10;
		mul=mul*remain;
		b=b/10;
	}
	printf("%d",mul);
	return 0;
}

© 2018 GitHub, Inc.
