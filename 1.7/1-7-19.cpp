#include<stdio.h>
void main()
{
	int shizhuanshiliu(int x);
	int num,a;
	printf("����һ������");
	scanf("%d",&num);
	printf("ʮ����תʮ�����ƵĽ��Ϊ��");
	a=shizhuanshiliu(num);
}
int shizhuanshiliu(int x)
{
	int a;
	a=x;
	printf("%x\n",a);
	return a;
}