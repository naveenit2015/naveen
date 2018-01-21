#include <stdio.h>

int main(void) {
	int i,a[i],j,k,n,l,temp=0,t=0;
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
		scanf("%d",&a[i]);
	}
      for(i=0;i<k;i++)
{		
	for(l=i+1;l<k;l++)
	{
		if(a[i]>a[l])
		{
temp=a[i];
a[i]=a[l];
a[l]=temp;
}
}
}


	printf("%d\t",temp);
	for(i=0;i<k;i++)
{
	for(l=i+1;l<k;l++)
	{
		if(a[i]<a[l])
		{
t=a[i];
a[i]=a[l];
a[l]=t;
}
}
}
