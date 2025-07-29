#include<stdio.h>
void main()
{
	int num;
	int panduan(int num);
	printf("输入一个数:");
	scanf("%d",&num);
	if(panduan(num))
		printf("%d是回文数\n",num);
	else
		printf("%d不是回文数\n",num);
}
int panduan(int num)
{
	int temp=num;
	int reverse=0;
	while(temp>0)
	{
		reverse=reverse*10+temp%10;
		temp/=10;
	}
	return num==reverse;
}