#include<stdio.h>
void main()
{
	int shizhuanshiliu(int x);
	int num,a;
	printf("输入一个数：");
	scanf("%d",&num);
	printf("十进制转十六进制的结果为：");
	a=shizhuanshiliu(num);
}
int shizhuanshiliu(int x)
{
	int a;
	a=x;
	printf("%x\n",a);
	return a;
}