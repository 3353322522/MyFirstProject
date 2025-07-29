#include<stdio.h>
void main()
{
	int cle=0;
	char *p,s[101];
	printf("请输入一行字符：");
	gets(s);
	p=s;
	while(p!='\0')
	{
		if((*p>='A')&&(*p<='Z'))
			++cle;

	}
	printf("大写字母个数=%d\n",cle);
}