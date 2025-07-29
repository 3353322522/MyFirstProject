#include<stdio.h>
void swap(int *p1,int *p2)
{
	int i;
	i=*p1;
	*p1=*p2;
	*p2=i;
}
void main()
{
	int n1,n2;
	printf("请输入两个整数：");
	scanf("%d%d",&n1,&n2);
	swap(&n1,&n2);
	printf("%d,%d\n",n1,n2);
}
