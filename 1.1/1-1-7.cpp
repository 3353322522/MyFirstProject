#include<stdio.h>
void main()
{
	int a,b,c,d;
	scanf("%d/%d",&a,&b);
	if(b==0)
	{
		printf("����\n");
	}
	else
	{
		c=a/b;
		d=a-b*c;
		printf("��=%d\n",c);
		printf("����=%d\n",d);
	}
} 
