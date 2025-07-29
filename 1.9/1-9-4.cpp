#include<stdio.h>
void main()
{
	int a=3;
	#define a 2
	#define f(b) a*(b)
	int c=3;
	printf("%d\n",f(c+1));
	#undef a
	printf("%d\n",f(c+1));
	#define a 1
	printf("%d\n",f(c+1));
}