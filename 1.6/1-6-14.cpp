#include<stdio.h>
#include<string.h>
#define N 81
void main()
{
	char ch[N];
	int i,count=0;
	puts("������һ���ַ���");
	gets(ch);
	for(i=0;i<strlen(ch);i++)
		if(ch[i]>='a'&&ch[i]<='z')
	          count++;
	printf("��ĸ����Ϊ��%d\n",count);		
}
