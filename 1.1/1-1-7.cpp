#include<stdio.h>
void main()
{
	int a,b,c,d;
	scanf("%d/%d",&a,&b);
	if(b==0)
	{
		printf("ดํฮ๓\n");
	}
	else
	{
		c=a/b;
		d=a-b*c;
		printf("ษฬ=%d\n",c);
		printf("ำเสý=%d\n",d);
	}
} 
