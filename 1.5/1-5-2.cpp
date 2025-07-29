#include<math.h>
#include<stdio.h>
void main()
{
	long n;
	int sum=0;    
	printf("enter N:");
	scanf("%d",&n);
	do
	{
		sum=sum+(n%10);
		n=n/10;
	}while(n>0);
	printf("sum=%d\n",sum);
}