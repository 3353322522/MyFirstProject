#include<stdio.h>
void main()
{
	int cle=0;
	char *p,s[101];
	printf("������һ���ַ���");
	gets(s);
	p=s;
	while(p!='\0')
	{
		if((*p>='A')&&(*p<='Z'))
			++cle;

	}
	printf("��д��ĸ����=%d\n",cle);
}