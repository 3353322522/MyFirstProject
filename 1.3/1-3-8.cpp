#include <stdio.h>
void main()
{
	int a,b,c;
	scanf("%d,%d,%d",&a,&b,&c);
	int n,m;
	n=(a>b)?a:b;
	m=(c>n)?c:n;
	printf("max=%d\n",m);
}