#include<stdio.h>
#include<string.h>
#define N 81
void main()
{
	char ch[N];
	int i,count=0;
	puts("������һ���ַ���");
	gets(ch);
	for(i=strlen(ch);i>=0;i--)
		printf("%c",ch[i]);
	puts("\n");
}