#include<stdio.h>
void main ()
{
	int a[3][4]={{1,2,3,0},{4,5,6,0},{7,8,9,0}},i,j;

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
			a[i][3]=a[i][3]+a[i][j];
	   	printf(" 第%d行的元素之和为%d\n",i+1,a[i][3]);
	}
}