#include<stdio.h>
void main()
{
	int digui(int x);
	int m,a;
	printf("input n:");
	scanf("%d",&a);
	m=digui(a);
	printf("n�Ľ׳�Ϊ��%d\n",m);
}
int digui(int x)
{
	int z,y=1;
	if(x==1)
	{
		z=1;
		return z;
	}
	else
	{
		while((x-1)>0)
		{
			y=y*x;
			x=x-1;
		}
		z=y;
		return z;
	}
}




