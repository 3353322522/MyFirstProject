#include<stdio.h>
void main()
{
	int i,sum=0;
	for(i=1;i<10;i+=2)
		sum+=i;
	printf("sum=%d\n",sum);
}