#include <stdio.h>
void main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	int x;
	if(a<b)
	{
		x=a;
		a=b;
		b=x;
	}
	if(a<c)
	{
		x=a;
		a=c;
		c=x;
	}
	if(b<c)
	{
		x=b;
		b=c;
		c=x;
	}
	printf("%d,%d,%d",a,b,c);
}(a>b)?a#b:
