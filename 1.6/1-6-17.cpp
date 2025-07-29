#include<stdio.h>
void main()
{
	char a[100];
	int len=0;
	printf("输入一串字符：");
	scanf("%s",a);
	while(a[len]!='\0')
	{
		len++;
	}
	printf("字符串的长度为：%d\n",len);
}
