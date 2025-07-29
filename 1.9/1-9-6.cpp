#include<stdio.h>
void main()
{
	int a=1,b=5,c;
	c=a/b;
	#ifdef DEBUG
	printf("a=%d,b=%d\n",a,b);
	#endif
	printf("c=%d\n",c);
}