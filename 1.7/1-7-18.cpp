#include<stdio.h>
void main()
{
	int num;
	int panduan(int num);
	printf("����һ����:");
	scanf("%d",&num);
	if(panduan(num))
		printf("%d�ǻ�����\n",num);
	else
		printf("%d���ǻ�����\n",num);
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