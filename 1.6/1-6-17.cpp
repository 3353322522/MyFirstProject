#include<stdio.h>
void main()
{
	char a[100];
	int len=0;
	printf("����һ���ַ���");
	scanf("%s",a);
	while(a[len]!='\0')
	{
		len++;
	}
	printf("�ַ����ĳ���Ϊ��%d\n",len);
}
