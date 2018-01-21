#include<stdio.h>
int main()
{
	int a[]={10,6,90,3,5};
	int i,j,temp;
	for(i=0;i<=5;i++)
	{
		for(j=1;j<=4;j++)
		{
		
		
		if(a[i]>=a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=a[i];
			
		}
		}

}
