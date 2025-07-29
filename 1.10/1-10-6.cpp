#include<stdio.h>
void main()
{
	union
	{
		int a;
		char b;
	}ab;
	ab.a=97;ab.b='A';
	printf("ab.a=%d,ab.b=%c\n",ab.a,ab.b);
}