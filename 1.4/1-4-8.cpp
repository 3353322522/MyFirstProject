#include<stdio.h>
void main()
{
	int a;
	printf("������һ����ţ�");
	scanf("%d",&a);
	if((a%4==0&&a%100!=0)||(a%400==0))
		printf("%d������\n",a);
	else printf("%d��������\n",a);
}