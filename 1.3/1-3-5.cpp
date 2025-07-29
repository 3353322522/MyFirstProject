#include <stdio.h>
void main()
{
	int a=123,b=234,t;
	printf("a=%d,b=%d\n",a,b);
	t=a;
	a=b;
	b=t;
	printf("a=%d,b=%d",a,b);
}