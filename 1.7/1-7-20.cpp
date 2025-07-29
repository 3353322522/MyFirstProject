#include<stdio.h>
void main()
{
	int fun(int b[]);
	int a[10],i,n;
	for(i=0;i<100;i++)
	{
		scanf("%d",&a[i]);
	}
	n=fun(a);
	printf("%d\n",n);
}
int fun(int b[])
{
	int j,x=0;
	for(j=0;j<100;j++)
		if(b[j]%2!=0)
			x+=1;
	return x;
}