#include<stdio.h>
void main()
{
	int a,b;
	scanf("%d/%d",&a,&b);
	if(b==0)
	{
		printf("´íÎó\n");
	}
	else
	{
		printf("%d/%d=%d......%d\n",a,b,a/b,a%b);
	}
}