#include<stdio.h>
void main()
{
	int a,b,c,m;
	int max(int x,int y);
	printf("input a,b,c=");
	scanf("%d %d %d",&a,&b,&c);
	m=max(c,max(a,b));
	printf("最大值是：%d\n",m);
}
int max(int x,int y)
{
	int z;
	z=(x>y)?x:y;
	return z;
}