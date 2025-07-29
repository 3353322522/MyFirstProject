#include<stdio.h>
#include<string.h>
#define N 81
void main()
{
	char ch[N];
	int i,count=0;
	puts("请输入一串字符：");
	gets(ch);
	for(i=0;i<strlen(ch);i++)
		if(ch[i]>='a'&&ch[i]<='z')
	          count++;
	printf("字母个数为：%d\n",count);		
}
